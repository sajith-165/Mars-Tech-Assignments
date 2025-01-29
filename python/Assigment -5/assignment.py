class SubfieldsInAI :
    @staticmethod
    def subfields() :
        print ("Sub-fields in Al are : ")
        fields = ("Machine Learning","Neural Networks","Vision","Robotics",
                      "Speech Processing","Natural Language Processing")
        # tuple tpye (fields): Immutable (unchangeable), ordered collection
        for x in fields:
            print(x)


class OddEven :
    @staticmethod
    def oddeven() :
        num = float(input( "Enter a number"))
        print (num, "is Odd number")  if num % 2 else print (num, "is Even number")


class ElegiblityForMarriage :
    @staticmethod
    def elegible() :
        gen = input( "Your Gender (Male/Female): ")
        age = float(input( "Your Age : "))
        if  gen == "Male" and age > 23  :
             print ("ELIGIBLE")
        elif  gen == "Female" and age > 23  :
            print ("ELIGIBLE")
        else :
            print ("NOT ELIGIBLE")


class FindPercent :
    @staticmethod
    def percentage() :
        total = 0

        for x in range (1,6) :
            while True :
                try :
                    marks = float (input (f"subject-{x}  = "))
                    if 0 <= marks <= 100 :
                        total += marks
                        break
                    else :
                        print ("Invlaid input! please enter marks between 0 and 100")

                except ValueError:
                        print("Invalid input! Please enter a numeric value.")

        print (f" Totel : {total}") 
        print (f" percentage : {(total * 0.2):.3f}")


class Triangle :
    @staticmethod
    def triangle() :
        h = int(input ("Height  : "))
        b = int(input ("Breadth : "))
        print (f"Area formula : (Height* Breadth)/2")
        print (f"Area of Triangle : {(h*b)/2}")

        h1 = int(input ("Height-1  : "))
        h2 = int(input ("Height-2  : "))
        b1 = int(input ("Breadth-1 : "))
        print("Perimeter formula : Height1 + Height2 + Breadth ")
        print(f"Perimeter of Triangle : {h1+h2+b1}")

