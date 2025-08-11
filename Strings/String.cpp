#include <iostream>
using namespace std;

// TODO: Complete This List Methods
//  length() / size() – total characters -> done
//  isEmpty() – returns true if length is 0 -> done
//  charAt(index) – character at position -> done
//  toCharArray() – returns array of character -> done
//  compareTo(str) – lexicographic comparison -> done
//  isAlpha() – all alphabetic -> done
//  isDigit() – all digits -> done
//  isAlnum() – alphanumeric -> done
//  isLower() – all lowercase -> done
//  isUpper() – all uppercase -> done
//  isSpace() – all whitespace -> done
//  toLowerCase() -> done
//  toUpperCase() -> done
//  capitalize() – first letter capital done->
//  titleCase() – capitalize every word done ->
//  swapCase() – upper to lower and vice versa done ->
//  indexOf(substr) done ->
//  lastIndexOf(substr) done ->
//  find(substr) done -> similar as indexOf()
//  rfind(substr) done -> similar as lastIndexOf
//  startsWith(prefix) done
//  endsWith(suffix) -> done
//  contains(substr) -> done
//  count(substr) – number of times substring appears -> done
//  replace(old, new) -> done
//  replaceAll(old, new) -> done
//  insert(index, substr) -> done
//  remove(start, length) -> done
//  erase(index, length) -> same as remove
//  clear() – make string empty -> done
//  split(delimiter)
//  rsplit(delimiter)
//  splitLines() – split by \n
//  join(listOfStrings) – join with current string as separator
//  substring(start, end)
//  slice(start, end)
//  substr(start, length) – (deprecated in some languages)
//  trim() – remove both sides whitespace -> done
//  ltrim() / trimStart() -> done
//  rtrim() / trimEnd() -> done
//  padLeft(totalLength, char)
//  padRight(totalLength, char)
//  zfill(width) – pad with zeros
//  repeat(n)
//  concat(str)
//  + operator
//  encode() – convert to bytes
//  format(args...) – like Python’s format() or C#'s interpolation
//  escape() / unescape() – for special characters
//  equals(str)
//  equalsIgnoreCase(str)
//  compareTo(str) – lexicographical
//  == operator
//  reverse()
//  isPalindrome()
//  removeDuplicates()
//  normalize() – remove accents/diacritics
//  slugify() – convert to URL slug
//  match(regex)
//  replaceRegex(pattern, replacement)
//  hashCode() – for hash table support
//  toInt() / toFloat() – cast to number
//  fromCharCode(code) – inverse of charCodeAt

class String
{
private:
    const int MAX_SIZE = 1000;
    int len;
    char *string;

    int getLength(const char *str)
    {
        int i = 0;
        while (str[i] != '\0')
            i++;
        return i;
    }

    void copyString(const char *str)
    {
        len = getLength(str);
        string = new char[len + 1];
        for (int i = 0; i < len; i++)
        {
            string[i] = str[i];
        }
        string[len] = '\0';
    }

public:
    String()
    {
        string = new char[MAX_SIZE];
        string[0] = '\0';
        len = 0;
    }

    String(const char *str)
    {
        copyString(str);
    }

    String(const String &other)
    {
        copyString(other.string);
    }

    ~String()
    {
        delete[] string;
    }

    bool isEmpty()
    {
        return len == 0;
    }

    int length()
    {
        return len;
    }

    char charAt(int index)
    {
        if (index < 0 || index >= len)
        {
            cout << "Index out of bounds\n";
            return '\0'; // or throw error
        }
        return string[index];
    }

    char *toCharArray()
    {
        char *arr = new char[len + 1];
        for (int i = 0; i < len; i++)
        {
            arr[i] = string[i];
        }
        arr[len] = '\0';
        return arr;
    }

    void print()
    {
        cout << string << endl;
    }

    bool equalTo(String str)
    {
        if (str.len != len)
            return false;
        for (int i = 0; str.string[i] != '\0'; i++)
        {
            if (string[i] != str.string[i])
            {
                return false;
            }
        }
        return true;
    }

    int compareTo(String str)
    {
        int i = 0;
        while (string[i] != '\0' && str.string[i] != '\0')
        {
            if (string[i] != str.string[i])
                return string[i] - str.string[i];
            i++;
        }
        return len - str.len;
    }

    bool isSmallLetter(char ch)
    {
        return ch >= 97 && ch <= 122;
    }

    bool isCapitalLetter(char ch)
    {
        return ch >= 65 && ch <= 90;
    }

    bool isANumberCharacter(char ch)
    {
        return ch >= 48 && ch <= 57;
    }

    bool isLowerCase()
    {
        for (int i = 0; i < len; i++)
            if (!isSmallLetter(string[i]))
                return false;
        return true;
    }

    bool isUpperCase()
    {
        for (int i = 0; i < len; i++)
            if (!isCapitalLetter(string[i]))
                return false;
        return true;
    }

    bool isCapitalized()
    {
        return isCapitalLetter(string[0]);
    }

    void toLowerCase()
    {
        for (int i = 0; i < len; i++)
        {
            if (isCapitalLetter(string[i]))
                string[i] += 32; // Make lowercase
        }
    }

    void toUpperCase()
    {
        for (int i = 0; i < len; i++)
        {
            if (isSmallLetter(string[i]))
                string[i] -= 32; // Make uppercase
        }
    }

    bool isAlpha()
    {
        for (int i = 0; i < len; i++)
        {
            if (!isSmallLetter(string[i]) && !isCapitalLetter(string[i]))
                return false;
        }
        return true;
    }

    bool isDigit()
    {
        for (int i = 0; string[i] != '\0'; i++)
        {
            if (!isANumberCharacter(string[i]))
            {
                return false;
            }
        }
        return true;
    }

    bool isAlphaNumeric()
    {
        for (int i = 0; i < len; i++)
        {
            if (!isSmallLetter(string[i]) &&
                !isCapitalLetter(string[i]) &&
                !isANumberCharacter(string[i]))
                return false;
        }
        return true;
    }

    void toTitleCase()
    {
        if (isSmallLetter(string[0]))
        {
            string[0] -= 32;
        }
        for (int i = 1; i < len; i++)
        {
            if (string[i - 1] == ' ' && isSmallLetter(string[i]))
            {
                string[i] -= 32;
            }
        }
    }

    void swapCases()
    {
        for (int i = 0; i < len; i++)
        {
            if (isSmallLetter(string[i]))
                string[i] -= 32;
            else if (isCapitalLetter(string[i]))
                string[i] += 32;
        }
    }

    int indexOf(const String &substr)
    {
        if (substr.len == 0 || substr.len > len)
            return -1;

        for (int i = 0; i <= len - substr.len; i++)
        {
            int j = 0;
            while (j < substr.len && string[i + j] == substr.string[j])
            {
                j++;
            }

            if (j == substr.len)
                return i;
        }

        return -1;
    }

    int indexOfChar(char character)
    {
        for (int i = 0; i < len; i++)
        {
            if (string[i] == character)
            {
                return i;
            }
        }
        return -1;
    }
    int *indexedOfCharacter(char ch)
    {
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (string[i] == ch)
                count++;
        }

        int *indices = new int[count];
        int pos = 0;
        for (int i = 0; i < len; i++)
        {
            if (string[i] == ch)
            {
                indices[pos++] = i;
            }
        }
        return indices;
    }

    int lastIndexOf(const String &substr)
    {
        if (substr.len == 0 || substr.len > len)
            return -1;

        for (int i = len - substr.len; i >= 0; i--)
        {
            int j = 0;
            while (j < substr.len && string[i + j] == substr.string[j])
            {
                j++;
            }

            if (j == substr.len)
                return i; // Found the last occurrence
        }

        return -1; // Not found
    }

    bool startsWith(const String &prefix)
    {
        if (prefix.len == 0 || prefix.len > len)
        {
            return false;
        }
        for (int i = 0; i < prefix.len; i++)
        {
            if (string[i] != prefix.string[i])
            {
                return false;
            }
        }
        return true;
    }

    bool endsWith(const String &suffix)
    {
        if (suffix.len == 0 || suffix.len > len)
        {
            return false;
        }
        int start = len - suffix.len;
        for (int i = 0; i < suffix.len; i++)
        {
            if (string[start + i] != suffix.string[i])
            {
                return false;
            }
        }
        return true; // Corrected: Added this line
    }

    bool contains(const String &prefix)
    {
        return indexOf(prefix) != 0;
    }

    int countAppearenceOfSubString(const String &prefix)
    {
        if (prefix.len == 0 || prefix.len > len)
        {
            return 0;
        }
        int totalCount = 0;

        for (int i = 0; i <= len - prefix.len; i++)
        {
            int j = 0;
            while (j < prefix.len && string[i + j] == prefix.string[j])
            {
                j++;
            }
            if (j == prefix.len)
            {
                totalCount++;
            }
        }
        return totalCount;
    }

    void replace2(const String &oldStr, const String &newStr)
    {
        if (newStr.len != oldStr.len)
        {
            std::cout << "This String Can't Be Replaced (length mismatch)" << std::endl;
            return;
        }

        int startingIndex = indexOf(oldStr);
        if (startingIndex == -1)
        {
            std::cout << "The Old String Was Not Found, So It Can't Be Replaced" << std::endl;
            return;
        }

        for (int i = 0; i < newStr.len; i++)
        {
            string[startingIndex + i] = newStr.string[i];
        }
    }

    void replace(const String &oldStr, const String &newStr)
    {
        int startingIndex = indexOf(oldStr);
        if (startingIndex == -1)
        {
            std::cout << "The Old String Was Not Found, So It Can't Be Replaced" << std::endl;
            return;
        }

        int newLen = len - oldStr.len + newStr.len;
        char *newBuffer = new char[newLen + 1];
        int i = 0;
        while (i < startingIndex)
        {
            newBuffer[i] = string[i];
            i++;
        }
        for (int j = 0; j < newStr.len; j++)
        {
            newBuffer[i] = newStr.string[j];
            i++;
        }
        for (int j = startingIndex + oldStr.len; j < len; j++)
        {
            newBuffer[i++] = string[j];
        }
        newBuffer[i] = '\0';
        delete[] string;
        string = newBuffer;
        len = newLen;
    }

    void replaceAll(const String &oldStr, const String &newStr)
    {
        int index = indexOf(oldStr);
        while (index != -1)
        {
            replace(oldStr, newStr);
            index = indexOf(oldStr);
        }
    }

    void insert(int index, const String &subString)
    {
        if (index < 0 || index > len)
        {
            std::cout << "The String Can't Be Inserted" << std::endl;
            return;
        }

        int newLen = len + subString.len;
        char *newBuffer = new char[newLen + 1];

        int i = 0;
        while (i < index)
        {
            newBuffer[i] = string[i];
            i++;
        }

        for (int j = 0; j < subString.len; j++, i++)
        {
            newBuffer[i] = subString.string[j];
        }

        for (int j = index; j < len; j++, i++)
        {
            newBuffer[i] = string[j];
        }

        newBuffer[i] = '\0';

        delete[] string;
        string = newBuffer;
        len = newLen;
    }

    void remove(int startIndex, int removeLength)
    {
        if (startIndex < 0 ||
            startIndex >= len ||
            removeLength < 0 ||
            startIndex + removeLength > len)
        {
            std::cout << "The Strings Can't Be Removed" << std::endl;
            return;
        }

        for (int i = startIndex; i + removeLength < len; i++)
        {
            string[i] = string[i + removeLength];
        }

        len -= removeLength;
        string[len] = '\0';
    }

    void trim()
    {
        int start = 0;
        int end = len - 1;
        while (start < len && string[start] == ' ')
        {
            start++;
        }
        while (end >= start && string[end] == ' ')
        {
            end--;
        }
        int newLen = end - start + 1;
        if (newLen <= 0)
        {
            string[0] = '\0';
            len = 0;
            return;
        }
        for (int i = 0; i < newLen; i++)
        {
            string[i] = string[start++];
        }
        string[newLen] = '\0';
        len = newLen;
    }

    void trimStart()
    {
        int start = 0;
        while (start < len && string[start] == ' ')
        {
            start++;
        }
        int newLength = len - start;
        if (newLength <= 0)
        {
            string[0] = '\0';
            len = 0;
            return;
        }

        for (int i = 0; i < newLength; i++)
        {
            string[i] = string[start++];
        }
        string[newLength] = '\0';
        len = newLength;
    }

    void trimEnd()
    {
        if (len == 0)
            return;

        int end = len - 1;

        while (end >= 0 && string[end] == ' ')
        {
            end--;
        }

        if (end < 0)
        {
            string[0] = '\0';
            len = 0;
            return;
        }

        string[end + 1] = '\0';
        len = end + 1;
    }

    void clear()
    {

        len = 0;
        string[len] = '\0';
    }

    char **split(char delimiter)
    {
        // Count delimiters to determine array size
        int count = 1;
        for (int i = 0; i < len; i++)
        {
            if (string[i] == delimiter)
                count++;
        }

        char **result = new char *[count];
        int start = 0, idx = 0;

        for (int i = 0; i <= len; i++)
        {
            if (string[i] == delimiter || string[i] == '\0')
            {
                int subLen = i - start;
                result[idx] = new char[subLen + 1];
                for (int j = 0; j < subLen; j++)
                {
                    result[idx][j] = string[start + j];
                }
                result[idx][subLen] = '\0';
                start = i + 1;
                idx++;
            }
        }
        return result;
    }
};

void printDuplicates(string &str)
{
    long int h = 0, x = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        x = 1;
        x = x << str[i] - 97;
        if (x & h > 0)
        {
            cout << "The Duplicate Value Is : " << str[i];
        }
        else
        {
            h = h | x;
        }
    }
}

void printDuplicates(const string &str)
{
    long h = 0;
    for (char ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            long x = 1 << (ch - 'a');
            if ((x & h) > 0)
            {
                cout << "Duplicate character: " << ch << endl;
            }
            else
            {
                h |= x;
            }
        }
    }
}

int main()
{
    char name[10];
    std::cout << "Enter Your Name : ";
    cin >> name;
    std::cout << "Your Name Is : " << name;
    return 0;
}