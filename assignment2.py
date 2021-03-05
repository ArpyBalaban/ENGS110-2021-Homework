def nthFibonacci(age):
        if(age <= 100 and age >=2):
            n1 = 0
            n2 = 1
            Sum = 0
            while (n2 <= age):
                Sum = n2 + Sum
                temp = n1 + n2
                n1 = n2
                n2 = temp
            print(Sum)
            return Sum
        else:
            print("Please enter a valid age")
            return 1

def isPrime(ans):
    for i in range(2,int(ans**0.5)+1):
        if ans%i==0:
            print("your age is not prime")
            return False
    
    print("your age is prime")
    return True

def toBinary(age):
    binary = [0,0,0,0,0,0,0,0]
    i = len(binary)-1
    while(age > 0):
        binary[i] = age%2
        i-=1
        age = int(age/2)
    print(binary)

def main():
    while (True):
        N = int(input("Enter your age: "))
        if(nthFibonacci(N) != 1):
            isPrime(N)
            toBinary(N)
            print("Thanks, bye!")
            break

main()
