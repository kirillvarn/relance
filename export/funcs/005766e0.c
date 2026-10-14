
uint __thiscall FUN_005766e0(uint *param_1,INI_Reader *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_1 = 0;
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(param_2,"nickname");
      if (bVar1) {
        pcVar3 = INI_Reader::get_value_string(param_2);
        uVar6 = 0;
        do {
          uVar4 = stricmp(pcVar3,(&PTR_s_USER_NONE_00614dd8)[uVar6]);
          if (uVar4 == 0) goto LAB_00576748;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xcc);
        uVar6 = 0;
LAB_00576748:
        *param_1 = uVar6;
        if (uVar6 == 0) {
          return uVar4 & 0xffffff00;
        }
      }
      else {
        bVar1 = INI_Reader::is_value(param_2,"ids_name");
        if (bVar1) {
          INI_Reader::get_value_float(param_2,0);
          uVar6 = ftol();
          param_1[1] = uVar6;
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"ids_info");
          if (bVar1) {
            INI_Reader::get_value_float(param_2,0);
            uVar6 = ftol();
            param_1[2] = uVar6;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"state");
            if (bVar1) {
              uVar6 = 0;
              uVar4 = 0;
              bVar1 = INI_Reader::is_value_empty(param_2,0);
              if (bVar1) {
LAB_0057683e:
                uVar4 = 1;
              }
              else {
                do {
                  pcVar3 = INI_Reader::get_value_string(param_2,uVar6);
                  iVar5 = stricmp(pcVar3,"keydown");
                  if (iVar5 == 0) {
                    uVar4 = uVar4 | 1;
                  }
                  else {
                    iVar5 = stricmp(pcVar3,"keyup");
                    if (iVar5 == 0) {
                      uVar4 = uVar4 | 2;
                    }
                    else {
                      iVar5 = stricmp(pcVar3,"repeat");
                      if (iVar5 == 0) {
                        uVar4 = uVar4 | 4;
                      }
                      else {
                        iVar5 = stricmp(pcVar3,"shift_ignore");
                        if (iVar5 == 0) {
                          uVar4 = uVar4 | 8;
                        }
                      }
                    }
                  }
                  uVar6 = uVar6 + 1;
                  bVar1 = INI_Reader::is_value_empty(param_2,uVar6);
                } while (!bVar1);
                if (uVar4 == 0) goto LAB_0057683e;
              }
              param_1[3] = uVar4;
            }
            else {
              bVar1 = INI_Reader::is_value(param_2,"key");
              if (bVar1) {
                local_8 = 0;
                local_4 = 0;
                cVar2 = FUN_005765b0(param_2);
                if (cVar2 != '\0') {
                  FUN_00578690(param_1[6],1,&local_8);
                }
              }
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  return (uint)(*param_1 != 0);
}

