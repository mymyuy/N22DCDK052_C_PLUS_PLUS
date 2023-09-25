#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void sort(int a[], int n)
{
    for(int i=0;i<=n;i++)
        for(int j=i%2;j<n-1;j+=2) 
            if(a[j] > a[j+1]) 
                swap(a[j], a[j+1]);
}
void insSort(int a[], int n)
{
	for (int i=1; i<n; i++)
	{
		int x=a[i]; int pos=i-1;
		while(pos>=0 && x<a[pos])
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
void selSort(int a[], int n)
{
	
	//int min = a[0];
	for (int i=0; i < n-1; i++ )
	{
		int min_pos=i;
		for (int j=i+1; j<n; j++)
		{
			if (a[j]<a[min_pos])
			{
				min_pos=j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}
void quiSort(int a[], int left, int right)
{
	int random = left + (rand()%(right-left+1));
	//int pivot = a[(left+right)/2];
	int pivot = a[random];
	int l = left; int r = right;
	do{
		while(a[l] < pivot)
			l++;
		while (a[r] > pivot)
			r--;
		if ( l <= r )
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}while(l <= r );
	if ( left < r )
		quiSort(a, left, r);
	if ( l < right )
		quiSort(a, l, right);

}
void oddEvenSort(int arr[], int n)
{
    bool isSorted = false; // Initially array is unsorted
 
    while (!isSorted)
    {
        isSorted = true;
 
        // Perform Bubble sort on odd indexed element
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                isSorted = false;
              }
        }
 
        // Perform Bubble sort on even indexed element
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                isSorted = false;
            }
        }
    }
 
    return;
}
struct nodeChild
{
    string s;
    nodeChild *next;
};
struct nodeParent 
{
    string s;
    nodeChild *child;
    nodeParent *next;
};

const int n = 50000;
int main()
{
   nodeParent *a = new nodeParent;
   a->s = "A";
   a->child = nullptr;
   a->next = nullptr;

   nodeChild *childA = new nodeChild;
   childA->s = "apple";
   childA->next = nullptr;
   a->child = childA;

    nodeChild *childA2 = new nodeChild;
    childA2->s = "ant";
    childA2->next = nullptr;
    childA->next = childA2;

    nodeParent *b = new nodeParent;
    b->s = "B";
    b->child = nullptr;
    b->next = nullptr;
    a->next = b;

    nodeChild *childB = new nodeChild;
    childB->s = "bag";
    childB->next = nullptr;
    b->child = childB;

    nodeChild *childB2 = new nodeChild;
    childB2->s = "bed";
    childB2->next = nullptr;
    childB->next = childB2;

    
    {// srand(time(NULL));
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     a[i] = n - 2*i;
    // }
    // clock_t start, end;
    // double time_used;
    // start = clock();
    // // sort(a,n);
    // // oddEvenSort(a,n);
    // quiSort(a,0,n-1);
    // // selSort(a,n);
    // // insSort(a,n);
    // end = clock();
    // time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    // // for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) cout << a[i] << " ";
    // cout << "\nTime: " << time_used << endl;
    }
    return 0;
}