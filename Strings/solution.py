print("Solution Of The Week")


def check_is_vowel(s):
    vowels_letter = ["A","a","E","e","I","i","O","o","U","u"]
    for v in vowels_letter:
        print(v)
        if(s == v):
            return True
        else:
            return False

def count_vowel(str):
    nums_of_vowel =0 ;
    for char in str:
        if(check_is_vowel(char)):
            nums_of_vowel = nums_of_vowel+1;
    return nums_of_vowel;



name = "Pawan Kumar";
total_vowel = count_vowel(name)
print("The Total NUmbers Of Vowel Is",total_vowel)