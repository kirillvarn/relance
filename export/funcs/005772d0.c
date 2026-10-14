
undefined4 FUN_005772d0(char *param_1)

{
  uint uVar1;
  int iVar2;
  FILE *_File;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  _File = fopen(param_1,"w");
  if (_File == (FILE *)0x0) {
    return 0;
  }
  fprintf(_File,"; Freelancer - User Key Commands\n");
  fprintf(_File,"\n[%s]\n","KeyMap=1.1");
  piVar5 = (int *)*DAT_0067c258;
  if (piVar5 != DAT_0067c258) {
    do {
      if ((piVar5[7] != 0) && (piVar5[8] - piVar5[7] >> 3 != 0)) {
        uVar1 = piVar5[2];
        if (uVar1 < 0xcc) {
          pcVar3 = (&PTR_s_USER_NONE_00614dd8)[uVar1];
        }
        else {
          pcVar3 = "USER_NONE";
        }
        if (uVar1 != 0) {
          fprintf(_File,"\n[KeyCmd]\n");
          fprintf(_File,"nickname = %s\n",pcVar3);
          puVar4 = (undefined4 *)piVar5[7];
          if (puVar4 != (undefined4 *)piVar5[8]) {
            do {
              fprintf(_File,"key = %d",*puVar4);
              iVar2 = puVar4[1];
              if (iVar2 == 1) {
                pcVar3 = ",SHIFT\n";
              }
              else if (iVar2 == 4) {
                pcVar3 = ",CONTROL\n";
              }
              else if (iVar2 == 0x10) {
                pcVar3 = ",ALT\n";
              }
              else {
                pcVar3 = "\n";
              }
              fprintf(_File,pcVar3);
              puVar4 = puVar4 + 2;
            } while (puVar4 != (undefined4 *)piVar5[8]);
          }
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != DAT_0067c258);
  }
  fclose(_File);
  return 1;
}

