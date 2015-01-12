while 1:
	i,j=raw_input().split(' ')
	i=int(i)
	j=int(j)
	if i==0 and j==0:
		break
	print pow(i,j)
