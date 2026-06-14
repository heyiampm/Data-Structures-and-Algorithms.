def quick_sort(arr):

    if len(arr) <= 1:
        return arr
    
    pivot = arr[len(arr) // 2]
    left = []
    mid = []
    right = []

    for x in arr:
        if x < pivot:
            left.append(x)
        elif x == pivot:
            mid.append(x)
        else:
            right.append(x)
            
    
    return quick_sort(left) + mid + quick_sort(right)

if __name__ == "__main__":
    numbers = [5, 2, 9, 1, 5, 6]
    sorted_numbers = quick_sort(numbers)
    print(sorted_numbers)