#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

typedef struct Book
{
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
}Book;

//===============================================================================//
//  								Functions       				   	 	     //
//===============================================================================//

void addBook(Book[], int*);
void displayAll(Book[], int);
void searchById(Book[], int);
void searchByName(Book[], int);
void removeBook(Book[], int*);
void updateBook(Book[], int);
void showAuthorBooks(Book[], int);
void showCategoryBooks(Book[], int);
void top3Price(Book[], int);
void top3Rating(Book[], int);
void sortByPrice(Book[], int);
void sortByRating(Book[], int);


//===============================================================================//
//  							Main Function       				   	 	     //
//===============================================================================//

void main()
{
	int size=100;
	
    Book* books = (Book*)malloc(sizeof(Book)*size);
    
    int count=0;
    
    books[0].id = 101;
	strcpy(books[0].name,"CProgramming");
	strcpy(books[0].author,"DennisRitchie");
	strcpy(books[0].category,"Programming");
	books[0].price = 499.00;
	books[0].rating = 4.8;
	
	books[1].id = 102;
	strcpy(books[1].name,"JavaBasics");
	strcpy(books[1].author,"JamesGosling");
	strcpy(books[1].category,"Programming");
	books[1].price = 650.00;
	books[1].rating = 4.7;
	
	books[2].id = 103;
	strcpy(books[2].name,"PythonGuide");
	strcpy(books[2].author,"GuidoRossum");
	strcpy(books[2].category,"Programming");
	books[2].price = 720.00;
	books[2].rating = 4.9;
	
	books[3].id = 104;
	strcpy(books[3].name,"DataStructures");
	strcpy(books[3].author,"MarkAllen");
	strcpy(books[3].category,"ComputerScience");
	books[3].price = 580.00;
	books[3].rating = 4.6;
	
	books[4].id = 105;
	strcpy(books[4].name,"Algorithms");
	strcpy(books[4].author,"RobertSedgewick");
	strcpy(books[4].category,"ComputerScience");
	books[4].price = 890.00;
	books[4].rating = 4.9;
	
	books[5].id = 106;
	strcpy(books[5].name,"Database");
	strcpy(books[5].author,"AbrahamSilberschatz");
	strcpy(books[5].category,"Database");
	books[5].price = 760.00;
	books[5].rating = 4.8;
	
	books[6].id = 107;
	strcpy(books[6].name,"OperatingSystem");
	strcpy(books[6].author,"Galvin");
	strcpy(books[6].category,"ComputerScience");
	books[6].price = 850.00;
	books[6].rating = 4.7;
	
	books[7].id = 108;
	strcpy(books[7].name,"ComputerNetworks");
	strcpy(books[7].author,"AndrewTanenbaum");
	strcpy(books[7].category,"Networking");
	books[7].price = 780.00;
	books[7].rating = 4.8;
	
	books[8].id = 109;
	strcpy(books[8].name,"CleanCode");
	strcpy(books[8].author,"RobertMartin");
	strcpy(books[8].category,"Software");
	books[8].price = 950.00;
	books[8].rating = 4.9;
	
	books[9].id = 110;
	strcpy(books[9].name,"SoftwareEngineering");
	strcpy(books[9].author,"IanSommerville");
	strcpy(books[9].category,"Software");
	books[9].price = 820.00;
	books[9].rating = 4.7;
	
	count = 10;									//count is 10 because 10 hardcoded books
    
    int choice;

    while(1)
    {
        printf("\n==============================");
        printf("\n BOOK MANAGEMENT SYSTEM");
        printf("\n==============================");
        printf("\n1. Add Book");
        printf("\n2. Remove Book");
        printf("\n3. Search Book by ID");
        printf("\n4. Search Book by Name");
        printf("\n5. Show Books by Author");
        printf("\n6. Show Books by Category");
        printf("\n7. Update Book");
        printf("\n8. Display All Books");
        printf("\n9. Top 3 Books by Price");
        printf("\n10. Top 3 Books by Rating");
        printf("\n11. Exit");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            	if(size==count)
				{
            		int newSize = size*2;
            		
					Book* arr = (Book*)malloc(sizeof(Book)*newSize);
					
					for(int i=0; i<count; i++)
					{
						arr[i] = books[i];		
					}	
					
					free(books);
					books = arr;
					size=newSize;
					
					printf("Memory Allocation started");
				}
				
                addBook(books,&count);
                break;

            case 2:
                removeBook(books,&count);
                break;

            case 3:
                searchById(books,count);
                break;

            case 4:
                searchByName(books,count);
                break;

            case 5:
                showAuthorBooks(books,count);
                break;

            case 6:
                showCategoryBooks(books,count);
                break;

            case 7:
                updateBook(books,count);
                break;

            case 8:
                displayAll(books,count);
                break;

            case 9:
                top3Price(books,count);
                break;

            case 10:
                top3Rating(books,count);
                break;

            case 11:
                return;

            default:
                printf("Invalid Choice!");
        }
    }
}


//===============================================================================//
//  								Add Books       				   	 	     //
//===============================================================================//

void addBook(Book books[], int* count)
{
    int i;

    printf("\nEnter Book ID : ");
    scanf("%d", &books[*count].id);

    if(books[*count].id < 0)
    {
        printf("Book ID cannot be negative!\n");
        return;
    }

    for(i=0; i<*count; i++)
    {
        if(books[i].id == books[*count].id)
        {
            printf("Book ID already exists!\n");
            return;
        }
    }

    printf("Enter Book Name : ");
    scanf("%s", books[*count].name);

    for(i=0; i<*count; i++)
    {
        if(strcasecmp(books[i].name, books[*count].name) == 0)
        {
            printf("Book Name already exists!\n");
            return;
        }
    }

    printf("Enter Author Name : ");
    scanf("%s", books[*count].author);

    printf("Enter Category : ");
    scanf("%s", books[*count].category);

    printf("Enter Price : ");
    scanf("%f", &books[*count].price);

    if(books[*count].price < 0)
    {
        printf("Price cannot be negative!\n");
        return;
    }

    printf("Enter Rating : ");
    scanf("%f", &books[*count].rating);

    if(books[*count].rating < 0)
    {
        printf("Rating cannot be negative!\n");
        return;
    }

    (*count)++;

    printf("\nBook Added Successfully!\n");
}

//===============================================================================//
//  								Remove books       				   	 	     //
//===============================================================================//

void removeBook(Book books[], int* count)
{
    int id,i,j;
    int flag=0;

    printf("Enter Book ID You Want To Delete : ");
    scanf("%d",&id);

    for(i=0; i<*count ;i++)
    {
        if(books[i].id==id)
        {
        	flag=1;
        	
            for(j=i;j<*count-1;j++)
            {
                books[j]=books[j+1];
            }

            (*count)--;

            printf("\nBook Removed Successfully!");
        }
    }

	if(flag==0)
	    printf("\nBook Not Found!");
}

//===============================================================================//
//  							Search Book by id       				   	 	 //
//===============================================================================//

void searchById(Book books[], int count)
{
    int id,i;
    int flag=0;

    printf("Enter Book ID : ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
        	flag=1;
            printf("\nBook Found");
            printf("\nName : %s",books[i].name);
            printf("\nAuthor : %s",books[i].author);
            printf("\nCategory : %s",books[i].category);
            printf("\nPrice : %.2f",books[i].price);
            printf("\nRating : %.1f",books[i].rating);
        }
    }
	
	if(flag==0)
    	printf("\nBook Not Found!");
}

//===============================================================================//
//  								Search book by name     				   	 //
//===============================================================================//

void searchByName(Book books[], int count)
{
    char name[50];
    char tempName[50];
    char tempBook[50];
    int i, j;
    int flag = 0;

    printf("Enter Book Name You Want To Search : ");
    scanf("%s", name);

    strcpy(tempName, name);										//copy given name

    for(j = 0; tempName[j] != '\0'; j++)
    {
        tempName[j] = tolower(tempName[j]);						//convt given name in lowercase
    }

    for(i = 0; i < count; i++)
    {
        strcpy(tempBook, books[i].name);						//copy all book name in tempBook array

        for(j = 0; tempBook[j] != '\0'; j++)
        {
            tempBook[j] = tolower(tempBook[j]);					//convrt all books in lowercase
        }

        if(strstr(tempBook, tempName) != NULL)
        {
            flag = 1;

            printf("\nBook Found");
            printf("\nID : %d", books[i].id);
            printf("\nAuthor : %s", books[i].author);
            printf("\nCategory : %s", books[i].category);
            printf("\nPrice : %.2f", books[i].price);
            printf("\nRating : %.1f", books[i].rating);
        }
    }

    if(flag == 0)
        printf("\nBook Not Found!");
}


//===============================================================================//
//  					    Show all books by author       				 		 //
//===============================================================================//

void showAuthorBooks(Book books[], int count)
{
    char author[50];
    char tempAuthor[50];
    char tempBookAuthor[50];
    int i, j;
    int flag = 0;

    printf("Enter Author Name : ");
    scanf("%s", author);

    strcpy(tempAuthor, author);										//copy given author name

    for(j = 0; tempAuthor[j] != '\0'; j++)
    {
        tempAuthor[j] = tolower(tempAuthor[j]);						//convt given name in lowercase
    }

    for(i = 0; i < count; i++)
    {
        strcpy(tempBookAuthor, books[i].author);					//copy all book name in tempBookAuthor array

        for(j = 0; tempBookAuthor[j] != '\0'; j++)
        {
            tempBookAuthor[j] = tolower(tempBookAuthor[j]);			//convrt all books in lowercase
        }

        if(strstr(tempBookAuthor, tempAuthor) != NULL)
        {
            flag = 1;

            printf("\nBook Found");
            printf("\nID : %d", books[i].id);
            printf("\nName : %s", books[i].name);
            printf("\nCategory : %s", books[i].category);
            printf("\nPrice : %.2f", books[i].price);
            printf("\nRating : %.1f", books[i].rating);
            printf("\n-------------------------");
        }
    }

    if(flag == 0)
        printf("\nNo Books Found!");
}

//===============================================================================//
//  						Show all books of same category       				 //
//===============================================================================//

void showCategoryBooks(Book books[], int count)
{
    char category[30];
    char tempCategory[30];
    char tempBookCategory[30];
    int i, j;
    int flag = 0;

    printf("Enter Category : ");
    scanf("%s", category);

    strcpy(tempCategory, category);										//copy given category name

    for(j = 0; tempCategory[j] != '\0'; j++)
    {
        tempCategory[j] = tolower(tempCategory[j]);						//convt given name in lowercase
    }

    for(i = 0; i < count; i++)
    {
        strcpy(tempBookCategory, books[i].category);					//copy all book name in tempBookCategory array

        for(j = 0; tempBookCategory[j] != '\0'; j++)
        {
            tempBookCategory[j] = tolower(tempBookCategory[j]);			//convrt all books in lowercase
        }

        if(strstr(tempBookCategory, tempCategory) != NULL)
        {
            flag = 1;

            printf("\nBook Found");
            printf("\nID : %d", books[i].id);
            printf("\nName : %s", books[i].name);
            printf("\nAuthor : %s", books[i].author);
            printf("\nPrice : %.2f", books[i].price);
            printf("\nRating : %.1f", books[i].rating);
            printf("\n-------------------------");
        }
    }

    if(flag == 0)
        printf("\nNo Books Found!");
}

//===============================================================================//
//  								Update in book       				   	 	 //
//===============================================================================//

void updateBook(Book books[], int count)
{
    int id,i;
    int flag=0;
    int choice;

    printf("Enter Book ID : ");
    scanf("%d",&id);

//    for(i=0;i<count;i++)
//    {
//        if(books[i].id==id)
//        {
//        	flag=1;
//        	
//            printf("Enter New Price : ");
//            scanf("%f",&books[i].price);
//
//            printf("Enter New Rating : ");
//            scanf("%f",&books[i].rating);
//
//            printf("\nBook Updated Successfully!");
//        }
//    }

	for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
        	flag=1;
        	
			printf("\nWhat do you want to update?");
            printf("\n1. Price");
            printf("\n2. Rating");
            printf("\n3. Author");
            printf("\n4. Category");
            printf("\nEnter Choice : ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Enter New Price : ");
                    scanf("%f", &books[i].price);

                    if(books[i].price < 0)
                    {
                        printf("Price cannot be negative!");
                        return;
                    }
                    break;

                case 2:
                    printf("Enter New Rating : ");
                    scanf("%f", &books[i].rating);

                    if(books[i].rating < 0)
                    {
                        printf("Rating cannot be negative!");
                        return;
                    }
                    break;

                case 3:
                    printf("Enter New Author : ");
                    scanf("%s", books[i].author);
                    break;

                case 4:
                    printf("Enter New Category : ");
                    scanf("%s", books[i].category);
                    break;

                default:
                    printf("Invalid Choice!");
                    return;
            }

            printf("\nBook Updated Successfully!");
        }
    }

	if(flag==0)
	    printf("\nBook Not Found!");
}

//===============================================================================//
//  								Display Books       				   	     //
//===============================================================================//

void displayAll(Book books[], int count)
{
    int i;

    if(count==0)
    {
        printf("\nNo Books Available!");
        return;
    }

	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("%-8s %-20s %-20s %-18s %-10s %-8s\n",
	       "ID", "Name", "Author", "Category", "Price", "Rating");
	printf("-----------------------------------------------------------------------------------------------\n");
	
	for(i = 0; i < count; i++)
	{
	    printf("%-8d %-20s %-20s %-18s %-10.2f %-8.1f\n",
	           books[i].id,
	           books[i].name,
	           books[i].author,
	           books[i].category,
	           books[i].price,
	           books[i].rating);
	}
	
	printf("-----------------------------------------------------------------------------------------------\n");
}


//===============================================================================//
//  							Sort price(High to Low)       				   	 //
//===============================================================================//

void sortByPrice(Book temparr[], int count)
{
    int i,j;
    Book temp;

    for(i=0;i<count-1;i++)
    {  
        for(j=i+1;j<count;j++)
        {
            if(temparr[i].price<temparr[j].price)
            {
                temp=temparr[i];
                temparr[i]=temparr[j];
                temparr[j]=temp;
            }
        }
    }
}

//===============================================================================//
//  							Show top 3 prices       				   	 	 //
//===============================================================================//

void top3Price(Book books[], int count)
{
	int i;
	Book temparr[count];
	
	for(i=0; i<count; i++)
		temparr[i]=books[i];
	
    sortByPrice(temparr,count);

    int limit=(count<3)?count:3;

    printf("\nTop Books by Price");

    for(i=0;i<limit;i++)
    {
        printf("\n----------------");
        printf("\n%s",temparr[i].name);
        printf("\nPrice : %.2f",temparr[i].price);
    }
}

//===============================================================================//
//  							Sort Ratings(High to Low)       				 //
//===============================================================================//

void sortByRating(Book temparr[], int count)
{
    int i,j;
    Book temp;
    
    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(temparr[i].rating<temparr[j].rating)
            {
                temp=temparr[i];
                temparr[i]=temparr[j];
                temparr[j]=temp;
            }
        }
    }
}

//===============================================================================//
//  							Show top 3 ratings       				   	 	 //
//===============================================================================//

void top3Rating(Book books[], int count)
{
    int i;
    Book temparr[count];
    
    for(i=0; i<count; i++)
    	temparr[i]=books[i];
    	
    sortByRating(temparr, count);
    int limit=(count<3)?count:3;
	printf("\nTop Books by Rating");
	for(i=0;i<limit;i++)
    {
        printf("\n----------------");
        printf("\n%s",temparr[i].name);
        printf("\nRating : %.1f",temparr[i].rating);
    }
}