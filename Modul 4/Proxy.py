from socket import *

serverPort = 1234

serverSocket = socket(AF_INET, SOCK_STREAM)

serverSocket.bind(('', serverPort))

serverSocket.listen(1)
print("The sever is listening on 1234.")

while 1:
	clientSocket, addr = serverSocket.accept()
	sentence = clientSocket.recv(1024)
	print(sentence)
	clientSocket.close()
