class rotatematrix_09june
{  
	static final int M=3; 
	static final int N=3;  
	static void rotateMatrix(int matrix[][], int k) 
	{  
		int temp[]=new int[M]; 
		k = k % M; 
		
		for (int i = 0; i < N; i++) 
		{  
			for (int t = 0; t < M - k; t++) 
			temp[t] = matrix[i][t]; 
			for (int j = M - k; j < M; j++) 
			matrix[i][j - M + k] = matrix[i][j]; 
			for (int j = k; j < M; j++) 
			matrix[i][j] = temp[j - k]; 
		} 
	} 
	static void displayMatrix(int matrix[][]) 
	{ 
		for (int i = 0; i < N; i++) 
		{ 
			for (int j = 0; j < M; j++) 
			System.out.print(matrix[i][j] + " "); 
			System.out.println(); 
		} 
	} 
	public static void main (String[] args) 
	{ 
		int matrix[][] = {{12, 23, 34}, 
						{45, 56, 67}, 
						{78, 89, 91}}; 
	int k = 2; 
	rotateMatrix(matrix, k); 
	displayMatrix(matrix); 
	} 
} 

 
