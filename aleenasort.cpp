#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <queue>
#include <stack>
//#include <bits/stdc++.h>
using namespace std;

struct Organization
{
    int noOfEmployees;
    string index, founded, organization_id, Name, website, country, description, industry;

public:
    Organization()
    {
    }
    Organization(string index, string organization_id, string Name, string website, string country, string description, string founded, string industry, string noOfEmployees)
    {
        this->index = index;
        this->organization_id = organization_id;
        this->Name = Name;
        this->website = website;
        this->country = country;
        this->description = description;
        this->founded = founded;
        this->industry = industry;
        this->noOfEmployees = stoi(noOfEmployees);
    }
};

vector<Organization> arr;
void add(string index, string organization_id, string Name, string website, string country, string description, string founded, string industry, string noOfEmployees)
{
    Organization o = Organization(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
    arr.push_back(o);
}
char loadMenu()
{
    cout << "-------------------" << endl;
    cout << "Select one of the following options..." << endl;
    cout << "1. Load 100 Records." << endl;
    cout << "2. Load 1000 Records." << endl;
    cout << "3. Load 10000 Records." << endl;
    cout << "4. Load 100000 Records." << endl;
    cout << "5. Load 500000 Records." << endl;
    cout << "6. Back. " << endl;
    cout << "Your Option.." << endl
         << endl;
    char option;
    cin >> option;
    return option;
}
char subMenu()
{
    cout << "-------------------" << endl;
    cout << "Select one of the following options..." << endl;
    cout << "1. Bubble Sort." << endl;
    cout << "2. Insertion Sort." << endl;
    cout << "3. Selection Sort." << endl;
    cout << "4. Merge Sort." << endl;
    cout << "5 Quick Sort " << endl;
    cout << "6 Heap Sort " << endl;
    cout << "7 Count Sort " << endl;
    cout << "8 Radix Sort " << endl;
    cout << "9 Bucket Sort " << endl;
    cout << "0. Back. " << endl;
    cout << "Your Option.." << endl;

    char option;
    cin >> option;
    return option;
}
void load100Data()
{
    string index;
    string organization_id;
    string Name;
    string website;
    string country;
    string description;
    string founded;
    string industry;
    string noOfEmployees;
    ifstream File;
   // File.open("C:/Users/DELL/Downloads/aleenasort/organizations100.csv");
   File.open("organizations100.csv");
    int count = 0;
    string skipline;

    while (!File.eof())
    {
        if (count == 0)
        {
            string temp;
            getline(File, temp);
            count = 1;
        }
        else
        {

            while (getline(File, index, ','))
            {
                getline(File, organization_id, ',');
                getline(File, Name, ',');
                getline(File, website, ',');
                getline(File, country, ',');
                getline(File, description, ',');
                getline(File, founded, ',');
                getline(File, industry, ',');
                getline(File, noOfEmployees, '\n');
                add(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
            }
        }
    }

    File.close();
}
void load1000Data()
{
    string index;
    string organization_id;
    string Name;
    string website;
    string country;
    string description;
    string founded;
    string industry;
    string noOfEmployees;
    ifstream File;
    File.open("C:/Users/DELL/Downloads/aleenasort/organizations1000.csv");
    int count = 0;
    string skipline;

    while (!File.eof())
    {
        if (count == 0)
        {
            string temp;
            getline(File, temp);
            count = 1;
        }
        else
        {

            while (getline(File, index, ','))
            {
                getline(File, organization_id, ',');
                getline(File, Name, ',');
                getline(File, website, ',');
                getline(File, country, ',');
                getline(File, description, ',');
                getline(File, founded, ',');
                getline(File, industry, ',');
                getline(File, noOfEmployees, '\n');
                add(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
            }
        }
    }

    File.close();
}

void load10000Data()
{
    string index;
    string organization_id;
    string Name;
    string website;
    string country;
    string description;
    string founded;
    string industry;
    string noOfEmployees;
    ifstream File;
    File.open("C:/Users/DELL/Downloads/aleenasort/organizations10000.csv");
    int count = 0;
    string skipline;

    while (!File.eof())
    {
        if (count == 0)
        {
            string temp;
            getline(File, temp);
            count = 1;
        }
        else
        {

            while (getline(File, index, ','))
            {
                getline(File, organization_id, ',');
                getline(File, Name, ',');
                getline(File, website, ',');
                getline(File, country, ',');
                getline(File, description, ',');
                getline(File, founded, ',');
                getline(File, industry, ',');
                getline(File, noOfEmployees, '\n');
                add(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
            }
        }
    }

    File.close();
}

void load100000Data()
{
    string index;
    string organization_id;
    string Name;
    string website;
    string country;
    string description;
    string founded;
    string industry;
    string noOfEmployees;
    ifstream File;
    File.open("C:/Users/DELL/Downloads/aleenasort/organizations100000.csv");
    int count = 0;
    string skipline;

    while (!File.eof())
    {
        if (count == 0)
        {
            string temp;
            getline(File, temp);
            count = 1;
        }
        else
        {

            while (getline(File, index, ','))
            {
                getline(File, organization_id, ',');
                getline(File, Name, ',');
                getline(File, website, ',');
                getline(File, country, ',');
                getline(File, description, ',');
                getline(File, founded, ',');
                getline(File, industry, ',');
                getline(File, noOfEmployees, '\n');
                add(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
            }
        }
    }

    File.close();
}

void load500000Data()
{
    string index;
    string organization_id;
    string Name;
    string website;
    string country;
    string description;
    string founded;
    string industry;
    string noOfEmployees;
    ifstream File;
    File.open("C:/Users/DELL/Downloads/aleenasort/organizations500000.csv");
    int count = 0;
    string skipline;

    while (!File.eof())
    {
        if (count == 0)
        {
            string temp;
            getline(File, temp);
            count = 1;
        }
        else
        {

            while (getline(File, index, ','))
            {
                getline(File, organization_id, ',');
                getline(File, Name, ',');
                getline(File, website, ',');
                getline(File, country, ',');
                getline(File, description, ',');
                getline(File, founded, ',');
                getline(File, industry, ',');
                getline(File, noOfEmployees, '\n');
                add(index, organization_id, Name, website, country, description, founded, industry, noOfEmployees);
            }
        }
    }

    File.close();
}

void swap(Organization &a, Organization &b)
{
    Organization c;
    c = a;
    a = b;
    b = c;
}
void Bubble(int n)
{

    for (int x = 0; x < n - 1; x++)
    {
        bool isSwapped = false;
        for (int y = 0; y < n - x - 1; y++)
        {
            if (arr[y].noOfEmployees > arr[y + 1].noOfEmployees)
            {
                swap(arr[y], arr[y + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }
}
int findMinimum(int start, int end)
{
    int min = arr[start].noOfEmployees;
    int minIndex = start;
    for (int x = start; x < end; x++)
    {
        if (min > arr[x].noOfEmployees)
        {
            min = arr[x].noOfEmployees;
            minIndex = x;
        }
    }
    return minIndex;
}
void Selection(int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        int minIndex = findMinimum(x, n);
        swap(arr[x], arr[minIndex]);
    }
}
void Insertion(int n)
{
    for (int x = 1; x < n; x++)
    {
        Organization key = arr[x];
        int y = x - 1;
        while (y >= 0 && arr[y].noOfEmployees > key.noOfEmployees)
        {
            arr[y + 1] = arr[y];
            y--;
        }
        arr[y + 1] = key;
    }
}

void merge(int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    queue<Organization> tempArr;
    while (i <= mid && j <= end)
    {
        if (arr[i].noOfEmployees < arr[j].noOfEmployees)
        {
            tempArr.push(arr[i]);
            i++;
        }
        else
        {
            tempArr.push(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        tempArr.push(arr[i]);
        i++;
    }
    while (j <= end)
    {
        tempArr.push(arr[j]);
        j++;
    }
    for (int x = start; x <= end; x++)
    {
        arr[x] = tempArr.front();
        tempArr.pop();
    }
}
void mergeSort(int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(start, mid);
        mergeSort(mid + 1, end);
        merge(start, mid, end);
    }
}
int partition(int start, int end, int pivot)
{
    int left = start;
    int right = end;
    while (left <= right)
    {
        while (arr[left].noOfEmployees < arr[pivot].noOfEmployees && left <= end)
            left++;
        while (arr[right].noOfEmployees >= arr[pivot].noOfEmployees && right >= start)
            right--;
        if (left < right)
            swap(arr[left], arr[right]);
    }
    swap(arr[right], arr[pivot]);
    return right;
}
void quickSort(int start, int end)
{
    if (start < end)
    {
        int pivot = start;
        int mid = partition(start + 1, end, pivot);
        quickSort(start, mid - 1);
        quickSort(mid + 1, end);
    }
}
int parentIndex(int i)
{
    return (i - 1) / 2;
}
int leftChildIndex(int i)
{
    return (2 * i) + 1;
}
int rightChildIndex(int i)
{
    return (2 * i) + 2;
}
void heapify(int size, int index)
{
    int maxIndex;
    while (true)
    {
        int lIdx = leftChildIndex(index);
        int rIdx = rightChildIndex(index);
        if (rIdx >= size)
        {
            if (lIdx >= size)
                return;
            else
                maxIndex = lIdx;
        }
        else
        {
            if (arr[lIdx].noOfEmployees >= arr[rIdx].noOfEmployees)
                maxIndex = lIdx;
            else
                maxIndex = rIdx;
        }
        if (arr[index].noOfEmployees < arr[maxIndex].noOfEmployees)
        {
            swap(arr[index], arr[maxIndex]);
            index = maxIndex;
        }
        else
            return;
    }
}
int heapSort(int size)
{
    for (int x = (size / 2) - 1; x >= 0; x--)
    {
        heapify(size, x);
    }
    for (int x = size - 1; x > 0; x--)
    {
        swap(arr[0], arr[x]);
        heapify(x, 0);
    }
}
int maximum(int size)
{
    int max = arr[0].noOfEmployees;
    for (int i = 1; i < size; i++)
    {
        if (arr[i].noOfEmployees > max)
            max = arr[i].noOfEmployees;
    }
    return max;
}

void countSort(int size)
{
    int max = maximum(size);

    vector<int> count(max + 1);
    vector<Organization> output(arr.size());
    for (int x = 0; x < arr.size(); x++)
    {
        count[arr[x].noOfEmployees]++;
    }
    for (int x = 1; x < count.size(); x++)
    {
        count[x] = count[x - 1] + count[x];
    }
    for (int x = arr.size() - 1; x >= 0; x--)
    {
        int index = count[arr[x].noOfEmployees] - 1;
        count[arr[x].noOfEmployees]--;
        output[index] = arr[x];
    }
    for (int x = 0; x < output.size(); x++)
    {
        arr[x] = output[x];
    }
}
void countingSort(int place, int size)

{
    vector<int> count(10);
    vector<Organization> output(size);
    for (int x = 0; x < size; x++)
    {
        count[(arr[x].noOfEmployees / place) % 10]++;
    }
    for (int x = 1; x < count.size(); x++)
    {
        count[x] = count[x - 1] + count[x];
    }
    for (int x = size - 1; x >= 0; x--)
    {
        int index = count[(arr[x].noOfEmployees / place) % 10] - 1;
        count[(arr[x].noOfEmployees / place) % 10]--;
        output[index] = arr[x];
    }
    for (int x = 0; x < output.size(); x++)
    {
        arr[x] = output[x];
    }
}

void radixSort(int size)
{
    int max = maximum(size);
    int place = 1;
    while ((max / place) > 0)
    {
        countingSort(place, size);
        place = place * 10;
    }
}
void insertSort(vector<Organization> &array)
{
    for (int x = 1; x < array.size(); x++)
    {
        Organization key = arr[x];
        int y = x - 1;
        while (y >= 0 && arr[y].noOfEmployees > key.noOfEmployees)
        {
            arr[y + 1] = arr[y];
            y--;
        }
        arr[y + 1] = key;
    }
}
void bucketSort(int size)
{
    vector<vector<Organization>> bucket(size);
    for (int x = 0; x < size; x++)
    {
        bucket[(arr[x].noOfEmployees / size)].push_back(arr[x]);
    }
    for (int x = 0; x < bucket.size(); x++)
    {
        insertSort(bucket[x]);
    }
    int index = 0;
    for (int x = 0; x < bucket.size(); x++)
    {
        for (int y = 0; y < bucket[x].size(); y++)
        {
            arr[index] = bucket[x][y];
            index++;
        }
    }
    cout << "ye bucket hai " << endl;
}

void writeData()
{
    ofstream File;
    File.open("sortedData.csv");
    File << "Index, Organization_id, Name, Website, Country, Description, Founded, Industry, NoOfEmployees\n";
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        File << arr[i].index << "," << arr[i].organization_id << "," << arr[i].Name << "," << arr[i].website << "," << arr[i].country << "," << arr[i].description << "," << arr[i].founded << "," << arr[i].industry << "," << arr[i].noOfEmployees << "\n";
    }
    File.close();
    cout << "DATA WRITTEN SUCCESSFULLY" << endl;
}
main()
{
    char option = 'a';

    while (option != '6')
    {
        option = loadMenu();

        if (option == '1')
        {
            load100Data();
            char opt = 'd';

            while (opt != '0')
            {
                opt = subMenu();
                if (opt == '1')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Bubble(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }

                else if (opt == '2')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Insertion(n);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '3')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Selection(n);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '4')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    mergeSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '5')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    quickSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '6')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    heapSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '7')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    countSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '8')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    radixSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '9')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    // bucketSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                    cout << "mai ch rha" << endl;
                }
            }
        }
        else if (option == '2')
        {
            load1000Data();
            char opt = 'd';
            while (opt != '0')
            {
                opt = subMenu();
                if (opt == '1')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Bubble(n);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }

                else if (opt == '2')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Insertion(n);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '3')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Selection(n);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '4')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    mergeSort(0, n - 1);

                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '5')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    quickSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '6')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    heapSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '7')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    countSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '8')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    radixSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '9')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    bucketSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
            }
        }
        else if (option == '3')
        {
            load10000Data();
            char opt = 'd';
            while (opt != '0')
            {
                opt = subMenu();
                if (opt == '1')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Bubble(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }

                else if (opt == '2')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Insertion(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '3')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Selection(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '4')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    mergeSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '5')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    quickSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '6')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    heapSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '7')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    countSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '8')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    radixSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '9')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    bucketSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                    cout << "mai ch rha" << endl;
                }
            }
        }
        else if (option == '4')
        {
            load100000Data();
            char opt = 'd';
            while (opt != '0')
            {
                opt = subMenu();
                if (opt == '1')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Bubble(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }

                else if (opt == '2')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Insertion(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '3')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Selection(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '4')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    mergeSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '5')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    quickSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '6')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    heapSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '7')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    countSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '8')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    radixSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '9')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    bucketSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                    cout << "mai ch rha" << endl;
                }
            }
        }
        else if (option == '5')
        {
            load500000Data();
            char opt = 'd';
            time_t str, end, start;
            time(&start);
            while (opt != '0')
            {
                opt = subMenu();
                if (opt == '1')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Bubble(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }

                else if (opt == '2')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);

                    Insertion(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '3')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    Selection(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '4')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    mergeSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '5')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    quickSort(0, n - 1);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '6')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    heapSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '7')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    countSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '8')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    radixSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                }
                else if (opt == '9')
                {
                    int n = arr.size();
                    time_t start, end;
                    time(&start);
                    bucketSort(n);
                    time(&end);
                    double time_taken = double(end - start);
                    cout << "Time taken by program is : " << fixed << time_taken; // setprecision(5);
                    ////cout << " sec " << endl;
                    system("pause");
                    writeData();
                    cout << "mai ch rha" << endl;
                }
            }
        }
    }
}
