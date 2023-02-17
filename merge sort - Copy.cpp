void mege(int arr[], int l, int m, int r)
{
	int i, j ,k;
	int n1 = -1+1;
	int n2 = r-m;
	int L [n1], R[n2];
	for (i = 0; i < n1; i++)
	L[i] = arr[1+i];
	for(j=0;j<n2;j++)
		R[j] = arr[m+i+j];
		i = 0;
		j = 0;
		k = 0;
		while (i<n1&&j<n2)
		{
			if(L[i]<=R[j])
			{
				arr[k]=L[i];
				i++;
			}
			else
			{
				arr[k]=R[i];
				j++;
	
			}
			k++;
		}
			while (i<n1)
		{
				arr[k] = L[i];
				i++;
				k++;
		
		}
		
	        while (j<n2)
	        {
	        	arr[k]=R[j];
	        	j++;
	        	k++;
			
			}	
}