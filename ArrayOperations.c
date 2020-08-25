#include <stdio.h>
main() {
	int A[] = {10,20,30,40,50};
	int i = 0, j = sizeof(A)/sizeof(int);
	int at=0, lookingFor, updateKth;
	scanf("%d",&at);  //Enter the index where you want to insert/delete
	scanf("%d", &lookingFor);   // Enter the element you are looking for
	scanf("%d", &updateKth);   // Enter the index, where the value needs to be updated
	// Traverse Array
	printf("Elements of the Array are :\n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);

	/**********Insert an item in the array ************************/
	// At the beginning of the array i.e. 0 index
	// At the end of the array i.e. last index (No Of Elements - 1)
	// At any given possible index

	int t1 = 70;
	int t2 = A[0];
	for (i =0; i< j; i++) {
		A[i]=t1;        // A[0] = 20; // Beginning of the array i.e. 0 index
		t1 = t2;
		if (i!= j-1)
			t2 = A[i+1];
	}

	printf("After Insertion at Index 0: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);

	A[(sizeof(A)/sizeof(int)) -1] = 80;     // End of the array i.e. last index (No Of Elements - 1)

	printf("After Insertion at last Index: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);

	t1 = 100;
	t2 = A[at];
	for (i =at; i< j; i++) {
		A[i]=t1;        // A[at] = 50;    // At any given possible index
		t1 = t2;
		if (i!= j-1)
			t2 = A[i+1];
	}

	printf("After Insertion at Index %d: \n",at);
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);
	/************** End of Insertion ***********************/

	/****************** Deletion an item from an Array *********************/
	// From the beginning of the array i.e. 0 index
	// From the end of the array i.e. last index (No Of Elements - 1)
	// From any given possible index

	for(i=0; i<j; i++){
		if (i != j-1)
			A[i] = A[i+1];       // Deleted First element at first execution
	}

	printf("After Deleting first element: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);

	// Deletion from last is simply not accessing it or putting some meaningless data in the working context

	for(i=at; i<j; i++){
		if (i != j-1)
			A[i] = A[i+1];       // Deleted the element at given position at first execution
	}

	printf("After Deleting from %d Index: \n", at);
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);

	/************* End of Deletion ************************/


	/***************** Searching for an element in an Array **********************/
	int flagToFoundCheck = 0;
	for(i=0; i< j ;i++){
		if (A[i] == lookingFor){
			flagToFoundCheck = 1;
			break;
		}
	}

	if (flagToFoundCheck == 1)
		printf("%d found at %d Index\n",lookingFor,i);
	else
		printf("%d not found in the array\n");
	/***************** End of Searching for an element in an Array **********************/

	/****************************** Update an element in an array ***********************/

	A[updateKth] = 200;
	printf("Updated Array: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d \n", i, A[i]);
	/****************************** End of Update an element in an array ***********************/

}
