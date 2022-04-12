#!/usr/bin/env python
# coding: utf-8

# # CALCULATOR

# In[2]:


a=int(input("Enter first number: "))    # Scanning number from user 
b=int(input("Enter second number: "))
ch=input("Enter the operator (+,-,*,/,%,pow,sqrt)") #Scanning operator
if (ch=='+'):
    c=a+b             # adding numbers
    print(c)
elif (ch=='-'):      
    c=a-b        #subtracting numbers
    print(c)
elif (ch=='*'):
    c=a*b     #multiplying numbers
    print(c)
elif (ch=='/'):
    c=a/b      #Dividing numbers
    print(c)
elif (ch=='%'):
    c=a%b        #Mod of numbers
    print(c)
elif (ch=='pow'):
    a=int(input("Enter first number (base): "))
    b=int(input("Enter second number (power): "))
    print (a**b)
elif (ch=='sqrt'):
    a= int(input("Enter the number\n "))
    print(a**(1/2))
           


# In[ ]:




