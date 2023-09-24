# Lomuto's partition

def partition(arr, l, h):
	pivot = arr[h]
	i = l - 1
	for j in range(l, h):
		if arr[j] < pivot:
			i += 1
			arr[i], arr[j] = arr[j], arr[i]
	arr[i + 1], arr[h] = arr[h], arr[i + 1]
	print(arr)
	return i + 1

def quickSort(arr, l ,h):
	if l < h :
		pi = partition(arr, l, h)
		quickSort(arr, l, pi - 1)
		quickSort(arr, pi + 1, h)
	# return arr


arr = [6, 7, 9, 2, 1, 5, -1, 0, 120, 12]
quickSort(arr, 0, len(arr) - 1)
print(arr)