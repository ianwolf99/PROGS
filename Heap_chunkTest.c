#include <Windows.h>
#include <stdio.h>

#define CHUNK_SIZE 0x300

int main(int args, char** argv) {
  int i;
  LPVOID chunk;
  HANDLE defaultHeap = GetProcessHeap();
  for (i = 0; i < 18; i++) {
    chunk = HeapAlloc(defaultHeap, 0, CHUNK_SIZE);
    printf("[%d] Chunk is at 0x%08x\n", i, chunk);
  }

  for (i = 0; i < 5; i++) {
    chunk = HeapAlloc(defaultHeap, 0, CHUNK_SIZE);
    printf("[%d] New chunk in LFH : 0x%08x\n", i ,chunk);
  }

  system("PAUSE");
  return 0;
}