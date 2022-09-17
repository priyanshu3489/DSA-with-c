def solve(n, arr):
    list = []
    product = 1
    for i,el in enumerate(arr):
        for j in range(n):
            if i != j:
                product = product*arr[j]
        list.append(product)
        product = 1
    return list
arr = [4,-1,5,10,2,1]
l = solve(6,arr)
print(l)