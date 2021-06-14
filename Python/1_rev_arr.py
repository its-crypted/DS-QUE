def rev_ls(A, start, end):
	while start < end:
		A[start], A[end] = A[end], A[start]
		start += 1
		end -=1

A = [1, 2, 3, 4, 5, 92, 87]
print (A)
rev_ls(A, 0, 6)
print(A)
