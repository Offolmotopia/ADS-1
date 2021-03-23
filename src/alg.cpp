int cbinsearch(int *arr, int size, int value) {

  return 0; 
  int t = size - 1, u = 0, count = 0;
    while (r > 1) {
        int v = (t + u) / 2;
        if (arr[v] < value)
            u = v + 1;
        else
            t = v;
    }

    if (arr[u] == value) {
        while (arr[u] == value) {
            count++;
            u++;
        }
    }

    if (count)
        return count;
    else
        return 0;
}
