import socket
choose=True
while choose:
        
        print("\n menu\n 1.get host by name \n 2.get host by address \n 3.quit")
        choose=raw_input(" \n enter the choice \n")
        
        if choose=="1":
                a=raw_input(" \n enter URL \n")
                addr1=socket.gethostbyname(a)
                print(addr1)
        
        elif choose=="2":
               b=raw_input("\n enter IP \n ")
               addr2=socket.gethostbyaddr(b)
               print(addr2)
        
        elif choose=="3":
               exit()
        
        else:
                print("\n invalid choice,please try again \n")
        
        

""" ************OUTPUT************

 menu
 1.get host by name 
 2.get host by address 
 3.quit
 
 enter the choice 
1
 
 enter URL 
www.facebook.com
157.240.7.35

 menu
 1.get host by name 
 2.get host by address 
 3.quit
 
 enter the choice 
2

 enter IP 
 157.240.7.35
('edge-star-mini-shv-01-sin6.facebook.com', [], ['157.240.7.35'])

 menu
 1.get host by name 
 2.get host by address 
 3.quit
 
 enter the choice 
3

"""
        
        
        

