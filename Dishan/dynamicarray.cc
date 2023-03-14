#include <iostream>

//global variables
int *p;
int size;
int elements;

//functions used
void print();
void copy(int [], int[], int);
void add(int);
void remove(int);

int main()
{
	size = 2;
	elements = 0;
	p = new int[size];
	int choice, numbers;
	do {
		std::cout << "\n( 0 ) Print Element\n" 
				<< "( 1 ) Add Element\n"
				<< "( 2 ) Delete Element\n"
				<< "( 3 ) Return Size\n"
				<< "( 4 ) Exit\n" << std::endl;
		std::cout << "Enter Option: ";
		std::cin >> choice;
		switch(choice)
		{
			case 0:
				print();
				break;
			case 1:
				std::cout << "Enter element: ";
				std::cin >> numbers;
			   	add(numbers);
				break;
			case 2:
				std::cout << "Enter the element to delete: ";
				std::cin >> numbers;
				remove(numbers);
				break;
			case 3:
				std::cout << "S: " << size << ", E: " << elements << std::endl;
				break;
			case 4:
				break;
			default:
				std::cout << "Invalid Option\n";
				break;
		}
	}while(choice != 4);
	delete [] p;
	return 0;
}

void print()
{
	if(!elements)
		std::cout << "No elements";
	for(int i=0; i<elements; ++i)
	{
		std::cout << p[i];
		if (i != elements-1)
			std::cout << ", ";
	}
	std::cout << '\n';
}

void add(int n)
{
	if (elements == size)
	{
		size *= 2;
		int temp[elements+1];
		copy(temp, p, elements);
		delete [] p;
		p = new int[size];
		copy(p, temp, elements);
		std::cout << "Array expanded\n";
	}
	p[elements] = n;
	++elements;
}

void remove(int n)
{
	int j=0;
	int temp[elements];

	for(int i=0; i<elements; ++i)
		if(n != p[i])
			temp[j++] = p[i];
	if(j == elements)
	{
		std::cout << "Not there\n";
		return;
	}
	else elements = j;
	if(elements <= size/2)
	{
		std::cout << "Array shrinked\n";
		size /=2;
	}
	delete [] p;
	p = new int[size];
	copy(p, temp, elements);
}

void copy(int to[], int from[], int size)
{
	for(int i=0; i< size; ++i)
		to[i] = from[i];
}
