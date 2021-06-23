bool pairWithDifferenceK(int a[], int n, int k)
{
    sort(a, a + n);
    int ans = true;
    for (int i = 0; i < n; i++)
    {
        if (k + a[i] < a[i])
        {
            if (binary_search(a, a + i, k + a[i]))
            {
                ans = false;
                break;
            }
        }
        else if ((k + a[i]) > a[i])
        {

            if (binary_search(a + i + 1, a + n, k + a[i]))
            {
                ans = false;
                break;
            }
        }
        else
        {
            if (i + 1 < n)
            {
                if (a[i] == a[i + 1])
                {
                    ans = false;
                    break;
                }
            }
            if (i > 0)
            {
                if (a[i] == a[i - 1])
                {
                    ans = false;
                    break;
                }
            }
        }
    }

    if (ans)
    {
        return false;
    }
    else
    {
        return true ;
    }
}