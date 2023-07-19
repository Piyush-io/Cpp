if (n < 3)
            return 0;
        sort(arr, arr + n);
        int i = 0;
        int j = n - 1;
        int count = j - i + 1;
        while (i < j && count >= 3)
        {
            int sum = 0;
            for (int z = i; z <= j; z++)
            {
                sum += arr[z];
            }
            cout << sum << endl;
            if (sum == 0 && count == 3)
                return true;
            else if (sum < 0)
            {
                i++;
            }
            else
                j--;
            count = j - i + 1;
        }
        return false;