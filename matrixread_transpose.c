#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 float matrix[100][100];
 int m, n, i, j;
 
/* Ask the user to give the name of the file which contains the matrix */
  printf("Enter the file name: ");
  scanf("%s", filename);
  
/* Open the file for reading and check if it was opened successfully */
 fp = fopen(filename, "r");

 if (fp == 0)
 {
  printf("Error in opening the file %s.\n", filename);
  return(1);
 }
 
 fscanf(fp, "%d", &m);
 fscanf(fp, "%d", &n);
 
 for(i = 0; i < m; i++)
 {
  for(j = 0; j < n; j++)
  {
   fscanf(fp, "%f", &matrix[i][j]);               /* Read one entry */
  }
 }
 
/* Code to print the matrix in transpose form here */
 for(i = 0; i < n; i++)
 {
  for(j = 0; j < m; j++)
  {
   printf(" %f ", matrix[j][i]);                  /* Print one entry */
  }
  printf("\n");
 }
 

fclose(fp);                                       /* Close the file */
return(0);
}
