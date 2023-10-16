
using System; 
	
class GFG{ 
static int countSubsequece(int[] a, int n) 
{ 
	int i, j, k, l;  
	int answer = 0; 
	for(i = 0; i < n; i++) 
	{ 
		for(j = i + 1; j < n; j++) 
		{ 
			for(k = j + 1; k < n; k++) 
			{ 
				for(l = k + 1; l < n; l++) 
				{ 
					if (a[j] == a[l] && 
						a[i] == a[k]) 
					{ 
						answer++; 
					} 
				} 
			} 
		} 
	} 
	return answer; 
} 
public static void Main() 
{ 
	int[] a = { 1, 2, 3, 2, 1, 3, 2 }; 
	
	Console.WriteLine(countSubsequece(a, 7)); 
} 
} 


