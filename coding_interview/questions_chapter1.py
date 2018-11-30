


#QUESTION 1.1
# Algorithm to determine if a string has all unique characters
# 1)  BRUTE FORCE: Test each character against eachother. This has quadratic complexity (n^2-n)
# 1a) CHECK ONLY LETTERS THAT HAVEN'T BEEN CHECKED: Same as brute force but is now a bit quicker (n^(n/2))
# 2)  USE A HASH TABLE: Collisions means there's two of the same thing, return TRUE (n)
# 2a) USE A LIST THE SAME SIZE AS INPUT: Avoids having to hash the characters, instead we could simply use their ASCII codes (n)
# 2b) USE A BIT VECTOR: Uses less space than a list as you're just using an int, but I don't know how to code it.
def one(testString):
	# Length of ASCII Character set
	lettersChecked = [0]*256
	for letter in testString:
		if (lettersChecked[ord(letter)] != 0):
			return True
		else:
			lettersChecked[ord(letter)] += 1
	return False

#QUESTION 1.2
# Given two strings, check if one is a permutation of the other.
# 1) Make a copy of the second string, check every letter of the first string against the second, if you find it in the second
# then remove it from the second. Get to the end of the string: return true, else if you don't find it: return false. (n*m^(n-1))
# 1a) Check to see if the two strings are the same length first, if they're not then return false.
def two(stringOne, stringTwo):
	if len(stringOne) != len(stringTwo):
		return False

	stringTwoCopy = stringTwo
	for letterOne in stringOne:
		for index, letterTwo in enumerate(stringTwo):
			if (letterOne == letterTwo):
				stringTwoCopy.replace(letterTwo, "", 1)
				break
			if (index == len(stringTwo)):
				return False
	return True



#QUESTION 1.3
#QUESTION 1.4
#QUESTION 1.5
#QUESTION 1.6
#QUESTION 1.7
#QUESTION 1.8
#QUESTION 1.9

stringOne = "testing permutations"
stringTwo = "premating turtetions"
testString = "Uniqe strg"
# print(one(testString))
print(two(stringOne, stringTwo))


# for i in range(10):
# 	for z in range(10):
# 		if (z == 5):
# 			break
# 		else:
# 			print("i is ", i)

