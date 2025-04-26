/* Image Processing with Dynamic 2D Arrays
Background: You are developing a simple image processing tool. Images are represented as 2D arrays
of pixel values (0-255 for grayscale).
Task:
1. Ask the user to input the dimensions (rows and columns) of the image.
2. Dynamically allocate a 2D array to represent the image.
3. Populate the array with random pixel values (0-255).
4. Implement the following operations:
• Flip the image horizontally (swap rows).
• Convert the image to its negative (subtract each pixel value from 255).
• Crop the image (ask the user for new dimensions and resize the array).
5. Display the original and processed images (print the 2D arrays).
6. Deallocate the memory after use. */

#include<iostream>
#include<new>
#include<iomanip>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<windows.h>

using namespace std;

//Function prototypes
void flip(int**,int,int);
void convert(int**,int,int);
void crop(int**,int,int);

int main()
{
	int i,j,rows,col;
	char ch;
	int **image;
	cout<<"\nEnter dimensions of image:\n";
	cout<<"\nRows: ";
	cin>>rows;
	cout<<"\nColumns: ";
	cin>>col;
	
//	Dynamic allocation of pointer-to-pointer array
	image=new int *[rows];
	
//	Dynamic allocation of 2D array (columns)
	for(i=0;i<rows;i++)
	{
		image[i]=new int [col];
	}
	
//	Populate array
	cout<<"\nEnter Pixel values(0-255):\n";
	for(i=0;i<rows;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter value for ["<<i<<","<<j<<"]: ";
			cin>>image[i][j];
		}
	} 
	
//	Display current image
    cout<<"\nOriginal Image\n";
    cout<<"-----------------\n";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\t";
		for(j=0;j<col;j++)
		{
			cout<<image[i][j]<<" ";
		}
	}
	
//	Operations:
    do
    {
	    cout<<"\n\n\n----*Image Operations*----\n";
        cout<<"\nFlip horizontally (F)\n";
        cout<<"\nConvert to negative (N)\n";
        cout<<"\nCrop Image (C)\n";
        cout<<"\nEnter your choice: ";
        cin>>ch;
       switch(ch)
       {
    	case 'F':
    	case 'f': flip(image,rows,col);break;
    	case 'N':
    	case 'n': convert(image,rows,col);break;
    	case 'C':
    	case 'c': crop(image,rows,col);break;
    	case 'e':
    	case 'E': cout<<"\nExiting image operators...\n";
    	          exit(0);break;
	    default:
		{
			for(i=0;i<rows;i++)
	        {
		        cout<<"\n";
		        for(j=0;j<col;j++)
		        {
			        cout<<image[i][j]<<" ";
	 	        }
	        }
		}	
       }
	}while(ch!='e' || ch!='E');
//	De-allocating memory
	for(i=0;i<rows;i++)
	{
		delete [] image[i];
	}
	delete image;
	
	return 0;
}

// Flip image horizontally
void flip(int** image, int rows, int col)
{
	cout<<"\nHorizontally Flipped Image\n";
	cout<<"-----------------------------\n";
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<col/2;j++)
        {
            swap(image[i][j],image[i][col-j-1]);
        }
    }
//    Displaying flipped image
    for(int i=0;i<rows;i++)
    {
    	cout<<"\n";
    	for(int j=0;j<col;j++)
    	{
    		cout<<image[i][j]<<" ";
		}
	}
}

	//Image Negative conversion
	void convert(int** image,int rows,int col)
	{
		cout<<"\nConverted Image\n";
		cout<<"-----------------";
		int i,j;
		for(int i=0;i<rows;i++)
	    {
		    for(int j=0;j<col;j++)
		    {
			    image[i][j]=255-image[i][j];
		    }
	    }
//	    Displaying converted image
	    for(i=0;i<rows;i++)
	    {
	    	cout<<"\n";
	    	for(j=0;j<col;j++)
	    	{
	    		cout<<image[i][j]<<" ";
			}
		}
	}
	
//	Cropping Image
	void crop(int**image,int rows,int col)
	{
		cout<<"\n-----*Image Cropping*-----\n";
		int i,j,r,c;
		cout<<"\nEnter new dimensions:\n";
		cout<<"\nEnter rows: ";
		cin>>r;
		cout<<"\nEnter columns: ";
		cin>>c;
		if(r>rows || c>col)
		{
			cout<<"\nCan't crop your image, Dimensions too large!";
		}
		// Creating pointer-to-pointer
		int **img;
		img=new int *[r];
//		Dynamic Allocation for resizing
		for(i=0;i<r;i++)
		{
			img[i]=new int[c];
		}
//		storing image array to img(resized) array
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
		    {
		    	img[i][j]=image[i][j];
		    }
		}
//		Displaying Cropped image
        cout<<"\nCropped Image\n";
        cout<<"--------------";
		for(i=0;i<r;i++)
		{
			cout<<"\n";
			for(j=0;j<c;j++)
			{
				cout<<img[i][j]<<" ";
			}
		}
//		De-allocation of memory
		for(i=0;i<r;i++)
		{
			delete [] img[i];
		}	
		delete [] img;
	}
	
	