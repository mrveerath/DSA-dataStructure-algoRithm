#include <iostream>
using namespace std;

class Array
{
private:
    int *p;
    int size;
    int length;

public:
    Array(int sz)
    {
        size = sz;
        length = 0;
        p = new int[size];
    }

    ~Array()
    {
        delete[] p;
    }

    void inputElements(int n)
    {
        if (n > size)
        {
            cout << "Too many elements!" << endl;
            return;
        }
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        length = n;
    }

    void display(const string &message = "Array:") const
    {
        cout << message << " ";
        for (int i = 0; i < length; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    void append(int element)
    {
        if (length == size)
        {
            cout << "Array is full!" << endl;
            return;
        }
        p[length++] = element;
    }

    void insertAt(int index, int element)
    {
        if (index < 0 || index > length || length == size)
        {
            cout << "Invalid index or array full!" << endl;
            return;
        }
        for (int i = length; i > index; i--)
        {
            p[i] = p[i - 1];
        }
        p[index] = element;
        length++;
    }

    void deleteAt(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        int deleted = p[index];
        for (int i = index; i < length - 1; i++)
        {
            p[i] = p[i + 1];
        }
        length--;
        cout << "Deleted element: " << deleted << endl;
    }

    int search(int element) const
    {
        for (int i = 0; i < length; i++)
        {
            if (p[i] == element)
                return i;
        }
        return -1;
    }

    bool isExist(int element, const Array &a)
    {
        for (int i = 0; i < a.getLength(); i++)
        {
            if (a.getElement(i) == element)
                return true;
        }
        return false;
    }

    int get(int index) const
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index!" << endl;
            return -1;
        }
        return p[index];
    }

    void set(int index, int element)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        p[index] = element;
    }

    int maxIndex() const
    {
        if (length == 0)
            return -1;
        int maxIdx = 0;
        for (int i = 1; i < length; i++)
        {
            if (p[i] > p[maxIdx])
                maxIdx = i;
        }
        return maxIdx;
    }

    int minIndex() const
    {
        if (length == 0)
            return -1;
        int minIdx = 0;
        for (int i = 1; i < length; i++)
        {
            if (p[i] < p[minIdx])
                minIdx = i;
        }
        return minIdx;
    }

    int binarySearch(int element) const
    {
        int low = 0, high = length - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (p[mid] == element)
                return mid;
            else if (p[mid] < element)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int sum() const
    {
        int s = 0;
        for (int i = 0; i < length; i++)
            s += p[i];
        return s;
    }

    double average() const
    {
        if (length == 0)
            return 0;
        return (double)sum() / length;
    }

    void reverseInPlace()
    {
        int start = 0, end = length - 1;
        while (start < end)
        {
            swap(p[start], p[end]);
            start++;
            end--;
        }
    }

    int *reverseToNewArray() const
    {
        int *rev = new int[length];
        for (int i = 0; i < length; i++)
        {
            rev[i] = p[length - 1 - i];
        }
        return rev;
    }

    void insertSorted(int element)
    {
        if (length == size)
        {
            cout << "Array is full!" << endl;
            return;
        }
        int i = length - 1;
        while (i >= 0 && p[i] > element)
        {
            p[i + 1] = p[i];
            i--;
        }
        p[i + 1] = element;
        length++;
    }

    bool isSorted() const
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (p[i] > p[i + 1])
                return false;
        }
        return true;
    }

    void moveNegativesToFront()
    {
        int i = 0, j = length - 1;
        while (i < j)
        {
            while (p[i] < 0)
                i++;
            while (p[j] >= 0)
                j--;
            if (i < j)
                swap(p[i], p[j]);
        }
    }

    static Array merge(const Array &a1, const Array &a2)
    {
        Array merged(a1.length + a2.length);
        int i = 0, j = 0, k = 0;

        while (i < a1.length && j < a2.length)
        {
            if (a1.p[i] < a2.p[j])
                merged.p[k++] = a1.p[i++];
            else
                merged.p[k++] = a2.p[j++];
        }

        while (i < a1.length)
            merged.p[k++] = a1.p[i++];
        while (j < a2.length)
            merged.p[k++] = a2.p[j++];

        merged.length = k;
        return merged;
    }

    static Array unionSet(const Array &a1, const Array &a2)
    {
        Array union(a1.length + a2.length);
        int indexToInsert = 0;
        for (int i = 0; i < a1.length; i++)
        {
            union.p[indexToInsert] = a1.p[i];
            indexToInsert++;
        }
        for (int i = 0; i < a2.length; i++)
        {
            if (!isExist(a2.p[i], union))
            {
                union.p[indexToInsert] = a2.p[i];
                indexToInsert++;
            }
        }
        union.length = indexToInsert;
        return union;
    }

    static Array intersectionSet(const Array &a1, const Array &a2)
    {
        Array intersection(a1.length);
        int indexToInsert = 0;
        for (int i = 0; i < a1.length; i++)
        {
            if (isExist(a1.p[i], a2))
            {
                if (!isExist(a1.p[i], intersection))
                {
                    intersection.p[indexToInsert++] = a1.p[i];
                }
            }
        }
        intersection.length = indexToInsert;
        return intersection;
    }

    static Array difference(const Array &a1, const Array &a2)
    {
        Array difference(a1.length);
        int indexToInsert = 0;
        for (int i = 0; i < a1.length; i++)
        {
            if (!isExist(a1.p[i], a2))
            {
                difference.p[indexToInsert++] = a1.p[i];
            }
        }
        difference.length = indexToInsert;
        return difference
    }
};
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    Array arr(size);

    int n;
    cout << "Enter number of elements to insert: ";
    cin >> n;
    arr.inputElements(n);

    arr.display("Original Array:");

    arr.append(99);
    arr.display("After appending 99:");

    arr.insertAt(2, 55);
    arr.display("After inserting 55 at index 2:");

    arr.deleteAt(2);
    arr.display("After deleting element at index 2:");

    arr.reverseInPlace();
    arr.display("After in-place reversal:");

    if (arr.isSorted())
    {
        cout << "The array is sorted.\n";
    }
    else
    {
        cout << "The array is not sorted.\n";
    }

    return 0;
}
