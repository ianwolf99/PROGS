struct sockaddr_in srvSAddr; //server address structure
struct sockaddr_in connectAddr;
SOCKET srvSock, sockio;
DWORD addrLen;
...
srvSock = socket(AF_INET, SOCK_STREAM, 0);
srvSAddr.sin_family = AF_INET;
srvSAddr.sin_addr.s_addr = hton1 (INADDR_ANY);
srvSAddr.sin_port = htons (SERVER_PORT);
bind(srvSock, (struct sockaddr *) &srvSAddr,sizeof srvSAddr);
listen (srvSock, 5);
addrLen = sizeof (connectAddr);
sockio = accept(srvSock,(struct sockaddr *) &connectAddr, &addrLen);
...receive requests and send responses..
shutdown (sockio, SD_BOTH);
closesocket(sockio);
