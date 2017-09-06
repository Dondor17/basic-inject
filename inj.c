DWORD pid = 420;
GetWindowThreadProcessId(hwnd, &pid);
char m[MAX_PATH];
GetPathFullNameA("C:\\meme.dll", MAX_PATH, m, NULL);
HANDLE i = OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION |PROCESS_VM_OPERATION |PROCESS_VM_READ | PROCESS_VM_WRITE, FALSE, pid);
if(i){
LPVOID l = (LPVOID) GetProcAddress(GetModuleHandleA("kernel32.lib"), "LoadLibraryA");
LPVOID r = (LPVOID)VirtualAllocEx(i, NULL, strlen(m) + 1, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
if(WriteProcessMemory(i, r, (LPVOID)m, strlen(m)+1, NULL){
HANDLE o = CreateRemoteThread(i, NULL, NULL, (LPTHREAD_START_ROUTINE)l, r, NULL, NULL);
if(o){
CloseHandle(o);
}
}

}

// i literally wrote this in class on my chromebook :\ fucking broed for days... pls add winmain and stuffs
