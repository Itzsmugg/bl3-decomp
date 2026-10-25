// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14173ac80 GetValueByName body=53 status=ok
// SIG undefined GetValueByName(void)

undefined8 UEnum::GetValueByName(longlong param_1)

{
  int iVar1;
  
  iVar1 = GetIndexByName();
  if (iVar1 != -1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14173acc0 GetValueByName body=53 status=ok
// SIG undefined GetValueByName(void)

undefined8 UEnum::GetValueByName(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141738b90();
  if (iVar1 != -1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14173ad10 FUN_14173ad10 body=2128 status=ok
// SIG undefined FUN_14173ad10(void)

/* WARNING: Type propagation algorithm not settling */

uint * FUN_14173ad10(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  puVar7 = (uint *)*param_2;
  puVar3 = *(ulonglong **)(param_1 + 0x20);
  if ((puVar7 < DAT_1469e8ef8) || (DAT_1469e8f00 <= puVar7)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if ((puVar7 != (uint *)0x0) && (!bVar15)) {
    uVar10 = (int)puVar7[3] >> 0x1f & 0xffff;
    uVar5 = puVar7[3] + uVar10;
    lVar6 = (longlong)(int)((uVar5 & 0xffff) - uVar10);
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
    lVar13 = lVar9 + lVar6 * 0x18;
    uVar5 = *(uint *)(lVar9 + 8 + lVar6 * 0x18);
    puVar7 = (uint *)(ulonglong)(uVar5 >> 0x1d);
    if (((uVar5 >> 0x1d & 1) == 0) || (*(char *)(param_1 + 0x28) == '\0')) {
      puVar7 = (uint *)(ulonglong)(uVar5 >> 0x1c);
      if ((uVar5 >> 0x1c & 1) == 0) {
        if ((0 < *(int *)(lVar13 + 0xc)) &&
           (puVar7 = (uint *)(ulonglong)(uVar5 >> 0x17), (uVar5 >> 0x17 & 1) == 0)) {
          while ((uVar5 >> 0x17 & 1) == 0) {
            LOCK();
            uVar10 = *(uint *)(lVar13 + 8);
            bVar15 = uVar5 == uVar10;
            if (bVar15) {
              *(uint *)(lVar13 + 8) = uVar5 | 0x800000;
              uVar10 = uVar5;
            }
            puVar7 = (uint *)(ulonglong)uVar10;
            UNLOCK();
            if (bVar15) {
              uVar10 = *(int *)(lVar13 + 0xc) >> 0x1f & 0xffff;
              uVar5 = *(int *)(lVar13 + 0xc) + uVar10;
              lVar9 = (longlong)(int)((uVar5 & 0xffff) - uVar10);
              lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
              uVar5 = *(uint *)(lVar13 + 8 + lVar9 * 0x18);
              puVar7 = (uint *)(ulonglong)uVar5;
              lVar13 = lVar13 + lVar9 * 0x18;
              if ((uVar5 >> 0x1c & 1) == 0) {
                return puVar7;
              }
              while( true ) {
                uVar5 = (uint)puVar7;
                LOCK();
                bVar15 = uVar5 == *(uint *)(lVar13 + 8);
                if (bVar15) {
                  *(uint *)(lVar13 + 8) = uVar5 & 0xefffffff;
                }
                UNLOCK();
                if (bVar15) break;
                puVar7 = (uint *)(ulonglong)*(uint *)(lVar13 + 8);
                if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) {
                  return puVar7;
                }
              }
              bVar15 = false;
              lVar13 = (longlong)(int)~*(uint *)(lVar13 + 0xc) * 0x50 + DAT_1469e8f10;
              puVar11 = *(uint **)(lVar13 + 0x18);
              puVar7 = puVar11 + *(int *)(lVar13 + 0x20);
              for (; puVar11 != puVar7; puVar11 = puVar11 + 1) {
                uVar5 = *puVar11;
                if (-1 < (int)uVar5) {
                  lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                  lVar9 = lVar6 + (longlong)(int)(uVar5 & 0xffff) * 0x18;
                  uVar5 = *(uint *)(lVar6 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                  if ((uVar5 >> 0x1d & 1) == 0) {
                    if ((uVar5 >> 0x1c & 1) != 0) {
                      while ((uVar5 >> 0x1c & 1) != 0) {
                        puVar8 = (uint *)(lVar9 + 8);
                        LOCK();
                        bVar16 = uVar5 == *puVar8;
                        if (bVar16) {
                          *puVar8 = uVar5 & 0xefffffff;
                        }
                        UNLOCK();
                        if (bVar16) break;
                        uVar5 = *(uint *)(lVar9 + 8);
                      }
                    }
                  }
                  else {
                    *puVar11 = 0xffffffff;
                    bVar15 = true;
                  }
                }
              }
              puVar11 = *(uint **)(lVar13 + 0x28);
              bVar16 = false;
              puVar8 = (uint *)(longlong)*(int *)(lVar13 + 0x30);
              puVar7 = puVar11 + (longlong)puVar8;
              if (puVar11 == puVar7) {
LAB_14173b498:
                if (!bVar15) {
                  return puVar8;
                }
              }
              else {
                do {
                  uVar5 = *puVar11;
                  puVar8 = (uint *)(ulonglong)uVar5;
                  if (-1 < (int)uVar5) {
                    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                    puVar1 = (undefined8 *)(lVar9 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                    uVar5 = *(uint *)(lVar9 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                    puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1d);
                    if ((uVar5 >> 0x1d & 1) == 0) {
                      puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1c);
                      if ((uVar5 >> 0x1c & 1) == 0) {
                        if ((0 < *(int *)((longlong)puVar1 + 0xc)) &&
                           (puVar8 = (uint *)(ulonglong)(uVar5 >> 0x17), (uVar5 >> 0x17 & 1) == 0))
                        {
                          while ((uVar5 >> 0x17 & 1) == 0) {
                            LOCK();
                            uVar10 = *(uint *)(puVar1 + 1);
                            bVar17 = uVar5 == uVar10;
                            if (bVar17) {
                              *(uint *)(puVar1 + 1) = uVar5 | 0x800000;
                              uVar10 = uVar5;
                            }
                            puVar8 = (uint *)(ulonglong)uVar10;
                            UNLOCK();
                            if (bVar17) {
                              uVar5 = *(uint *)((longlong)puVar1 + 0xc);
                              uVar10 = uVar5 & 0xffff;
                              if ((int)uVar5 < 0) {
                                uVar5 = uVar5 + 0xffff;
                                uVar10 = uVar10 - 0x10000;
                              }
                              lVar6 = *(longlong *)
                                       (DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                              lVar9 = lVar6 + (longlong)(int)uVar10 * 0x18;
                              uVar5 = *(uint *)(lVar6 + 8 + (longlong)(int)uVar10 * 0x18);
                              puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1c);
                              if ((uVar5 >> 0x1c & 1) != 0) goto joined_r0x00014173b44c;
                              break;
                            }
                            uVar5 = *(uint *)(puVar1 + 1);
                          }
                        }
                      }
                      else {
                        while ((uVar5 >> 0x1c & 1) != 0) {
                          LOCK();
                          uVar10 = *(uint *)(puVar1 + 1);
                          bVar17 = uVar5 == uVar10;
                          if (bVar17) {
                            *(uint *)(puVar1 + 1) = uVar5 & 0xefffffff;
                            uVar10 = uVar5;
                          }
                          puVar8 = (uint *)(ulonglong)uVar10;
                          UNLOCK();
                          if (bVar17) {
                            iVar2 = (int)puVar3[1];
                            uVar4 = *puVar1;
                            *(int *)(puVar3 + 1) = iVar2 + 1;
                            if (*(int *)((longlong)puVar3 + 0xc) < iVar2 + 1) {
                              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                        (puVar3,iVar2);
                            }
                            puVar8 = (uint *)*puVar3;
                            *(undefined8 *)(puVar8 + (longlong)iVar2 * 2) = uVar4;
                            if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                              puVar8 = (uint *)FGCReferenceProcessor<1>::
                                               MarkReferencedClustersAsReachable
                                                         (~*(uint *)((longlong)puVar1 + 0xc),puVar3)
                              ;
                            }
                            break;
                          }
                          uVar5 = *(uint *)(puVar1 + 1);
                        }
                      }
                    }
                    else {
                      *puVar11 = 0xffffffff;
                      bVar16 = true;
                    }
                  }
LAB_14173b486:
                  puVar11 = puVar11 + 1;
                } while (puVar11 != puVar7);
                if (!bVar16) goto LAB_14173b498;
              }
              uVar12 = 0;
              puVar11 = *(uint **)(lVar13 + 8);
              puVar7 = puVar11 + *(int *)(lVar13 + 0x10);
              uVar14 = (longlong)*(int *)(lVar13 + 0x10) & 0x3fffffffffffffff;
              if (puVar7 < puVar11) {
                uVar14 = uVar12;
              }
              if (uVar14 != 0) {
                do {
                  uVar5 = *puVar11;
                  uVar10 = uVar5 & 0xffff;
                  if ((int)uVar5 < 0) {
                    uVar5 = uVar5 + 0xffff;
                    uVar10 = uVar10 - 0x10000;
                  }
                  iVar2 = (int)puVar3[1];
                  uVar4 = *(undefined8 *)
                           (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                           (longlong)(int)uVar10 * 0x18);
                  *(int *)(puVar3 + 1) = iVar2 + 1;
                  if (*(int *)((longlong)puVar3 + 0xc) < iVar2 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar3,iVar2);
                  }
                  puVar7 = (uint *)*puVar3;
                  puVar11 = puVar11 + 1;
                  uVar12 = uVar12 + 1;
                  *(undefined8 *)(puVar7 + (longlong)iVar2 * 2) = uVar4;
                } while (uVar12 != uVar14);
              }
              goto LAB_14173b52e;
            }
            uVar5 = *(uint *)(lVar13 + 8);
          }
        }
      }
      else {
        while ((uVar5 >> 0x1c & 1) != 0) {
          LOCK();
          uVar10 = *(uint *)(lVar13 + 8);
          bVar15 = uVar5 == uVar10;
          if (bVar15) {
            *(uint *)(lVar13 + 8) = uVar5 & 0xefffffff;
            uVar10 = uVar5;
          }
          puVar7 = (uint *)(ulonglong)uVar10;
          UNLOCK();
          if (bVar15) {
            if ((*(byte *)(lVar13 + 0xb) & 1) == 0) {
              iVar2 = (int)puVar3[1];
              *(int *)(puVar3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)puVar3 + 0xc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar3,iVar2);
              }
              puVar7 = (uint *)*param_2;
              *(uint **)(*puVar3 + (longlong)iVar2 * 8) = puVar7;
              return puVar7;
            }
            bVar15 = false;
            lVar13 = (longlong)(int)~*(uint *)(lVar13 + 0xc) * 0x50 + DAT_1469e8f10;
            puVar11 = *(uint **)(lVar13 + 0x18);
            puVar7 = puVar11 + *(int *)(lVar13 + 0x20);
            for (; puVar11 != puVar7; puVar11 = puVar11 + 1) {
              uVar5 = *puVar11;
              if (-1 < (int)uVar5) {
                lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                lVar9 = lVar6 + (longlong)(int)(uVar5 & 0xffff) * 0x18;
                uVar5 = *(uint *)(lVar6 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                if ((uVar5 >> 0x1d & 1) == 0) {
                  if ((uVar5 >> 0x1c & 1) != 0) {
                    while ((uVar5 >> 0x1c & 1) != 0) {
                      puVar8 = (uint *)(lVar9 + 8);
                      LOCK();
                      bVar16 = uVar5 == *puVar8;
                      if (bVar16) {
                        *puVar8 = uVar5 & 0xefffffff;
                      }
                      UNLOCK();
                      if (bVar16) break;
                      uVar5 = *(uint *)(lVar9 + 8);
                    }
                  }
                }
                else {
                  *puVar11 = 0xffffffff;
                  bVar15 = true;
                }
              }
            }
            puVar11 = *(uint **)(lVar13 + 0x28);
            bVar16 = false;
            puVar8 = (uint *)(longlong)*(int *)(lVar13 + 0x30);
            puVar7 = puVar11 + (longlong)puVar8;
            if (puVar11 != puVar7) {
              do {
                uVar5 = *puVar11;
                puVar8 = (uint *)(ulonglong)uVar5;
                if (-1 < (int)uVar5) {
                  lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                  puVar1 = (undefined8 *)(lVar9 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                  uVar5 = *(uint *)(lVar9 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                  puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1d);
                  if ((uVar5 >> 0x1d & 1) == 0) {
                    puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1c);
                    if ((uVar5 >> 0x1c & 1) == 0) {
                      if ((0 < *(int *)((longlong)puVar1 + 0xc)) &&
                         (puVar8 = (uint *)(ulonglong)(uVar5 >> 0x17), (uVar5 >> 0x17 & 1) == 0)) {
                        while ((uVar5 >> 0x17 & 1) == 0) {
                          LOCK();
                          uVar10 = *(uint *)(puVar1 + 1);
                          bVar17 = uVar5 == uVar10;
                          if (bVar17) {
                            *(uint *)(puVar1 + 1) = uVar5 | 0x800000;
                            uVar10 = uVar5;
                          }
                          puVar8 = (uint *)(ulonglong)uVar10;
                          UNLOCK();
                          if (bVar17) {
                            uVar5 = *(uint *)((longlong)puVar1 + 0xc);
                            uVar10 = uVar5 & 0xffff;
                            if ((int)uVar5 < 0) {
                              uVar5 = uVar5 + 0xffff;
                              uVar10 = uVar10 - 0x10000;
                            }
                            lVar6 = *(longlong *)
                                     (DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                            lVar9 = lVar6 + (longlong)(int)uVar10 * 0x18;
                            uVar5 = *(uint *)(lVar6 + 8 + (longlong)(int)uVar10 * 0x18);
                            puVar8 = (uint *)(ulonglong)(uVar5 >> 0x1c);
                            if ((uVar5 >> 0x1c & 1) != 0) goto joined_r0x00014173b0bc;
                            break;
                          }
                          uVar5 = *(uint *)(puVar1 + 1);
                        }
                      }
                    }
                    else {
                      while ((uVar5 >> 0x1c & 1) != 0) {
                        LOCK();
                        uVar10 = *(uint *)(puVar1 + 1);
                        bVar17 = uVar5 == uVar10;
                        if (bVar17) {
                          *(uint *)(puVar1 + 1) = uVar5 & 0xefffffff;
                          uVar10 = uVar5;
                        }
                        puVar8 = (uint *)(ulonglong)uVar10;
                        UNLOCK();
                        if (bVar17) {
                          iVar2 = (int)puVar3[1];
                          uVar4 = *puVar1;
                          *(int *)(puVar3 + 1) = iVar2 + 1;
                          if (*(int *)((longlong)puVar3 + 0xc) < iVar2 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (puVar3,iVar2);
                          }
                          puVar8 = (uint *)*puVar3;
                          *(undefined8 *)(puVar8 + (longlong)iVar2 * 2) = uVar4;
                          if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                            puVar8 = (uint *)FGCReferenceProcessor<1>::
                                             MarkReferencedClustersAsReachable
                                                       (~*(uint *)((longlong)puVar1 + 0xc),puVar3);
                          }
                          break;
                        }
                        uVar5 = *(uint *)(puVar1 + 1);
                      }
                    }
                  }
                  else {
                    *puVar11 = 0xffffffff;
                    bVar16 = true;
                  }
                }
LAB_14173b0f6:
                puVar11 = puVar11 + 1;
              } while (puVar11 != puVar7);
              if (bVar16) goto LAB_14173b113;
            }
            if (!bVar15) {
              return puVar8;
            }
LAB_14173b113:
            uVar12 = 0;
            puVar11 = *(uint **)(lVar13 + 8);
            puVar7 = puVar11 + *(int *)(lVar13 + 0x10);
            uVar14 = (longlong)*(int *)(lVar13 + 0x10) & 0x3fffffffffffffff;
            if (puVar7 < puVar11) {
              uVar14 = uVar12;
            }
            if (uVar14 != 0) {
              do {
                uVar5 = *puVar11;
                uVar10 = uVar5 & 0xffff;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 + 0xffff;
                  uVar10 = uVar10 - 0x10000;
                }
                iVar2 = (int)puVar3[1];
                uVar4 = *(undefined8 *)
                         (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                         (longlong)(int)uVar10 * 0x18);
                *(int *)(puVar3 + 1) = iVar2 + 1;
                if (*(int *)((longlong)puVar3 + 0xc) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar3,iVar2);
                }
                puVar7 = (uint *)*puVar3;
                puVar11 = puVar11 + 1;
                uVar12 = uVar12 + 1;
                *(undefined8 *)(puVar7 + (longlong)iVar2 * 2) = uVar4;
              } while (uVar12 != uVar14);
            }
LAB_14173b52e:
            *(undefined1 *)(lVar13 + 0x48) = 1;
            DAT_1469e8f34 = 1;
            return puVar7;
          }
          uVar5 = *(uint *)(lVar13 + 8);
        }
      }
    }
    else {
      puVar11 = (uint *)0x0;
      *param_2 = 0;
      if ((DAT_1469e7298 != 0) && (param_3 != 0)) {
        iVar2 = *(int *)(param_3 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar10 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar10;
          puVar7 = *(uint **)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
          puVar11 = puVar7 + (longlong)(int)((uVar5 & 0xffff) - uVar10) * 6;
        }
        if ((puVar11[2] >> 0x1d & 1) == 0) {
          uVar10 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar10;
          puVar11 = *(uint **)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
          puVar7 = puVar11 + (longlong)(int)((uVar5 & 0xffff) - uVar10) * 6 + 2;
          *puVar7 = *puVar7 | 0x80000000;
          return puVar11;
        }
      }
    }
  }
  return puVar7;
joined_r0x00014173b44c:
  if ((uVar5 >> 0x1c & 1) == 0) goto LAB_14173b486;
  LOCK();
  uVar10 = *(uint *)(lVar9 + 8);
  bVar17 = uVar5 == uVar10;
  if (bVar17) {
    *(uint *)(lVar9 + 8) = uVar5 & 0xefffffff;
    uVar10 = uVar5;
  }
  puVar8 = (uint *)(ulonglong)uVar10;
  UNLOCK();
  if (bVar17) {
    puVar8 = (uint *)FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                               (~*(uint *)(lVar9 + 0xc),puVar3);
    goto LAB_14173b486;
  }
  uVar5 = *(uint *)(lVar9 + 8);
  goto joined_r0x00014173b44c;
joined_r0x00014173b0bc:
  if ((uVar5 >> 0x1c & 1) == 0) goto LAB_14173b0f6;
  LOCK();
  uVar10 = *(uint *)(lVar9 + 8);
  bVar17 = uVar5 == uVar10;
  if (bVar17) {
    *(uint *)(lVar9 + 8) = uVar5 & 0xefffffff;
    uVar10 = uVar5;
  }
  puVar8 = (uint *)(ulonglong)uVar10;
  UNLOCK();
  if (bVar17) {
    puVar8 = (uint *)FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                               (~*(uint *)(lVar9 + 0xc),puVar3);
    goto LAB_14173b0f6;
  }
  uVar5 = *(uint *)(lVar9 + 8);
  goto joined_r0x00014173b0bc;
}



// FUNCTION 14173b560 FUN_14173b560 body=1677 status=ok
// SIG undefined FUN_14173b560(void)

void FUN_14173b560(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar16 = *param_2;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if ((uVar16 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar16)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (uVar16 == 0) {
    return;
  }
  if (bVar6) {
    return;
  }
  uVar11 = *(int *)(uVar16 + 0xc) >> 0x1f & 0xffff;
  uVar8 = *(int *)(uVar16 + 0xc) + uVar11;
  lVar10 = (longlong)(int)((uVar8 & 0xffff) - uVar11);
  lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
  lVar15 = lVar4 + lVar10 * 0x18;
  uVar8 = *(uint *)(lVar4 + 8 + lVar10 * 0x18);
  if (((uVar8 >> 0x1d & 1) != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    lVar15 = 0;
    *param_2 = 0;
    if (DAT_1469e7298 == 0) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    iVar2 = *(int *)(param_3 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar8 = iVar2 + uVar11;
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) {
      return;
    }
    uVar11 = iVar2 >> 0x1f & 0xffff;
    uVar8 = iVar2 + uVar11;
    puVar12 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) + 8 +
                      (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18);
    *puVar12 = *puVar12 | 0x80000000;
    return;
  }
  if ((uVar8 >> 0x1c & 1) == 0) {
    iVar2 = *(int *)(lVar15 + 0xc);
    if (iVar2 < 1) {
      return;
    }
    if ((uVar8 >> 0x17 & 1) != 0) {
      return;
    }
    *(uint *)(lVar15 + 8) = uVar8 | 0x800000;
    uVar11 = iVar2 >> 0x1f & 0xffff;
    uVar8 = iVar2 + uVar11;
    lVar10 = (longlong)(int)((uVar8 & 0xffff) - uVar11);
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
    lVar15 = lVar4 + lVar10 * 0x18;
    uVar8 = *(uint *)(lVar4 + 8 + lVar10 * 0x18);
    if ((uVar8 >> 0x1c & 1) == 0) {
      return;
    }
    *(uint *)(lVar15 + 8) = uVar8 & 0xefffffff;
    bVar6 = false;
    lVar15 = (longlong)(int)~*(uint *)(lVar15 + 0xc) * 0x50 + DAT_1469e8f10;
    puVar14 = *(uint **)(lVar15 + 0x18);
    puVar12 = puVar14 + *(int *)(lVar15 + 0x20);
    for (; puVar14 != puVar12; puVar14 = puVar14 + 1) {
      uVar8 = *puVar14;
      if (-1 < (int)uVar8) {
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
        uVar11 = *(uint *)(lVar4 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
        if ((uVar11 >> 0x1d & 1) == 0) {
          *(uint *)(lVar4 + (longlong)(int)(uVar8 & 0xffff) * 0x18 + 8) = uVar11 & 0xefffffff;
        }
        else {
          *puVar14 = 0xffffffff;
          bVar6 = true;
        }
      }
    }
    puVar14 = *(uint **)(lVar15 + 0x28);
    bVar7 = false;
    puVar12 = puVar14 + *(int *)(lVar15 + 0x30);
    if (puVar14 == puVar12) {
LAB_14173bb24:
      if (!bVar6) {
        return;
      }
    }
    else {
      do {
        uVar8 = *puVar14;
        if (-1 < (int)uVar8) {
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
          puVar1 = (undefined8 *)(lVar4 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
          uVar8 = *(uint *)(lVar4 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
          if ((uVar8 >> 0x1d & 1) == 0) {
            if ((uVar8 >> 0x1c & 1) == 0) {
              uVar11 = *(uint *)((longlong)puVar1 + 0xc);
              if ((0 < (int)uVar11) && ((uVar8 >> 0x17 & 1) == 0)) {
                uVar9 = uVar11 & 0xffff;
                *(uint *)(puVar1 + 1) = uVar8 | 0x800000;
                if ((int)uVar11 < 0) {
                  uVar11 = uVar11 + 0xffff;
                  uVar9 = uVar9 - 0x10000;
                }
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8);
                lVar4 = lVar10 + (longlong)(int)uVar9 * 0x18;
                uVar8 = *(uint *)(lVar10 + 8 + (longlong)(int)uVar9 * 0x18);
                if ((uVar8 >> 0x1c & 1) != 0) {
                  *(uint *)(lVar4 + 8) = uVar8 & 0xefffffff;
                  FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                            (~*(uint *)(lVar4 + 0xc),plVar3);
                }
              }
            }
            else {
              uVar5 = *puVar1;
              *(uint *)(puVar1 + 1) = uVar8 & 0xefffffff;
              iVar2 = (int)plVar3[1];
              *(int *)(plVar3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
              }
              *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar5;
              if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                          (~*(uint *)((longlong)puVar1 + 0xc),plVar3);
              }
            }
          }
          else {
            *puVar14 = 0xffffffff;
            bVar7 = true;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar12);
      if (!bVar7) goto LAB_14173bb24;
    }
    uVar13 = 0;
    puVar12 = *(uint **)(lVar15 + 8);
    uVar16 = (longlong)*(int *)(lVar15 + 0x10) & 0x3fffffffffffffff;
    if (puVar12 + *(int *)(lVar15 + 0x10) < puVar12) {
      uVar16 = uVar13;
    }
    if (uVar16 != 0) {
      do {
        uVar8 = *puVar12;
        uVar11 = uVar8 & 0xffff;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        iVar2 = (int)plVar3[1];
        uVar5 = *(undefined8 *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)uVar11 * 0x18);
        *(int *)(plVar3 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
        }
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
        *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar5;
      } while (uVar13 != uVar16);
    }
    goto LAB_14173bbbc;
  }
  *(uint *)(lVar15 + 8) = uVar8 & 0xefffffff;
  if (((uVar8 & 0xefffffff) >> 0x18 & 1) == 0) {
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
    }
    *(ulonglong *)(*plVar3 + (longlong)iVar2 * 8) = *param_2;
    return;
  }
  bVar6 = false;
  lVar15 = (longlong)(int)~*(uint *)(lVar15 + 0xc) * 0x50 + DAT_1469e8f10;
  puVar14 = *(uint **)(lVar15 + 0x18);
  puVar12 = puVar14 + *(int *)(lVar15 + 0x20);
  for (; puVar14 != puVar12; puVar14 = puVar14 + 1) {
    uVar8 = *puVar14;
    if (-1 < (int)uVar8) {
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
      uVar11 = *(uint *)(lVar4 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
      if ((uVar11 >> 0x1d & 1) == 0) {
        *(uint *)(lVar4 + (longlong)(int)(uVar8 & 0xffff) * 0x18 + 8) = uVar11 & 0xefffffff;
      }
      else {
        *puVar14 = 0xffffffff;
        bVar6 = true;
      }
    }
  }
  puVar14 = *(uint **)(lVar15 + 0x28);
  bVar7 = false;
  puVar12 = puVar14 + *(int *)(lVar15 + 0x30);
  if (puVar14 == puVar12) {
LAB_14173b884:
    if (!bVar6) {
      return;
    }
  }
  else {
    do {
      uVar8 = *puVar14;
      if (-1 < (int)uVar8) {
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
        puVar1 = (undefined8 *)(lVar4 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
        uVar8 = *(uint *)(lVar4 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
        if ((uVar8 >> 0x1d & 1) == 0) {
          if ((uVar8 >> 0x1c & 1) == 0) {
            uVar11 = *(uint *)((longlong)puVar1 + 0xc);
            if ((0 < (int)uVar11) && ((uVar8 >> 0x17 & 1) == 0)) {
              uVar9 = uVar11 & 0xffff;
              *(uint *)(puVar1 + 1) = uVar8 | 0x800000;
              if ((int)uVar11 < 0) {
                uVar11 = uVar11 + 0xffff;
                uVar9 = uVar9 - 0x10000;
              }
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8);
              lVar4 = lVar10 + (longlong)(int)uVar9 * 0x18;
              uVar8 = *(uint *)(lVar10 + 8 + (longlong)(int)uVar9 * 0x18);
              if ((uVar8 >> 0x1c & 1) != 0) {
                *(uint *)(lVar4 + 8) = uVar8 & 0xefffffff;
                FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                          (~*(uint *)(lVar4 + 0xc),plVar3);
              }
            }
          }
          else {
            uVar5 = *puVar1;
            *(uint *)(puVar1 + 1) = uVar8 & 0xefffffff;
            iVar2 = (int)plVar3[1];
            *(int *)(plVar3 + 1) = iVar2 + 1;
            if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
            }
            *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar5;
            if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
              FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                        (~*(uint *)((longlong)puVar1 + 0xc),plVar3);
            }
          }
        }
        else {
          *puVar14 = 0xffffffff;
          bVar7 = true;
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar12);
    if (!bVar7) goto LAB_14173b884;
  }
  uVar13 = 0;
  puVar12 = *(uint **)(lVar15 + 8);
  uVar16 = (longlong)*(int *)(lVar15 + 0x10) & 0x3fffffffffffffff;
  if (puVar12 + *(int *)(lVar15 + 0x10) < puVar12) {
    uVar16 = uVar13;
  }
  if (uVar16 != 0) {
    do {
      uVar8 = *puVar12;
      uVar11 = uVar8 & 0xffff;
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0xffff;
        uVar11 = uVar11 - 0x10000;
      }
      iVar2 = (int)plVar3[1];
      uVar5 = *(undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)uVar11 * 0x18);
      *(int *)(plVar3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
      }
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 + 1;
      *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar5;
    } while (uVar13 != uVar16);
  }
LAB_14173bbbc:
  *(undefined1 *)(lVar15 + 0x48) = 1;
  DAT_1469e8f34 = 1;
  return;
}



// FUNCTION 14173bbf0 HandleObjectReference body=281 status=ok
// SIG undefined HandleObjectReference(void)

void FReferenceFinder::HandleObjectReference
               (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  int local_res10 [2];
  longlong local_28 [2];
  
  if ((*param_2 != 0) &&
     (((param_1[0xe] == 0 || (*(longlong *)(*param_2 + 0x20) == param_1[0xe])) ||
      (((char)param_1[0x10] == '\0' && (cVar5 = UObjectBaseUtility::IsIn(), cVar5 != '\0')))))) {
    lVar3 = *param_2;
    plVar4 = (longlong *)param_1[3];
    plVar6 = (longlong *)*plVar4;
    iVar2 = (int)plVar4[1];
    plVar1 = plVar6 + iVar2;
    for (; local_28[0] = lVar3, plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar3) goto LAB_14173bc98;
    }
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4);
    }
    *(longlong *)((longlong)iVar2 * 8 + *plVar4) = lVar3;
LAB_14173bc98:
    if (*(char *)((longlong)param_1 + 0x82) == '\x01') {
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                (param_1 + 4,local_res10,lVar3);
      if ((local_res10[0] == -1) || ((longlong)local_res10[0] * 0x10 + param_1[4] == 0)) {
        FUN_14058c900(param_1 + 4,local_res10,local_28,0);
        (**(code **)(*param_1 + 0x48))(param_1,lVar3,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 14173bd10 FUN_14173bd10 body=2295 status=ok
// SIG undefined FUN_14173bd10(void)

void FUN_14173bd10(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  longlong local_58;
  longlong local_50;
  
  if (0 < param_3) {
    local_58 = 0;
    do {
      lVar9 = 0;
      uVar15 = *(ulonglong *)(param_2 + local_58 * 8);
      plVar5 = *(longlong **)(param_1 + 0x20);
      if ((uVar15 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar15)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((uVar15 != 0) && (!bVar16)) {
        uVar8 = *(uint *)(uVar15 + 0xc);
        uVar10 = uVar8 & 0xffff;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
        lVar2 = lVar6 + (longlong)(int)uVar10 * 0x18;
        uVar8 = *(uint *)(lVar6 + 8 + (longlong)(int)uVar10 * 0x18);
        if (((uVar8 >> 0x1d & 1) == 0) || (*(char *)(param_1 + 0x28) == '\0')) {
          if ((uVar8 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)(lVar2 + 0xc)) && ((uVar8 >> 0x17 & 1) == 0)) {
              while ((uVar8 >> 0x17 & 1) == 0) {
                LOCK();
                bVar16 = uVar8 == *(uint *)(lVar2 + 8);
                if (bVar16) {
                  *(uint *)(lVar2 + 8) = uVar8 | 0x800000;
                }
                UNLOCK();
                if (bVar16) {
                  uVar8 = *(uint *)(lVar2 + 0xc);
                  uVar10 = uVar8 & 0xffff;
                  if ((int)uVar8 < 0) {
                    uVar8 = uVar8 + 0xffff;
                    uVar10 = uVar10 - 0x10000;
                  }
                  lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                  uVar8 = *(uint *)(lVar9 + 8 + (longlong)(int)uVar10 * 0x18);
                  lVar9 = lVar9 + (longlong)(int)uVar10 * 0x18;
                  if ((uVar8 >> 0x1c & 1) != 0) goto LAB_14173c290;
                  break;
                }
                uVar8 = *(uint *)(lVar2 + 8);
              }
            }
          }
          else if ((uVar8 >> 0x1c & 1) != 0) {
LAB_14173beb0:
            LOCK();
            bVar16 = uVar8 == *(uint *)(lVar2 + 8);
            if (bVar16) {
              *(uint *)(lVar2 + 8) = uVar8 & 0xefffffff;
            }
            UNLOCK();
            if (!bVar16) goto code_r0x00014173bec0;
            if ((*(byte *)(lVar2 + 0xb) & 1) == 0) {
              iVar4 = (int)plVar5[1];
              *(int *)(plVar5 + 1) = iVar4 + 1;
              if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
              }
              *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) =
                   *(undefined8 *)(param_2 + local_58 * 8);
            }
            else {
              bVar16 = false;
              local_50 = (longlong)(int)~*(uint *)(lVar2 + 0xc) * 0x50 + DAT_1469e8f10;
              puVar14 = *(uint **)(local_50 + 0x18);
              puVar13 = puVar14 + *(int *)(local_50 + 0x20);
              for (; puVar14 != puVar13; puVar14 = puVar14 + 1) {
                uVar8 = *puVar14;
                if (-1 < (int)uVar8) {
                  lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                  lVar9 = lVar2 + (longlong)(int)(uVar8 & 0xffff) * 0x18;
                  uVar8 = *(uint *)(lVar2 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                  if ((uVar8 >> 0x1d & 1) == 0) {
                    if ((uVar8 >> 0x1c & 1) != 0) {
                      while ((uVar8 >> 0x1c & 1) != 0) {
                        puVar1 = (uint *)(lVar9 + 8);
                        LOCK();
                        bVar17 = uVar8 == *puVar1;
                        if (bVar17) {
                          *puVar1 = uVar8 & 0xefffffff;
                        }
                        UNLOCK();
                        if (bVar17) break;
                        uVar8 = *(uint *)(lVar9 + 8);
                      }
                    }
                  }
                  else {
                    *puVar14 = 0xffffffff;
                    bVar16 = true;
                  }
                }
              }
              puVar14 = *(uint **)(local_50 + 0x28);
              bVar17 = false;
              puVar13 = puVar14 + *(int *)(local_50 + 0x30);
              if (puVar14 == puVar13) {
LAB_14173c15d:
                if (bVar16) goto LAB_14173c166;
              }
              else {
                do {
                  uVar8 = *puVar14;
                  if (-1 < (int)uVar8) {
                    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                    puVar3 = (undefined8 *)(lVar9 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                    uVar8 = *(uint *)(lVar9 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                    if ((uVar8 >> 0x1d & 1) == 0) {
                      if ((uVar8 >> 0x1c & 1) == 0) {
                        if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar8 >> 0x17 & 1) == 0)) {
                          while ((uVar8 >> 0x17 & 1) == 0) {
                            LOCK();
                            bVar18 = uVar8 == *(uint *)(puVar3 + 1);
                            if (bVar18) {
                              *(uint *)(puVar3 + 1) = uVar8 | 0x800000;
                            }
                            UNLOCK();
                            if (bVar18) {
                              uVar8 = *(uint *)((longlong)puVar3 + 0xc);
                              uVar10 = uVar8 & 0xffff;
                              if ((int)uVar8 < 0) {
                                uVar8 = uVar8 + 0xffff;
                                uVar10 = uVar10 - 0x10000;
                              }
                              lVar2 = *(longlong *)
                                       (DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                              lVar9 = lVar2 + (longlong)(int)uVar10 * 0x18;
                              uVar8 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar10 * 0x18);
                              if ((uVar8 >> 0x1c & 1) != 0) goto joined_r0x00014173c100;
                              break;
                            }
                            uVar8 = *(uint *)(puVar3 + 1);
                          }
                        }
                      }
                      else {
                        while ((uVar8 >> 0x1c & 1) != 0) {
                          LOCK();
                          bVar18 = uVar8 == *(uint *)(puVar3 + 1);
                          if (bVar18) {
                            *(uint *)(puVar3 + 1) = uVar8 & 0xefffffff;
                          }
                          UNLOCK();
                          if (bVar18) {
                            iVar4 = (int)plVar5[1];
                            uVar7 = *puVar3;
                            *(int *)(plVar5 + 1) = iVar4 + 1;
                            if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
                              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                        (plVar5,iVar4);
                            }
                            *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) = uVar7;
                            if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                              FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                                        (~*(uint *)((longlong)puVar3 + 0xc),plVar5);
                            }
                            break;
                          }
                          uVar8 = *(uint *)(puVar3 + 1);
                        }
                      }
                    }
                    else {
                      *puVar14 = 0xffffffff;
                      bVar17 = true;
                    }
                  }
LAB_14173c146:
                  puVar14 = puVar14 + 1;
                } while (puVar14 != puVar13);
                if (!bVar17) goto LAB_14173c15d;
LAB_14173c166:
                uVar12 = 0;
                puVar13 = *(uint **)(local_50 + 8);
                uVar15 = (longlong)*(int *)(local_50 + 0x10) & 0x3fffffffffffffff;
                if (puVar13 + *(int *)(local_50 + 0x10) < puVar13) {
                  uVar15 = uVar12;
                }
                if (uVar15 != 0) {
                  do {
                    uVar8 = *puVar13;
                    uVar10 = uVar8 & 0xffff;
                    if ((int)uVar8 < 0) {
                      uVar8 = uVar8 + 0xffff;
                      uVar10 = uVar10 - 0x10000;
                    }
                    iVar4 = (int)plVar5[1];
                    uVar7 = *(undefined8 *)
                             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                             (longlong)(int)uVar10 * 0x18);
                    *(int *)(plVar5 + 1) = iVar4 + 1;
                    if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar5,iVar4);
                    }
                    puVar13 = puVar13 + 1;
                    uVar12 = uVar12 + 1;
                    *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) = uVar7;
                  } while (uVar12 != uVar15);
                }
LAB_14173c59a:
                *(undefined1 *)(local_50 + 0x48) = 1;
                DAT_1469e8f34 = 1;
              }
            }
          }
        }
        else {
          *(undefined8 *)(param_2 + local_58 * 8) = 0;
          if ((DAT_1469e7298 != 0) && (param_4 != 0)) {
            uVar8 = *(uint *)(param_4 + 0xc);
            if ((int)uVar8 < (int)DAT_1469e91c4) {
              uVar11 = uVar8 & 0xffff;
              uVar10 = uVar8;
              if ((int)uVar8 < 0) {
                uVar10 = uVar8 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                      (longlong)(int)uVar11 * 0x18;
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
              uVar10 = uVar8 & 0xffff;
              if ((int)uVar8 < 0) {
                uVar8 = uVar8 + 0xffff;
                uVar10 = uVar10 - 0x10000;
              }
              puVar13 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                                 8 + (longlong)(int)uVar10 * 0x18);
              *puVar13 = *puVar13 | 0x80000000;
            }
          }
        }
      }
LAB_14173c5b0:
      local_58 = local_58 + 1;
    } while (local_58 < param_3);
  }
  return;
LAB_14173c290:
  LOCK();
  bVar16 = uVar8 == *(uint *)(lVar9 + 8);
  if (bVar16) {
    *(uint *)(lVar9 + 8) = uVar8 & 0xefffffff;
  }
  UNLOCK();
  if (!bVar16) goto code_r0x00014173c29e;
  bVar16 = false;
  local_50 = (longlong)(int)~*(uint *)(lVar9 + 0xc) * 0x50 + DAT_1469e8f10;
  puVar14 = *(uint **)(local_50 + 0x18);
  puVar13 = puVar14 + *(int *)(local_50 + 0x20);
  for (; puVar14 != puVar13; puVar14 = puVar14 + 1) {
    uVar8 = *puVar14;
    if (-1 < (int)uVar8) {
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
      lVar9 = lVar2 + (longlong)(int)(uVar8 & 0xffff) * 0x18;
      uVar8 = *(uint *)(lVar2 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
      if ((uVar8 >> 0x1d & 1) == 0) {
        if ((uVar8 >> 0x1c & 1) != 0) {
          while ((uVar8 >> 0x1c & 1) != 0) {
            puVar1 = (uint *)(lVar9 + 8);
            LOCK();
            bVar17 = uVar8 == *puVar1;
            if (bVar17) {
              *puVar1 = uVar8 & 0xefffffff;
            }
            UNLOCK();
            if (bVar17) break;
            uVar8 = *(uint *)(lVar9 + 8);
          }
        }
      }
      else {
        *puVar14 = 0xffffffff;
        bVar16 = true;
      }
    }
  }
  puVar14 = *(uint **)(local_50 + 0x28);
  bVar17 = false;
  puVar13 = puVar14 + *(int *)(local_50 + 0x30);
  if (puVar14 != puVar13) {
    do {
      uVar8 = *puVar14;
      if (-1 < (int)uVar8) {
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
        uVar10 = *(uint *)(lVar9 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
        puVar3 = (undefined8 *)(lVar9 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
        if ((uVar10 >> 0x1d & 1) == 0) {
          if ((uVar10 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                LOCK();
                bVar18 = uVar10 == *(uint *)(puVar3 + 1);
                if (bVar18) {
                  *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                }
                UNLOCK();
                if (bVar18) {
                  uVar8 = *(uint *)((longlong)puVar3 + 0xc);
                  uVar10 = uVar8 & 0xffff;
                  if ((int)uVar8 < 0) {
                    uVar8 = uVar8 + 0xffff;
                    uVar10 = uVar10 - 0x10000;
                  }
                  lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                  lVar9 = lVar2 + (longlong)(int)uVar10 * 0x18;
                  uVar8 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar10 * 0x18);
                  if ((uVar8 >> 0x1c & 1) != 0) goto joined_r0x00014173c4ad;
                  break;
                }
                uVar10 = *(uint *)(puVar3 + 1);
              }
            }
          }
          else {
            while ((uVar10 >> 0x1c & 1) != 0) {
              LOCK();
              bVar18 = uVar10 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
              }
              UNLOCK();
              if (bVar18) {
                iVar4 = (int)plVar5[1];
                uVar7 = *puVar3;
                *(int *)(plVar5 + 1) = iVar4 + 1;
                if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
                }
                *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) = uVar7;
                if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                  FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                            (~*(uint *)((longlong)puVar3 + 0xc),plVar5);
                }
                break;
              }
              uVar10 = *(uint *)(puVar3 + 1);
            }
          }
        }
        else {
          *puVar14 = 0xffffffff;
          bVar17 = true;
        }
      }
LAB_14173c4e6:
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar13);
    if (!bVar17) goto LAB_14173c4fd;
LAB_14173c506:
    uVar12 = 0;
    puVar13 = *(uint **)(local_50 + 8);
    uVar15 = (longlong)*(int *)(local_50 + 0x10) & 0x3fffffffffffffff;
    if (puVar13 + *(int *)(local_50 + 0x10) < puVar13) {
      uVar15 = uVar12;
    }
    if (uVar15 != 0) {
      do {
        uVar8 = *puVar13;
        uVar10 = uVar8 & 0xffff;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        iVar4 = (int)plVar5[1];
        uVar7 = *(undefined8 *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)uVar10 * 0x18);
        *(int *)(plVar5 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
        }
        puVar13 = puVar13 + 1;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) = uVar7;
      } while (uVar12 != uVar15);
    }
    goto LAB_14173c59a;
  }
LAB_14173c4fd:
  if (bVar16) goto LAB_14173c506;
  goto LAB_14173c5b0;
code_r0x00014173c29e:
  uVar8 = *(uint *)(lVar9 + 8);
  if ((uVar8 >> 0x1c & 1) == 0) goto LAB_14173c5b0;
  goto LAB_14173c290;
joined_r0x00014173c4ad:
  if ((uVar8 >> 0x1c & 1) == 0) goto LAB_14173c4e6;
  LOCK();
  bVar18 = uVar8 == *(uint *)(lVar9 + 8);
  if (bVar18) {
    *(uint *)(lVar9 + 8) = uVar8 & 0xefffffff;
  }
  UNLOCK();
  if (bVar18) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar9 + 0xc),plVar5);
    goto LAB_14173c4e6;
  }
  uVar8 = *(uint *)(lVar9 + 8);
  goto joined_r0x00014173c4ad;
code_r0x00014173bec0:
  uVar8 = *(uint *)(lVar2 + 8);
  if ((uVar8 >> 0x1c & 1) == 0) goto LAB_14173c5b0;
  goto LAB_14173beb0;
joined_r0x00014173c100:
  if ((uVar8 >> 0x1c & 1) == 0) goto LAB_14173c146;
  LOCK();
  bVar18 = uVar8 == *(uint *)(lVar9 + 8);
  if (bVar18) {
    *(uint *)(lVar9 + 8) = uVar8 & 0xefffffff;
  }
  UNLOCK();
  if (bVar18) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar9 + 0xc),plVar5);
    goto LAB_14173c146;
  }
  uVar8 = *(uint *)(lVar9 + 8);
  goto joined_r0x00014173c100;
}



// FUNCTION 14173c610 FUN_14173c610 body=1837 status=ok
// SIG undefined FUN_14173c610(void)

void FUN_14173c610(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong local_58;
  longlong local_50;
  
  if (0 < param_3) {
    local_58 = 0;
    do {
      lVar10 = 0;
      uVar16 = *(ulonglong *)(param_2 + local_58 * 8);
      plVar4 = *(longlong **)(param_1 + 0x20);
      if ((uVar16 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar16)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((uVar16 != 0) && (!bVar7)) {
        uVar9 = *(uint *)(uVar16 + 0xc);
        uVar11 = uVar9 & 0xffff;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
        lVar1 = lVar5 + (longlong)(int)uVar11 * 0x18;
        uVar9 = *(uint *)(lVar5 + 8 + (longlong)(int)uVar11 * 0x18);
        if (((uVar9 >> 0x1d & 1) == 0) || (*(char *)(param_1 + 0x28) == '\0')) {
          if ((uVar9 >> 0x1c & 1) == 0) {
            uVar11 = *(uint *)(lVar1 + 0xc);
            if ((0 < (int)uVar11) && ((uVar9 >> 0x17 & 1) == 0)) {
              uVar12 = uVar11 & 0xffff;
              *(uint *)(lVar1 + 8) = uVar9 | 0x800000;
              if ((int)uVar11 < 0) {
                uVar11 = uVar11 + 0xffff;
                uVar12 = uVar12 - 0x10000;
              }
              lVar1 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8);
              lVar10 = lVar1 + (longlong)(int)uVar12 * 0x18;
              uVar9 = *(uint *)(lVar1 + 8 + (longlong)(int)uVar12 * 0x18);
              if ((uVar9 >> 0x1c & 1) != 0) {
                *(uint *)(lVar10 + 8) = uVar9 & 0xefffffff;
                bVar7 = false;
                local_50 = (longlong)(int)~*(uint *)(lVar10 + 0xc) * 0x50 + DAT_1469e8f10;
                puVar14 = *(uint **)(local_50 + 0x18);
                puVar15 = puVar14 + *(int *)(local_50 + 0x20);
                for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
                  uVar9 = *puVar14;
                  if (-1 < (int)uVar9) {
                    lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
                    uVar11 = *(uint *)(lVar10 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                    if ((uVar11 >> 0x1d & 1) == 0) {
                      *(uint *)(lVar10 + (longlong)(int)(uVar9 & 0xffff) * 0x18 + 8) =
                           uVar11 & 0xefffffff;
                    }
                    else {
                      *puVar14 = 0xffffffff;
                      bVar7 = true;
                    }
                  }
                }
                puVar14 = *(uint **)(local_50 + 0x28);
                bVar8 = false;
                puVar15 = puVar14 + *(int *)(local_50 + 0x30);
                if (puVar14 == puVar15) {
LAB_14173cc34:
                  if (!bVar7) goto LAB_14173cce5;
                }
                else {
                  do {
                    uVar9 = *puVar14;
                    if (-1 < (int)uVar9) {
                      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
                      puVar2 = (undefined8 *)(lVar10 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                      uVar9 = *(uint *)(lVar10 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                      if ((uVar9 >> 0x1d & 1) == 0) {
                        if ((uVar9 >> 0x1c & 1) == 0) {
                          uVar11 = *(uint *)((longlong)puVar2 + 0xc);
                          if ((0 < (int)uVar11) && ((uVar9 >> 0x17 & 1) == 0)) {
                            uVar12 = uVar11 & 0xffff;
                            *(uint *)(puVar2 + 1) = uVar9 | 0x800000;
                            if ((int)uVar11 < 0) {
                              uVar11 = uVar11 + 0xffff;
                              uVar12 = uVar12 - 0x10000;
                            }
                            lVar1 = *(longlong *)
                                     (DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8);
                            lVar10 = lVar1 + (longlong)(int)uVar12 * 0x18;
                            uVar9 = *(uint *)(lVar1 + 8 + (longlong)(int)uVar12 * 0x18);
                            if ((uVar9 >> 0x1c & 1) != 0) {
                              *(uint *)(lVar10 + 8) = uVar9 & 0xefffffff;
                              FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                        (~*(uint *)(lVar10 + 0xc),plVar4);
                            }
                          }
                        }
                        else {
                          uVar6 = *puVar2;
                          *(uint *)(puVar2 + 1) = uVar9 & 0xefffffff;
                          iVar3 = (int)plVar4[1];
                          *(int *)(plVar4 + 1) = iVar3 + 1;
                          if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (plVar4,iVar3);
                          }
                          *(undefined8 *)(*plVar4 + (longlong)iVar3 * 8) = uVar6;
                          if ((int)*(uint *)((longlong)puVar2 + 0xc) < 0) {
                            FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                      (~*(uint *)((longlong)puVar2 + 0xc),plVar4);
                          }
                        }
                      }
                      else {
                        *puVar14 = 0xffffffff;
                        bVar8 = true;
                      }
                    }
                    puVar14 = puVar14 + 1;
                  } while (puVar14 != puVar15);
                  if (!bVar8) goto LAB_14173cc34;
                }
                uVar13 = 0;
                puVar15 = *(uint **)(local_50 + 8);
                uVar16 = (longlong)*(int *)(local_50 + 0x10) & 0x3fffffffffffffff;
                if (puVar15 + *(int *)(local_50 + 0x10) < puVar15) {
                  uVar16 = uVar13;
                }
                if (uVar16 == 0) goto LAB_14173ca1f;
                do {
                  uVar9 = *puVar15;
                  uVar11 = uVar9 & 0xffff;
                  if ((int)uVar9 < 0) {
                    uVar9 = uVar9 + 0xffff;
                    uVar11 = uVar11 - 0x10000;
                  }
                  iVar3 = (int)plVar4[1];
                  uVar6 = *(undefined8 *)
                           (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                           (longlong)(int)uVar11 * 0x18);
                  *(int *)(plVar4 + 1) = iVar3 + 1;
                  if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
                  }
                  puVar15 = puVar15 + 1;
                  uVar13 = uVar13 + 1;
                  *(undefined8 *)(*plVar4 + (longlong)iVar3 * 8) = uVar6;
                } while (uVar13 != uVar16);
                *(undefined1 *)(local_50 + 0x48) = 1;
                DAT_1469e8f34 = 1;
              }
            }
          }
          else {
            *(uint *)(lVar1 + 8) = uVar9 & 0xefffffff;
            if (((uVar9 & 0xefffffff) >> 0x18 & 1) == 0) {
              iVar3 = (int)plVar4[1];
              *(int *)(plVar4 + 1) = iVar3 + 1;
              if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
              }
              *(undefined8 *)(*plVar4 + (longlong)iVar3 * 8) =
                   *(undefined8 *)(param_2 + local_58 * 8);
              goto LAB_14173cce5;
            }
            bVar7 = false;
            local_50 = (longlong)(int)~*(uint *)(lVar1 + 0xc) * 0x50 + DAT_1469e8f10;
            puVar14 = *(uint **)(local_50 + 0x18);
            puVar15 = puVar14 + *(int *)(local_50 + 0x20);
            for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
              uVar9 = *puVar14;
              if (-1 < (int)uVar9) {
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
                uVar11 = *(uint *)(lVar10 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                if ((uVar11 >> 0x1d & 1) == 0) {
                  *(uint *)(lVar10 + (longlong)(int)(uVar9 & 0xffff) * 0x18 + 8) =
                       uVar11 & 0xefffffff;
                }
                else {
                  *puVar14 = 0xffffffff;
                  bVar7 = true;
                }
              }
            }
            puVar14 = *(uint **)(local_50 + 0x28);
            bVar8 = false;
            puVar15 = puVar14 + *(int *)(local_50 + 0x30);
            if (puVar14 == puVar15) {
LAB_14173c984:
              if (!bVar7) goto LAB_14173cce5;
            }
            else {
              do {
                uVar9 = *puVar14;
                if (-1 < (int)uVar9) {
                  lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
                  puVar2 = (undefined8 *)(lVar10 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                  uVar9 = *(uint *)(lVar10 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
                  if ((uVar9 >> 0x1d & 1) == 0) {
                    if ((uVar9 >> 0x1c & 1) == 0) {
                      uVar11 = *(uint *)((longlong)puVar2 + 0xc);
                      if ((0 < (int)uVar11) && ((uVar9 >> 0x17 & 1) == 0)) {
                        uVar12 = uVar11 & 0xffff;
                        *(uint *)(puVar2 + 1) = uVar9 | 0x800000;
                        if ((int)uVar11 < 0) {
                          uVar11 = uVar11 + 0xffff;
                          uVar12 = uVar12 - 0x10000;
                        }
                        lVar1 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8);
                        lVar10 = lVar1 + (longlong)(int)uVar12 * 0x18;
                        uVar9 = *(uint *)(lVar1 + 8 + (longlong)(int)uVar12 * 0x18);
                        if ((uVar9 >> 0x1c & 1) != 0) {
                          *(uint *)(lVar10 + 8) = uVar9 & 0xefffffff;
                          FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                    (~*(uint *)(lVar10 + 0xc),plVar4);
                        }
                      }
                    }
                    else {
                      uVar6 = *puVar2;
                      *(uint *)(puVar2 + 1) = uVar9 & 0xefffffff;
                      iVar3 = (int)plVar4[1];
                      *(int *)(plVar4 + 1) = iVar3 + 1;
                      if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (plVar4,iVar3);
                      }
                      *(undefined8 *)(*plVar4 + (longlong)iVar3 * 8) = uVar6;
                      if ((int)*(uint *)((longlong)puVar2 + 0xc) < 0) {
                        FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                  (~*(uint *)((longlong)puVar2 + 0xc),plVar4);
                      }
                    }
                  }
                  else {
                    *puVar14 = 0xffffffff;
                    bVar8 = true;
                  }
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 != puVar15);
              if (!bVar8) goto LAB_14173c984;
            }
            uVar13 = 0;
            puVar15 = *(uint **)(local_50 + 8);
            uVar16 = (longlong)*(int *)(local_50 + 0x10) & 0x3fffffffffffffff;
            if (puVar15 + *(int *)(local_50 + 0x10) < puVar15) {
              uVar16 = uVar13;
            }
            if (uVar16 != 0) {
              do {
                uVar9 = *puVar15;
                uVar11 = uVar9 & 0xffff;
                if ((int)uVar9 < 0) {
                  uVar9 = uVar9 + 0xffff;
                  uVar11 = uVar11 - 0x10000;
                }
                iVar3 = (int)plVar4[1];
                uVar6 = *(undefined8 *)
                         (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                         (longlong)(int)uVar11 * 0x18);
                *(int *)(plVar4 + 1) = iVar3 + 1;
                if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
                }
                puVar15 = puVar15 + 1;
                uVar13 = uVar13 + 1;
                *(undefined8 *)(*plVar4 + (longlong)iVar3 * 8) = uVar6;
              } while (uVar13 != uVar16);
            }
LAB_14173ca1f:
            *(undefined1 *)(local_50 + 0x48) = 1;
            DAT_1469e8f34 = 1;
          }
        }
        else {
          *(undefined8 *)(param_2 + local_58 * 8) = 0;
          if ((DAT_1469e7298 != 0) && (param_4 != 0)) {
            uVar9 = *(uint *)(param_4 + 0xc);
            if ((int)uVar9 < (int)DAT_1469e91c4) {
              uVar12 = uVar9 & 0xffff;
              uVar11 = uVar9;
              if ((int)uVar9 < 0) {
                uVar11 = uVar9 + 0xffff;
                uVar12 = uVar12 - 0x10000;
              }
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                       (longlong)(int)uVar12 * 0x18;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
              uVar11 = uVar9 & 0xffff;
              if ((int)uVar9 < 0) {
                uVar9 = uVar9 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              puVar15 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                                 8 + (longlong)(int)uVar11 * 0x18);
              *puVar15 = *puVar15 | 0x80000000;
            }
          }
        }
      }
LAB_14173cce5:
      local_58 = local_58 + 1;
    } while (local_58 < param_3);
  }
  return;
}



// FUNCTION 14173cd40 HasAnyObjectsPendingLoad body=55 status=ok
// SIG undefined HasAnyObjectsPendingLoad(void)

longlong FLinkerLoad::HasAnyObjectsPendingLoad(longlong param_1)

{
  uint7 uVar2;
  longlong lVar1;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x88 + lVar1;
  while( true ) {
    uVar2 = (uint7)((ulonglong)lVar1 >> 8);
    if (lVar1 == lVar3) {
      return (ulonglong)uVar2 << 8;
    }
    if ((*(longlong *)(lVar1 + 0x48) != 0) &&
       ((*(uint *)(*(longlong *)(lVar1 + 0x48) + 8) & 0x1400) != 0)) break;
    lVar1 = lVar1 + 0x88;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 14173cd90 Identical body=85 status=ok
// SIG undefined Identical(void)

undefined1 UProperty::Identical(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0xf2,L"Pure virtual not implemented (%s)",L"UProperty::Identical");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0xf2,L"Pure virtual not implemented (%s)",L"UProperty::Identical");
  return 0;
}



// FUNCTION 14173cdf0 FUN_14173cdf0 body=525 status=ok
// SIG undefined FUN_14173cdf0(void)

ulonglong FUN_14173cdf0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  undefined1 local_res20 [8];
  wchar_t *local_38;
  undefined8 local_30;
  code *local_28;
  undefined1 *puStack_20;
  
  uVar9 = 0;
  if ((param_4 >> 0x1a & 1) == 0) {
    local_38 = (wchar_t *)0x0;
    local_30 = 0;
    uVar4 = UPropertyHelpers::ReadToken(param_2,&local_38,1);
    if (uVar4 != 0) {
      pwVar11 = L"";
      if ((int)local_30 != 0) {
        pwVar11 = local_38;
      }
      puVar5 = (undefined8 *)FName::FName(local_res20,pwVar11,1);
      iVar3 = UEnum::GetIndexByName(*(undefined8 *)(param_1 + 0x78),*puVar5,0);
      if (iVar3 == -1) {
        cVar2 = FString::IsNumeric(&local_38);
        if (cVar2 != '\0') {
          pwVar11 = local_38;
          pwVar6 = local_38 + (int)local_30 + -1;
          if ((int)local_30 == 0) {
            pwVar6 = local_38 + (int)local_30;
          }
          for (; pwVar11 != pwVar6; pwVar11 = pwVar11 + 1) {
            if (*pwVar11 == L'.') goto LAB_14173cf0b;
          }
          pwVar11 = L"";
          if ((int)local_30 != 0) {
            pwVar11 = local_38;
          }
          lVar7 = _wtoi64(pwVar11);
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x48);
          if (0 < iVar1) {
            plVar10 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 8);
            uVar8 = uVar9;
            uVar12 = uVar9;
            do {
              iVar3 = (int)uVar8;
              if (*plVar10 == lVar7) {
                if (iVar3 != -1) goto LAB_14173cf49;
                break;
              }
              uVar8 = (ulonglong)(iVar3 + 1);
              uVar12 = uVar12 + 1;
              plVar10 = plVar10 + 2;
            } while ((longlong)uVar12 < (longlong)iVar1);
          }
        }
LAB_14173cf0b:
        puStack_20 = local_res20;
        local_res20[0] = 0;
        local_28 = FUN_1406ddef0;
        FUN_1415d8310(&local_28,&DAT_14622e6dc);
        uVar4 = uVar9;
      }
      else {
LAB_14173cf49:
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x388))
                  (*(longlong **)(param_1 + 0x70),param_3,
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 8 +
                    (longlong)iVar3 * 0x10));
      }
      if (local_38 == (wchar_t *)0x0) {
        return uVar4;
      }
      FMemory::Free();
      return uVar4;
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x70);
  cVar2 = FUN_141766f20(plVar10,param_4,param_6);
  if ((cVar2 != '\0') && (param_2 != 0)) {
    uVar9 = (**(code **)(*plVar10 + 0x2e0))(plVar10,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar9;
}



// FUNCTION 14173d000 ImportText_Internal body=85 status=ok
// SIG undefined ImportText_Internal(void)

undefined8 UProperty::ImportText_Internal(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x13e,L"Pure virtual not implemented (%s)",L"UProperty::ImportText");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x13e,L"Pure virtual not implemented (%s)",L"UProperty::ImportText");
  return 0;
}



// FUNCTION 14173d060 FUN_14173d060 body=1847 status=ok
// SIG undefined FUN_14173d060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14173d060(char param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70 [7];
  
  fVar17 = (float)param_2;
  if (DAT_1468c2185 != '\0') {
    DAT_1469e7690 = '\x01';
    FUN_141789b10(&DAT_1469e91a0);
    DAT_1464b4d40 = '\x01';
    DAT_1469e7691 = 0;
  }
  if (DAT_1469e7690 == '\0') {
    return;
  }
  bVar3 = false;
  DAT_1469e7294 = 1;
  QueryPerformanceCounter(&local_res20);
  cVar5 = '\0';
  dVar2 = (double)local_res20.QuadPart * DAT_1468b02f8;
  if (DAT_1469e7694 < DAT_1469e72c8) {
    LOCK();
    bVar16 = *(int *)(DAT_1469e7300 + 4) == 0;
    if (bVar16) {
      *(int *)(DAT_1469e7300 + 4) = 0;
    }
    UNLOCK();
    if (bVar16) {
      QueryPerformanceCounter(&local_78);
      FUN_141736720(DAT_1469e7300);
      QueryPerformanceCounter(local_70);
    }
    cVar5 = UnhashUnreachableObjects(param_1,param_2);
    lVar10 = DAT_1469e7300;
    if (bVar16) {
      (**(code **)(**(longlong **)(DAT_1469e7300 + 0x38) + 0x10))();
      LOCK();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      UNLOCK();
    }
  }
  LOCK();
  bVar16 = DAT_1469e76c8 == 0;
  if (bVar16) {
    DAT_1469e76c8 = 0;
  }
  UNLOCK();
  LockUObjectHashTables();
  LOCK();
  DAT_1469e76c8 = 1;
  UNLOCK();
  if (DAT_1469e72ab == '\0') {
    if (cVar5 != '\0') goto LAB_14173d72f;
    iVar12 = 0;
    if (DAT_1464b4d40 != '\0') {
      FRawObjectIterator::FRawObjectIterator(&PTR_DAT_1464b4d28,DAT_1469e7691);
      DAT_1464b4d40 = '\0';
    }
    do {
      puVar4 = (undefined8 *)0x0;
      iVar9 = DAT_1469e72fc;
      iVar14 = iVar12;
      if (DAT_1464b4d38 == (undefined8 *)0x0) goto joined_r0x00014173d36c;
      if ((*(uint *)(DAT_1464b4d38 + 1) >> 0x1c & 1) != 0) {
        plVar1 = (longlong *)*DAT_1464b4d38;
        cVar6 = (**(code **)(*plVar1 + 0x90))(plVar1);
        iVar9 = DAT_1469e72b8;
        if (cVar6 == '\0') {
          lVar10 = (longlong)DAT_1469e72b8;
          DAT_1469e72b8 = DAT_1469e72b8 + 1;
          if (DAT_1469e72bc < DAT_1469e72b8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1469e72b0,iVar9);
          }
          DAT_1469e72fc = DAT_1469e72fc + 1;
          *(longlong **)(DAT_1469e72b0 + lVar10 * 8) = plVar1;
        }
        else {
          UObject::ConditionalFinishDestroy(plVar1);
        }
      }
      _DAT_1464b4d30 = _DAT_1464b4d30 + 1;
      DAT_1464b4d38 = (undefined8 *)0x0;
      puVar4 = DAT_1464b4d38;
      if ((int)_DAT_1464b4d30 < *(int *)(PTR_DAT_1464b4d28 + 0x24)) {
        do {
          uVar8 = _DAT_1464b4d30 & 0xffff;
          uVar7 = _DAT_1464b4d30;
          if ((int)_DAT_1464b4d30 < 0) {
            uVar7 = _DAT_1464b4d30 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          lVar10 = *(longlong *)
                    (*(longlong *)(PTR_DAT_1464b4d28 + 0x10) + (longlong)((int)uVar7 >> 0x10) * 8);
          puVar4 = (undefined8 *)(lVar10 + (longlong)(int)uVar8 * 0x18);
        } while ((*(longlong *)(lVar10 + (longlong)(int)uVar8 * 0x18) == 0) &&
                (_DAT_1464b4d30 = _DAT_1464b4d30 + 1, puVar4 = DAT_1464b4d38,
                (int)_DAT_1464b4d30 < *(int *)(PTR_DAT_1464b4d28 + 0x24)));
      }
      DAT_1464b4d38 = puVar4;
      iVar14 = iVar12 + 1;
      iVar9 = iVar12 % 10;
      iVar12 = iVar14;
    } while ((param_1 == '\0') ||
            ((iVar9 != 0 ||
             (QueryPerformanceCounter(&local_98),
             (double)local_98.QuadPart * DAT_1468b02f8 - dVar2 <= (double)fVar17))));
    cVar5 = '\x01';
    puVar4 = DAT_1464b4d38;
    iVar9 = DAT_1469e72fc;
    if (DAT_1464b4d38 == (undefined8 *)0x0) {
joined_r0x00014173d36c:
      do {
        DAT_1464b4d38 = puVar4;
        DAT_1469e72fc = iVar9;
        if (iVar9 < 1) goto LAB_14173d528;
        iVar12 = 0;
        if (0 < iVar9) {
          lVar10 = 0;
          iVar15 = iVar14;
          do {
            plVar1 = *(longlong **)(lVar10 + DAT_1469e72b0);
            cVar6 = (**(code **)(*plVar1 + 0x90))(plVar1);
            if (cVar6 == '\0') {
              iVar12 = iVar12 + 1;
              lVar10 = lVar10 + 8;
            }
            else {
              UObject::ConditionalFinishDestroy(plVar1);
              DAT_1469e72fc = DAT_1469e72fc + -1;
              *(undefined8 *)(lVar10 + DAT_1469e72b0) =
                   *(undefined8 *)(DAT_1469e72b0 + (longlong)DAT_1469e72fc * 8);
            }
            iVar14 = iVar15 + 1;
            if (((param_1 != '\0') && (iVar15 % 10 == 0)) &&
               (QueryPerformanceCounter(&local_90),
               (double)fVar17 < (double)local_90.QuadPart * DAT_1468b02f8 - dVar2)) {
              cVar5 = '\x01';
              break;
            }
            iVar15 = iVar14;
          } while (iVar12 < DAT_1469e72fc);
        }
        if ((param_1 != '\0') || (DAT_1469e72fc < 1)) goto LAB_14173d528;
        if ((iVar9 == DAT_1469e72fc) && (iVar14 % 10 == 0)) {
          QueryPerformanceCounter(&local_88);
          uVar11 = 0;
          if ((10.0 < (double)local_88.QuadPart * DAT_1468b02f8 - dVar2) &&
             (uVar13 = uVar11, 0 < DAT_1469e72fc)) {
            do {
              (**(code **)(**(longlong **)(uVar11 + DAT_1469e72b0) + 0x90))();
              uVar7 = (int)uVar13 + 1;
              uVar11 = uVar11 + 8;
              uVar13 = (ulonglong)uVar7;
            } while ((int)uVar7 < DAT_1469e72fc);
          }
        }
        FUN_1416b1760(0);
        puVar4 = DAT_1464b4d38;
        iVar9 = DAT_1469e72fc;
        iVar14 = iVar14 + 1;
      } while( true );
    }
    goto LAB_14173d580;
  }
LAB_14173d59d:
  iVar12 = 0;
  if (cVar5 == '\0') {
    if (DAT_1464b4d40 != '\0') {
      FRawObjectIterator::FRawObjectIterator(&PTR_DAT_1464b4d28,DAT_1469e7691);
      DAT_1464b4d40 = '\0';
    }
    while (DAT_1464b4d38 != (undefined8 *)0x0) {
      if ((*(uint *)(DAT_1464b4d38 + 1) >> 0x1c & 1) != 0) {
        DAT_1469e7692 = 1;
        (*(code *)**(undefined8 **)*DAT_1464b4d38)((undefined8 *)*DAT_1464b4d38,0);
        FUObjectAllocator::FreeUObject(&DAT_1469e8ef0);
        _DAT_1469e7290 = _DAT_1469e7290 + 1;
        DAT_1469e7692 = 0;
      }
      _DAT_1464b4d30 = _DAT_1464b4d30 + 1;
      DAT_1464b4d38 = (undefined8 *)0x0;
      puVar4 = DAT_1464b4d38;
      if ((int)_DAT_1464b4d30 < *(int *)(PTR_DAT_1464b4d28 + 0x24)) {
        do {
          uVar8 = _DAT_1464b4d30 & 0xffff;
          uVar7 = _DAT_1464b4d30;
          if ((int)_DAT_1464b4d30 < 0) {
            uVar7 = _DAT_1464b4d30 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          lVar10 = *(longlong *)
                    (*(longlong *)(PTR_DAT_1464b4d28 + 0x10) + (longlong)((int)uVar7 >> 0x10) * 8);
          puVar4 = (undefined8 *)(lVar10 + (longlong)(int)uVar8 * 0x18);
        } while ((*(longlong *)(lVar10 + (longlong)(int)uVar8 * 0x18) == 0) &&
                (_DAT_1464b4d30 = _DAT_1464b4d30 + 1, puVar4 = DAT_1464b4d38,
                (int)_DAT_1464b4d30 < *(int *)(PTR_DAT_1464b4d28 + 0x24)));
      }
      DAT_1464b4d38 = puVar4;
      iVar12 = iVar12 + 1;
      if ((param_1 != '\0') && (iVar12 == 100)) {
        QueryPerformanceCounter(&local_80);
        if ((double)fVar17 < (double)local_80.QuadPart * DAT_1468b02f8 - dVar2) {
          if (DAT_1464b4d38 != (undefined8 *)0x0) goto LAB_14173d72f;
          break;
        }
        iVar12 = 0;
      }
    }
    bVar3 = true;
    DAT_1469e72ab = '\0';
    DAT_1469e7690 = '\0';
    DAT_1464b4d40 = '\x01';
    DAT_1469e7691 = 1;
  }
LAB_14173d72f:
  LOCK();
  DAT_1469e76c8 = (uint)!bVar16;
  UNLOCK();
  FUN_1417a9740();
  if (bVar3) {
    DAT_1469e7294 = 0;
  }
  return;
LAB_14173d528:
  if (DAT_1469e72fc == 0) {
    DAT_1469e72b8 = 0;
    if (DAT_1469e72bc != 0x100) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1469e72b0,0x100);
    }
    DAT_1469e7691 = DAT_1468c2185 == '\0';
    DAT_1469e72ab = '\x01';
    DAT_1464b4d40 = '\x01';
  }
  else {
LAB_14173d580:
    if (DAT_1469e72ab == '\0') goto LAB_14173d72f;
  }
  goto LAB_14173d59d;
}



// FUNCTION 14173d7a0 FUN_14173d7a0 body=722 status=ok
// SIG undefined FUN_14173d7a0(void)

undefined8 FUN_14173d7a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      if ((-1 < (int)param_2) || (*(int *)(param_1 + 0x10) <= (int)~param_2)) {
        FText::FText(local_20);
        FText::FText(local_38);
        FConfigCacheIni::GetText
                  (DAT_1468b6148,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                   local_20,&DAT_1468e2360);
        FConfigCacheIni::GetText
                  (DAT_1468b6148,L"/Script/Engine.Engine",
                   L"SerializationOutOfBoundsErrorMessageCaption",local_38,&DAT_1468e2360);
        lVar3 = FUN_141672640();
        if (lVar3 != 0) {
          plVar4 = (longlong *)FUN_141672640();
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        puVar5 = (undefined8 *)FText::ToString(local_38);
        puVar7 = &DAT_143f3eda8;
        if (*(int *)(puVar5 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar5;
        }
        puVar5 = (undefined8 *)FText::ToString(local_20);
        if (*(int *)(puVar5 + 1) != 0) {
          puVar7 = (undefined2 *)*puVar5;
        }
        FUN_1416a4860(0,puVar7,puVar9);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_18 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar1 = (int *)((longlong)local_18 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_18 + 8))(local_18,1);
            }
          }
        }
      }
      uVar6 = FUN_141731ec0(param_1,~param_2);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    iVar8 = param_2 - 1;
    if ((iVar8 < 0) || (*(int *)(param_1 + 0x20) <= iVar8)) {
      FText::FText(local_50);
      FText::FText(local_68);
      FConfigCacheIni::GetText
                (DAT_1468b6148,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                 local_50,&DAT_1468e2360);
      FConfigCacheIni::GetText
                (DAT_1468b6148,L"/Script/Engine.Engine",
                 L"SerializationOutOfBoundsErrorMessageCaption",local_68,&DAT_1468e2360);
      lVar3 = FUN_141672640();
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_141672640();
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      puVar5 = (undefined8 *)FText::ToString(local_68);
      puVar7 = &DAT_143f3eda8;
      if (*(int *)(puVar5 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)FText::ToString(local_50);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar5;
      }
      FUN_1416a4860(0,puVar7,puVar9);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    uVar6 = FUN_141730700(param_1,iVar8);
  }
  return uVar6;
}



// FUNCTION 14173da80 InvalidateExport body=73 status=ok
// SIG undefined InvalidateExport(void)

void FLinkerLoad::InvalidateExport(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1417a53c0();
  iVar1 = FUN_1417a5490(param_1);
  if (((lVar2 != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(lVar2 + 0x20))) {
    *(undefined1 *)((longlong)iVar1 * 0x88 + 0x59 + *(longlong *)(lVar2 + 0x18)) = 1;
  }
  return;
}



// FUNCTION 14173dad0 IsGarbageCollecting body=16 status=ok
// SIG undefined IsGarbageCollecting(void)

undefined8 IsGarbageCollecting(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = 0;
  LOCK();
  bVar2 = DAT_1469e76c8 == 0;
  if (bVar2) {
    DAT_1469e76c8 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_1469e76c8;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar1 >> 8),!bVar2);
}



// FUNCTION 14173dae0 IsGarbageCollectionLocked body=19 status=ok
// SIG undefined IsGarbageCollectionLocked(void)

undefined8 IsGarbageCollectionLocked(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *DAT_1469e7300;
  if (uVar1 == 0) {
    *DAT_1469e7300 = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 != 0);
}



// FUNCTION 14173db00 IsGarbageCollectionWaiting body=22 status=ok
// SIG undefined IsGarbageCollectionWaiting(void)

undefined8 IsGarbageCollectionWaiting(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(DAT_1469e7300 + 8);
  if (uVar1 == 0) {
    *(uint *)(DAT_1469e7300 + 8) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar2);
}



// FUNCTION 14173db30 IsImportNative body=175 status=ok
// SIG undefined IsImportNative(void)

ulonglong FLinkerLoad::IsImportNative(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong local_18 [2];
  
  while( true ) {
    lVar6 = (longlong)(int)param_2 * 0x38 + *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      return (ulonglong)(uint7)(int7)(int3)(param_2 >> 8) << 8;
    }
    if (*(uint *)(lVar6 + 8) == 0) break;
    param_2 = ~*(uint *)(lVar6 + 8);
  }
  puVar2 = (undefined8 *)FName::ToString(lVar6,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar2;
  }
  uVar3 = UPackage::GetPrivateStaticClass();
  uVar4 = FUN_141799410(uVar3,0,puVar7,0);
  uVar5 = uVar4;
  if (local_18[0] != 0) {
    uVar5 = FMemory::Free();
  }
  if ((uVar4 != 0) && (*(longlong *)(uVar4 + 0x20) == 0)) {
    uVar1 = *(uint *)(uVar4 + 0x50) >> 4;
    uVar5 = (ulonglong)uVar1;
    if ((uVar1 & 1) != 0) {
      return CONCAT71((uint7)(uint3)(*(uint *)(uVar4 + 0x50) >> 0xc),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14173dbe0 FUN_14173dbe0 body=24 status=ok
// SIG undefined FUN_14173dbe0(void)

undefined1 FUN_14173dbe0(void)

{
  if ((DAT_1469e7294 == '\0') && (DAT_1469e7690 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14173dc00 IsKnownMissingPackage body=46 status=ok
// SIG undefined IsKnownMissingPackage(void)

void FLinkerLoad::IsKnownMissingPackage(undefined8 param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = param_1;
  FCoreRedirects::IsKnownMissing(0x40,&local_28);
  return;
}



// FUNCTION 14173dc30 FUN_14173dc30 body=146 status=ok
// SIG undefined FUN_14173dc30(void)

ulonglong FUN_14173dc30(longlong param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 extraout_var;
  LARGE_INTEGER local_res8 [4];
  
  iVar2 = *(int *)(param_1 + 0x76c) + 1;
  *(int *)(param_1 + 0x76c) = iVar2;
  if (((((*(byte *)(param_1 + 0x228) & 8) == 0) && (*(char *)(param_1 + 0x766) == '\0')) &&
      (*(char *)(param_1 + 0x767) != '\0')) && (iVar2 % param_3 == 0)) {
    BVar3 = QueryPerformanceCounter(local_res8);
    bVar1 = (double)*(float *)(param_1 + 0x770) <
            ((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
            *(double *)(param_1 + 0x778);
    *(bool *)(param_1 + 0x766) = bVar1;
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar3) >> 8),bVar1);
  }
  return (ulonglong)*(byte *)(param_1 + 0x766);
}



// FUNCTION 14173dcd0 IsValidEnumValue body=45 status=ok
// SIG undefined IsValidEnumValue(void)

ulonglong UEnum::IsValidEnumValue(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  plVar2 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    lVar3 = 0;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    do {
      if (*plVar2 == param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar3 < iVar1);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14173dd00 FUN_14173dd00 body=126 status=ok
// SIG undefined FUN_14173dd00(void)

void FUN_14173dd00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x70));
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
  FUN_141764ac0(plVar1);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x34);
  *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x1040000200;
  *(ulonglong *)(param_1 + 0x38) =
       *(ulonglong *)(param_1 + 0x38) |
       *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x38) & 0x8000000000000;
  return;
}



// FUNCTION 14173dd80 FUN_14173dd80 body=520 status=ok
// SIG undefined FUN_14173dd80(void)

void FUN_14173dd80(longlong param_1,char param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  LARGE_INTEGER local_res8;
  
  cVar11 = '\x01';
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
    cVar11 = param_2;
  }
  QueryPerformanceCounter(&local_res8);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      if ((iVar10 != -1) && (cVar4 = FUN_1416fbc90(param_1,iVar10), cVar4 == '\0')) {
        lVar6 = FUN_141730700(param_1,iVar10);
        if (lVar6 != 0) {
          if (cVar11 == '\0') {
            lVar7 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) && (cVar4 = UObjectBaseUtility::IsTemplate(lVar6,0x30), cVar4 == '\0')) {
              lVar7 = UObjectRedirector::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_14173dec2;
            }
          }
          FUN_141740c00(param_1 + 0x200,lVar6);
        }
LAB_14173dec2:
        if ((DAT_1468c21ab == '\0') && (lVar6 != 0)) {
          lVar7 = UDynamicClass::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (iVar9 = 0, 0 < *(int *)(param_1 + 0x10))) {
            do {
              FUN_141731ec0(param_1,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 0x10));
          }
        }
        if ((bVar3) && (iVar10 == (iVar10 / 10) * 10)) {
          uVar8 = FUN_1415d80a0();
          FUN_1415df310(uVar8,0);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xa0) + 0x28);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}



// FUNCTION 14173df90 FUN_14173df90 body=184 status=ok
// SIG undefined FUN_14173df90(void)

void FUN_14173df90(int *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  bool bVar6;
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    bVar1 = false;
    do {
      LOCK();
      iVar4 = param_1[1];
      if (iVar4 == 0) {
        param_1[1] = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        (**(code **)(**(longlong **)(param_1 + 0xe) + 0x20))
                  (*(longlong **)(param_1 + 0xe),0xffffffff,0);
      }
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      }
      LOCK();
      bVar6 = param_1[1] == 0;
      if (bVar6) {
        param_1[1] = 0;
      }
      UNLOCK();
      if (bVar6) {
        LOCK();
        *param_1 = *param_1 + 1;
        UNLOCK();
        bVar1 = true;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    } while (!bVar1);
  }
  return;
}



// FUNCTION 14173e050 FUN_14173e050 body=1299 status=ok
// SIG undefined FUN_14173e050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14173e050(undefined8 param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,uint param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined1 auStack_228 [32];
  undefined4 local_208 [2];
  longlong local_200;
  ulonglong local_1f8;
  longlong local_1f0 [4];
  undefined1 local_1d0 [8];
  undefined8 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  int local_1b0;
  longlong *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [40];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_208[0] = 0;
  local_1c0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e7730) && (_Init_thread_header(&DAT_1469e7730), DAT_1469e7730 == -1))
  {
    FName::FName(&DAT_1469e7728,"LoadErrors",1);
    _Init_thread_footer(&DAT_1469e7730);
  }
  FUN_14161fb50(local_130,&DAT_1469e7728);
  if ((param_6 & 0x2002) == 0) {
    FUN_14173f5f0(param_1,&DAT_1469e7728);
  }
  local_f8 = 0;
  local_c8 = 0xffffffff;
  puVar9 = &DAT_143f3eda8;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  bVar10 = false;
  if (param_2 == (wchar_t *)0x0) {
    if (param_5 == 0) {
      param_2 = L"NULL";
      bVar10 = false;
    }
    else {
      local_1c8 = *(undefined8 *)(param_5 + 0x18);
      FName::ToString(&local_1c8,&local_1b8);
      bVar10 = true;
      param_2 = L"";
      if (local_1b0 != 0) {
        param_2 = local_1b8;
      }
    }
  }
  local_1f8 = 0;
  local_200 = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != L'\0');
    uVar7 = (int)lVar8 + 1;
    local_1f8 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    }
    FGenericPlatformString::Memcpy(local_200,param_2,(longlong)(int)uVar7 * 2);
  }
  uVar5 = FText::FromString(local_160,&local_200);
  local_a8[0] = 4;
  FText::FText(local_98,uVar5);
  local_80 = '\x01';
  local_1f0[0] = 0;
  local_1f0[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f0,0);
  FGenericPlatformString::Memcpy(local_1f0[0],L"FileName",0x12);
  local_1a8 = local_1f0;
  local_1a0 = local_a8;
  FUN_1407484b0(&local_f8,local_208,&local_1a8,0);
  if (local_1f0[0] != 0) {
    FMemory::Free();
  }
  if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  if (local_200 != 0) {
    FMemory::Free();
  }
  if ((bVar10) && (local_1b8 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  local_78[0] = 4;
  FText::FText(local_68,local_1c0);
  local_50 = '\x01';
  local_1f0[2] = 0;
  local_1f0[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f0 + 2,0);
  FGenericPlatformString::Memcpy(local_1f0[2],L"ErrorMessage",0x1a);
  local_198 = local_1f0 + 2;
  local_190 = local_78;
  FUN_1407484b0(&local_f8,local_1d0,&local_198,0);
  if (local_1f0[2] != 0) {
    FMemory::Free();
  }
  if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_148,L"Failed to load \'{FileName}\': {ErrorMessage}",L"Linker",
                     L"FailedLoad");
  uVar5 = FTextFormat::FTextFormat(local_108,uVar5);
  FText::Format(local_188,uVar5,&local_f8);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  uVar5 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar5,L"SavePackagesThatHaveFailedLoads");
  if (cVar4 == '\x01') {
    FMessageLog::Warning(local_130,local_170,local_188);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar2 = (int *)((longlong)local_168 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
  }
  else {
    puVar6 = (undefined8 *)FText::ToString(local_188);
    if (*(int *)(puVar6 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar6;
    }
    SafeLoadError(param_5,param_6,puVar9);
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)local_180 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f8);
  FMessageLog::~FMessageLog(local_130);
  return;
}



// FUNCTION 14173e570 LookupEnumName body=209 status=ok
// SIG undefined LookupEnumName(void)

undefined8 UEnum::LookupEnumName(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  if (DAT_1464b4cb8 != DAT_1464b4ce4) {
    puVar2 = DAT_1464b4cf0;
    if (DAT_1464b4cf0 == (undefined *)0x0) {
      puVar2 = &DAT_1464b4ce8;
    }
    iVar1 = *(int *)(puVar2 + ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                              (longlong)DAT_1464b4cf8 - 1U) * 4);
    while (iVar1 != -1) {
      lVar4 = (longlong)iVar1;
      if (*(longlong *)(DAT_1464b4cb0 + lVar4 * 0x18) == param_1) {
        lVar3 = 0;
        if ((iVar1 != -1) && (lVar4 = DAT_1464b4cb0 + lVar4 * 0x18, lVar4 != 0)) {
          lVar3 = *(longlong *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(DAT_1464b4cb0 + 0x10 + lVar4 * 0x18);
    }
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar3;
  }
  if ((lVar3 != 0) && (iVar1 = GetIndexByName(lVar3,param_1,0), iVar1 != -1)) {
    return *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14173e650 FUN_14173e650 body=2019 status=ok
// SIG undefined FUN_14173e650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14173e650(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_578 [32];
  char local_558;
  longlong *local_548;
  undefined1 **ppuStack_540;
  longlong local_538;
  longlong local_530;
  longlong *local_528;
  longlong *local_520;
  undefined1 *local_518;
  undefined1 *local_510;
  undefined1 *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  undefined1 local_4e8 [128];
  ulonglong local_468;
  ulonglong local_3e0;
  undefined1 local_358 [128];
  ulonglong local_2d8;
  ulonglong local_250;
  undefined1 local_1c8 [128];
  ulonglong local_148;
  ulonglong local_c0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  uVar13 = 0;
  local_468 = 0;
  local_3e0 = 0;
  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
  local_2d8 = 0;
  local_468 = local_468 & 0xfffffffffc000000 | (ulonglong)uVar5;
  local_250 = 0;
  local_3e0 = local_3e0 & 0xfffffffffc000000 | (ulonglong)uVar5;
  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
  local_148 = 0;
  local_2d8 = local_2d8 & 0xfffffffffc000000 | (ulonglong)uVar5;
  local_c0 = 0;
  local_250 = local_250 & 0xfffffffffc000000 | (ulonglong)uVar5;
  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
  iVar12 = (int)DAT_1469e91c4 - _DAT_1469e91a0;
  local_148 = local_148 & 0xfffffffffc000000 | (ulonglong)uVar5;
  local_c0 = local_c0 & 0xfffffffffc000000 | (ulonglong)uVar5;
  plVar8 = (longlong *)FTaskGraphInterface::Get();
  local_4f4 = (**(code **)(*plVar8 + 0x18))(plVar8);
  local_500 = 0xe000000;
  if (local_4f4 < 2) {
    local_4f4 = 1;
  }
  local_518 = local_4e8;
  local_510 = local_358;
  local_508 = local_1c8;
  local_4f8 = iVar12 / local_4f4 + 1;
  ppuStack_540 = &local_518;
  local_548 = (longlong *)&LAB_14172d060;
  local_4fc = param_3;
  local_4f0 = iVar12;
  FUN_1406a7b10(0x4172d060,&local_548,param_4);
  FLockFreePointerFIFOBase<FUObjectItem,128,1>::PopAll(local_4e8,param_2);
  local_548 = (longlong *)0x0;
  ppuStack_540 = (undefined1 **)0x0;
  FLockFreePointerFIFOBase<FUObjectItem,128,1>::PopAll(local_358,&local_548);
  plVar8 = local_548;
  uVar15 = (ulonglong)((longlong)(local_548 + (int)ppuStack_540) + (7 - (longlong)local_548)) >> 3;
  if (local_548 + (int)ppuStack_540 < local_548) {
    uVar15 = uVar13;
  }
  plVar9 = local_548;
  if (uVar15 != 0) {
    do {
      FUObjectClusterContainer::DissolveClusterAndMarkObjectsAsUnreachable(&DAT_1469e8f10,*plVar9);
      uVar13 = uVar13 + 1;
      DAT_1469e8f34 = 1;
      plVar9 = plVar9 + 1;
    } while (uVar13 != uVar15);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  local_548 = (longlong *)0x0;
  ppuStack_540 = (undefined1 **)0x0;
  FLockFreePointerFIFOBase<FUObjectItem,128,1>::PopAll(local_1c8,&local_548);
  local_528 = local_548;
  local_520 = local_548 + (int)ppuStack_540;
  if (local_548 != local_520) {
    do {
      lVar14 = *local_528;
      uVar5 = *(uint *)(lVar14 + 0xc);
      if ((int)uVar5 < 1) {
        local_558 = '\0';
        local_538 = (longlong)(int)~uVar5 * 0x50 + DAT_1469e8f10;
        puVar10 = *(uint **)(local_538 + 0x18);
        puVar11 = puVar10 + *(int *)(local_538 + 0x20);
        for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
          uVar5 = *puVar10;
          if (-1 < (int)uVar5) {
            lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
            uVar6 = *(uint *)(lVar14 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
            if ((uVar6 >> 0x1d & 1) == 0) {
              *(uint *)(lVar14 + (longlong)(int)(uVar5 & 0xffff) * 0x18 + 8) = uVar6 & 0xefffffff;
            }
            else {
              *puVar10 = 0xffffffff;
              local_558 = '\x01';
            }
          }
        }
        puVar10 = *(uint **)(local_538 + 0x28);
        bVar4 = false;
        puVar11 = puVar10 + *(int *)(local_538 + 0x30);
        if (puVar10 == puVar11) {
LAB_14173ed1b:
          if (local_558 == '\0') goto LAB_14173edb8;
        }
        else {
          do {
            uVar5 = *puVar10;
            if (-1 < (int)uVar5) {
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
              puVar1 = (undefined8 *)(lVar14 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
              uVar5 = *(uint *)(lVar14 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
              if ((uVar5 >> 0x1d & 1) == 0) {
                if ((uVar5 >> 0x1c & 1) == 0) {
                  uVar6 = *(uint *)((longlong)puVar1 + 0xc);
                  if ((0 < (int)uVar6) && ((uVar5 >> 0x17 & 1) == 0)) {
                    uVar7 = uVar6 & 0xffff;
                    *(uint *)(puVar1 + 1) = uVar5 | 0x800000;
                    if ((int)uVar6 < 0) {
                      uVar6 = uVar6 + 0xffff;
                      uVar7 = uVar7 - 0x10000;
                    }
                    lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
                    lVar14 = lVar2 + (longlong)(int)uVar7 * 0x18;
                    uVar5 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar7 * 0x18);
                    if ((uVar5 >> 0x1c & 1) != 0) {
                      *(uint *)(lVar14 + 8) = uVar5 & 0xefffffff;
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)(lVar14 + 0xc),param_2);
                    }
                  }
                }
                else {
                  uVar3 = *puVar1;
                  *(uint *)(puVar1 + 1) = uVar5 & 0xefffffff;
                  iVar12 = (int)param_2[1];
                  *(int *)(param_2 + 1) = iVar12 + 1;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar12 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_2,iVar12);
                  }
                  *(undefined8 *)(*param_2 + (longlong)iVar12 * 8) = uVar3;
                  if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                    FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                              (~*(uint *)((longlong)puVar1 + 0xc),param_2);
                  }
                }
              }
              else {
                *puVar10 = 0xffffffff;
                bVar4 = true;
              }
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != puVar11);
          if (!bVar4) goto LAB_14173ed1b;
        }
        lVar14 = local_538;
        uVar15 = 0;
        puVar11 = *(uint **)(local_538 + 8);
        uVar13 = (longlong)*(int *)(local_538 + 0x10) & 0x3fffffffffffffff;
        if (puVar11 + *(int *)(local_538 + 0x10) < puVar11) {
          uVar13 = uVar15;
        }
        if (uVar13 != 0) {
          do {
            uVar5 = *puVar11;
            uVar6 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            iVar12 = (int)param_2[1];
            uVar3 = *(undefined8 *)
                     (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                     (longlong)(int)uVar6 * 0x18);
            *(int *)(param_2 + 1) = iVar12 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar12 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
            }
            puVar11 = puVar11 + 1;
            uVar15 = uVar15 + 1;
            *(undefined8 *)(*param_2 + (longlong)iVar12 * 8) = uVar3;
          } while (uVar15 != uVar13);
        }
LAB_14173edac:
        *(undefined1 *)(lVar14 + 0x48) = 1;
        DAT_1469e8f34 = 1;
      }
      else if ((~(byte)(*(uint *)(lVar14 + 8) >> 0x17) & 1) != 0) {
        uVar6 = uVar5 & 0xffff;
        *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | 0x800000;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar6 = uVar6 - 0x10000;
        }
        lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
        lVar14 = lVar2 + (longlong)(int)uVar6 * 0x18;
        uVar5 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar6 * 0x18);
        if ((uVar5 >> 0x1c & 1) != 0) {
          *(uint *)(lVar14 + 8) = uVar5 & 0xefffffff;
          local_558 = '\0';
          local_530 = (longlong)(int)~*(uint *)(lVar14 + 0xc) * 0x50 + DAT_1469e8f10;
          puVar10 = *(uint **)(local_530 + 0x18);
          puVar11 = puVar10 + *(int *)(local_530 + 0x20);
          for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
            uVar5 = *puVar10;
            if (-1 < (int)uVar5) {
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
              uVar6 = *(uint *)(lVar14 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
              if ((uVar6 >> 0x1d & 1) == 0) {
                *(uint *)(lVar14 + (longlong)(int)(uVar5 & 0xffff) * 0x18 + 8) = uVar6 & 0xefffffff;
              }
              else {
                *puVar10 = 0xffffffff;
                local_558 = '\x01';
              }
            }
          }
          puVar10 = *(uint **)(local_530 + 0x28);
          bVar4 = false;
          puVar11 = puVar10 + *(int *)(local_530 + 0x30);
          if (puVar10 == puVar11) {
LAB_14173eadb:
            if (local_558 == '\0') goto LAB_14173edb8;
          }
          else {
            do {
              uVar5 = *puVar10;
              if (-1 < (int)uVar5) {
                lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
                puVar1 = (undefined8 *)(lVar14 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                uVar5 = *(uint *)(lVar14 + 8 + (longlong)(int)(uVar5 & 0xffff) * 0x18);
                if ((uVar5 >> 0x1d & 1) == 0) {
                  if ((uVar5 >> 0x1c & 1) == 0) {
                    uVar6 = *(uint *)((longlong)puVar1 + 0xc);
                    if ((0 < (int)uVar6) && ((uVar5 >> 0x17 & 1) == 0)) {
                      uVar7 = uVar6 & 0xffff;
                      *(uint *)(puVar1 + 1) = uVar5 | 0x800000;
                      if ((int)uVar6 < 0) {
                        uVar6 = uVar6 + 0xffff;
                        uVar7 = uVar7 - 0x10000;
                      }
                      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
                      lVar14 = lVar2 + (longlong)(int)uVar7 * 0x18;
                      uVar5 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar7 * 0x18);
                      if ((uVar5 >> 0x1c & 1) != 0) {
                        *(uint *)(lVar14 + 8) = uVar5 & 0xefffffff;
                        FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                  (~*(uint *)(lVar14 + 0xc),param_2);
                      }
                    }
                  }
                  else {
                    uVar3 = *puVar1;
                    *(uint *)(puVar1 + 1) = uVar5 & 0xefffffff;
                    iVar12 = (int)param_2[1];
                    *(int *)(param_2 + 1) = iVar12 + 1;
                    if (*(int *)((longlong)param_2 + 0xc) < iVar12 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_2,iVar12);
                    }
                    *(undefined8 *)(*param_2 + (longlong)iVar12 * 8) = uVar3;
                    if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)((longlong)puVar1 + 0xc),param_2);
                    }
                  }
                }
                else {
                  *puVar10 = 0xffffffff;
                  bVar4 = true;
                }
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != puVar11);
            if (!bVar4) goto LAB_14173eadb;
          }
          lVar14 = local_530;
          uVar15 = 0;
          puVar11 = *(uint **)(local_530 + 8);
          uVar13 = (longlong)*(int *)(local_530 + 0x10) & 0x3fffffffffffffff;
          if (puVar11 + *(int *)(local_530 + 0x10) < puVar11) {
            uVar13 = uVar15;
          }
          if (uVar13 != 0) {
            do {
              uVar5 = *puVar11;
              uVar6 = uVar5 & 0xffff;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 + 0xffff;
                uVar6 = uVar6 - 0x10000;
              }
              iVar12 = (int)param_2[1];
              uVar3 = *(undefined8 *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                       (longlong)(int)uVar6 * 0x18);
              *(int *)(param_2 + 1) = iVar12 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar12 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
              }
              puVar11 = puVar11 + 1;
              uVar15 = uVar15 + 1;
              *(undefined8 *)(*param_2 + (longlong)iVar12 * 8) = uVar3;
            } while (uVar15 != uVar13);
          }
          goto LAB_14173edac;
        }
      }
LAB_14173edb8:
      local_528 = local_528 + 1;
    } while (local_528 != local_520);
  }
  if (local_548 != (longlong *)0x0) {
    FMemory::Free(local_548);
  }
  return;
}



// FUNCTION 14173ee40 MarkReferencedClustersAsReachable body=807 status=ok
// SIG undefined MarkReferencedClustersAsReachable(void)

uint * FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(int param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  
  bVar6 = false;
  lVar13 = (longlong)param_1 * 0x50 + DAT_1469e8f10;
  puVar11 = *(uint **)(lVar13 + 0x18);
  puVar9 = puVar11 + *(int *)(lVar13 + 0x20);
  for (; puVar11 != puVar9; puVar11 = puVar11 + 1) {
    uVar7 = *puVar11;
    if (-1 < (int)uVar7) {
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8);
      lVar1 = lVar4 + (longlong)(int)(uVar7 & 0xffff) * 0x18;
      uVar7 = *(uint *)(lVar4 + 8 + (longlong)(int)(uVar7 & 0xffff) * 0x18);
      if ((uVar7 >> 0x1d & 1) == 0) {
        if ((uVar7 >> 0x1c & 1) != 0) {
          while ((uVar7 >> 0x1c & 1) != 0) {
            puVar8 = (uint *)(lVar1 + 8);
            LOCK();
            bVar15 = uVar7 == *puVar8;
            if (bVar15) {
              *puVar8 = uVar7 & 0xefffffff;
            }
            UNLOCK();
            if (bVar15) break;
            uVar7 = *(uint *)(lVar1 + 8);
          }
        }
      }
      else {
        *puVar11 = 0xffffffff;
        bVar6 = true;
      }
    }
  }
  puVar11 = *(uint **)(lVar13 + 0x28);
  bVar15 = false;
  puVar8 = (uint *)(longlong)*(int *)(lVar13 + 0x30);
  puVar9 = puVar11 + (longlong)puVar8;
  if (puVar11 != puVar9) {
    do {
      uVar7 = *puVar11;
      puVar8 = (uint *)(ulonglong)uVar7;
      if (-1 < (int)uVar7) {
        lVar1 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8);
        uVar10 = *(uint *)(lVar1 + 8 + (longlong)(int)(uVar7 & 0xffff) * 0x18);
        puVar8 = (uint *)(ulonglong)uVar10;
        puVar2 = (undefined8 *)(lVar1 + (longlong)(int)(uVar7 & 0xffff) * 0x18);
        if ((uVar10 >> 0x1d & 1) == 0) {
          if ((uVar10 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)((longlong)puVar2 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                uVar7 = (uint)puVar8;
                LOCK();
                bVar16 = uVar7 == *(uint *)(puVar2 + 1);
                if (bVar16) {
                  *(uint *)(puVar2 + 1) = uVar7 | 0x800000;
                }
                UNLOCK();
                if (bVar16) {
                  uVar7 = *(uint *)((longlong)puVar2 + 0xc);
                  uVar10 = uVar7 & 0xffff;
                  if ((int)uVar7 < 0) {
                    uVar7 = uVar7 + 0xffff;
                    uVar10 = uVar10 - 0x10000;
                  }
                  lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8);
                  lVar1 = lVar4 + (longlong)(int)uVar10 * 0x18;
                  uVar7 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar10 * 0x18);
                  puVar8 = (uint *)(ulonglong)(uVar7 >> 0x1c);
                  if ((uVar7 >> 0x1c & 1) != 0) goto joined_r0x00014173f05a;
                  break;
                }
                uVar10 = *(uint *)(puVar2 + 1);
                puVar8 = (uint *)(ulonglong)uVar10;
              }
            }
          }
          else {
            while ((uVar10 >> 0x1c & 1) != 0) {
              uVar7 = (uint)puVar8;
              LOCK();
              bVar16 = uVar7 == *(uint *)(puVar2 + 1);
              if (bVar16) {
                *(uint *)(puVar2 + 1) = uVar7 & 0xefffffff;
              }
              UNLOCK();
              if (bVar16) {
                iVar3 = (int)param_2[1];
                uVar5 = *puVar2;
                *(int *)(param_2 + 1) = iVar3 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
                }
                puVar8 = (uint *)*param_2;
                *(undefined8 *)(puVar8 + (longlong)iVar3 * 2) = uVar5;
                if ((int)*(uint *)((longlong)puVar2 + 0xc) < 0) {
                  puVar8 = (uint *)MarkReferencedClustersAsReachable
                                             (~*(uint *)((longlong)puVar2 + 0xc),param_2);
                }
                break;
              }
              uVar10 = *(uint *)(puVar2 + 1);
              puVar8 = (uint *)(ulonglong)uVar10;
            }
          }
        }
        else {
          *puVar11 = 0xffffffff;
          bVar15 = true;
        }
      }
LAB_14173f096:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
    if (bVar15) goto LAB_14173f0b3;
  }
  if (!bVar6) {
    return puVar8;
  }
LAB_14173f0b3:
  uVar12 = 0;
  puVar11 = *(uint **)(lVar13 + 8);
  puVar9 = puVar11 + *(int *)(lVar13 + 0x10);
  uVar14 = (longlong)*(int *)(lVar13 + 0x10) & 0x3fffffffffffffff;
  if (puVar9 < puVar11) {
    uVar14 = uVar12;
  }
  if (uVar14 != 0) {
    do {
      uVar7 = *puVar11;
      uVar10 = uVar7 & 0xffff;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0xffff;
        uVar10 = uVar10 - 0x10000;
      }
      iVar3 = (int)param_2[1];
      uVar5 = *(undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)uVar10 * 0x18);
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      puVar9 = (uint *)*param_2;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 + 1;
      *(undefined8 *)(puVar9 + (longlong)iVar3 * 2) = uVar5;
    } while (uVar12 != uVar14);
  }
  *(undefined1 *)(lVar13 + 0x48) = 1;
  DAT_1469e8f34 = 1;
  return puVar9;
joined_r0x00014173f05a:
  if ((uVar7 >> 0x1c & 1) == 0) goto LAB_14173f096;
  LOCK();
  uVar10 = *(uint *)(lVar1 + 8);
  bVar16 = uVar7 == uVar10;
  if (bVar16) {
    *(uint *)(lVar1 + 8) = uVar7 & 0xefffffff;
    uVar10 = uVar7;
  }
  puVar8 = (uint *)(ulonglong)uVar10;
  UNLOCK();
  if (bVar16) {
    puVar8 = (uint *)MarkReferencedClustersAsReachable(~*(uint *)(lVar1 + 0xc),param_2);
    goto LAB_14173f096;
  }
  uVar7 = *(uint *)(lVar1 + 8);
  goto joined_r0x00014173f05a;
}



// FUNCTION 14173f170 MarkReferencedClustersAsReachable body=644 status=ok
// SIG undefined MarkReferencedClustersAsReachable(void)

void FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  bVar7 = false;
  lVar14 = (longlong)param_1 * 0x50 + DAT_1469e8f10;
  puVar12 = *(uint **)(lVar14 + 0x18);
  puVar13 = puVar12 + *(int *)(lVar14 + 0x20);
  for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
    uVar9 = *puVar12;
    if (-1 < (int)uVar9) {
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
      uVar10 = *(uint *)(lVar3 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
      if ((uVar10 >> 0x1d & 1) == 0) {
        *(uint *)(lVar3 + (longlong)(int)(uVar9 & 0xffff) * 0x18 + 8) = uVar10 & 0xefffffff;
      }
      else {
        *puVar12 = 0xffffffff;
        bVar7 = true;
      }
    }
  }
  puVar12 = *(uint **)(lVar14 + 0x28);
  bVar6 = false;
  puVar13 = puVar12 + *(int *)(lVar14 + 0x30);
  if (puVar12 != puVar13) {
    do {
      uVar9 = *puVar12;
      if (-1 < (int)uVar9) {
        lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
        uVar9 = *(uint *)(lVar3 + 8 + (longlong)(int)(uVar9 & 0xffff) * 0x18);
        if ((uVar9 >> 0x1d & 1) == 0) {
          if ((uVar9 >> 0x1c & 1) == 0) {
            uVar10 = *(uint *)((longlong)puVar1 + 0xc);
            if ((0 < (int)uVar10) && ((uVar9 >> 0x17 & 1) == 0)) {
              uVar8 = uVar10 & 0xffff;
              *(uint *)(puVar1 + 1) = uVar9 | 0x800000;
              if ((int)uVar10 < 0) {
                uVar10 = uVar10 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
              lVar3 = lVar5 + (longlong)(int)uVar8 * 0x18;
              uVar9 = *(uint *)(lVar5 + 8 + (longlong)(int)uVar8 * 0x18);
              if ((uVar9 >> 0x1c & 1) != 0) {
                *(uint *)(lVar3 + 8) = uVar9 & 0xefffffff;
                MarkReferencedClustersAsReachable(~*(uint *)(lVar3 + 0xc),param_2);
              }
            }
          }
          else {
            uVar4 = *puVar1;
            *(uint *)(puVar1 + 1) = uVar9 & 0xefffffff;
            iVar2 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
            if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
              MarkReferencedClustersAsReachable(~*(uint *)((longlong)puVar1 + 0xc),param_2);
            }
          }
        }
        else {
          *puVar12 = 0xffffffff;
          bVar6 = true;
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar13);
    if (bVar6) goto LAB_14173f33d;
  }
  if (!bVar7) {
    return;
  }
LAB_14173f33d:
  uVar11 = 0;
  puVar13 = *(uint **)(lVar14 + 8);
  uVar15 = (longlong)*(int *)(lVar14 + 0x10) & 0x3fffffffffffffff;
  if (puVar13 + *(int *)(lVar14 + 0x10) < puVar13) {
    uVar15 = uVar11;
  }
  if (uVar15 != 0) {
    do {
      uVar9 = *puVar13;
      uVar10 = uVar9 & 0xffff;
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 0xffff;
        uVar10 = uVar10 - 0x10000;
      }
      iVar2 = (int)param_2[1];
      uVar4 = *(undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)uVar10 * 0x18);
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 + 1;
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
    } while (uVar11 != uVar15);
  }
  *(undefined1 *)(lVar14 + 0x48) = 1;
  DAT_1469e8f34 = 1;
  return;
}



// FUNCTION 14173f400 FUN_14173f400 body=120 status=ok
// SIG undefined FUN_14173f400(void)

void FUN_14173f400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (lVar1 = FUN_1417a53c0(param_2), lVar1 == param_1 + -0x200)) {
    iVar3 = FUN_1417a5490(param_2);
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + -0x1e0))) {
      lVar1 = *(longlong *)(param_1 + -0x1e8);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x90))();
      *(undefined8 *)((longlong)iVar3 * 0x88 + 0x40 + lVar1) = uVar2;
    }
  }
  return;
}



// FUNCTION 14173f480 FUN_14173f480 body=120 status=ok
// SIG undefined FUN_14173f480(void)

void FUN_14173f480(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (lVar1 = FUN_1417a53c0(param_2), lVar1 == param_1 + -0x200)) {
    iVar3 = FUN_1417a5490(param_2);
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + -0x1e0))) {
      lVar1 = *(longlong *)(param_1 + -0x1e8);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x90))();
      *(undefined8 *)((longlong)iVar3 * 0x88 + 0x38 + lVar1) = uVar2;
    }
  }
  return;
}



// FUNCTION 14173f500 MarkWeakObjectReferenceForClearing body=74 status=ok
// SIG undefined MarkWeakObjectReferenceForClearing(void)

undefined8 FGCCollector<1>::MarkWeakObjectReferenceForClearing(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar2 + 0x18);
  *(int *)(lVar2 + 0x18) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x1c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x10,iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 14173f550 FUN_14173f550 body=156 status=ok
// SIG undefined FUN_14173f550(void)

undefined8 FUN_14173f550(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x48);
  lVar5 = (longlong)iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 8);
    uVar2 = *puVar3;
    uVar4 = uVar2;
    if (0 < lVar5) {
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 2;
        if ((longlong)uVar2 <= (longlong)uVar4) {
          uVar2 = uVar4;
        }
        lVar5 = lVar5 + -1;
        uVar4 = uVar2;
      } while (lVar5 != 0);
    }
  }
  lVar5 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  if (uVar2 == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = (ulonglong)(0x3f - (int)lVar5);
  }
  uVar2 = uVar2 - 1;
  lVar5 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  if (uVar2 == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = (ulonglong)(0x3f - (int)lVar5);
  }
  (**(code **)(*param_2 + 0x58))
            (param_2,param_4,0x40 - uVar2 & ~((longlong)(uVar4 << 0x39) >> 0x3f));
  return 1;
}



// FUNCTION 14173f5f0 FUN_14173f5f0 body=2245 status=ok
// SIG undefined FUN_14173f5f0(void)

void FUN_14173f5f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res18 [16];
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [2];
  code *local_1d8;
  undefined1 *puStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined1 *puStack_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  longlong local_178 [2];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [40];
  
  puStack_1d0 = local_res18;
  local_res18[0] = 0;
  local_1d8 = FUN_1406ddef0;
  local_1c8 = 0x406ddef0;
  uStack_1c4 = 1;
  puStack_1c0 = puStack_1d0;
  lVar6 = FUN_1415d8310(&local_1c8,&DAT_14622e6dc);
  if ((*(longlong *)(lVar6 + 0x68) != 0) && (*(longlong *)(lVar6 + 0x88) != 0)) {
    FUN_14161fb50(local_40,param_2);
    uVar7 = FText::FText(local_e8);
    FMessageLog::Info(local_40,&local_258,uVar7);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Failed to load",L"Linker",L"FailedLoad_Message");
    puVar8 = (undefined8 *)FUN_140973510(local_1a8,uVar7);
    local_248 = *puVar8;
    local_240 = (longlong *)puVar8[1];
    if (local_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_240 + 1) = (int)local_240[1] + 1;
      UNLOCK();
    }
    FUN_141621960(local_258,local_1b8,&local_248);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)local_1b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    plVar1 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_240 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    uVar7 = FText::FText(local_b8);
    uVar9 = FLinker::GetImportPathName
                      (*(undefined8 *)(lVar6 + 0x88),local_178,*(undefined4 *)(lVar6 + 0x80));
    puVar8 = (undefined8 *)FUN_141623f70(local_188,uVar9,uVar7);
    local_238 = *puVar8;
    local_230 = (longlong *)puVar8[1];
    if (local_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_230 + 1) = (int)local_230[1] + 1;
      UNLOCK();
    }
    FUN_141621960(local_258,local_198,&local_238);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    plVar1 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Referenced by",L"Linker",L"FailedLoad_Referenced");
    puVar8 = (undefined8 *)FUN_140973510(local_158,uVar7);
    local_228 = *puVar8;
    local_220 = (longlong *)puVar8[1];
    if (local_220 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_220 + 1) = (int)local_220[1] + 1;
      UNLOCK();
    }
    FUN_141621960(local_258,local_168,&local_228);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    plVar1 = local_220;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_220 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    uVar7 = FText::FText(local_88);
    puVar8 = (undefined8 *)FUN_1416ed870(local_138,*(undefined8 *)(lVar6 + 0x68),uVar7);
    local_218 = *puVar8;
    local_210 = (longlong *)puVar8[1];
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
    }
    FUN_141621960(local_258,local_148,&local_218);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_140)();
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    plVar1 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_210 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_210)();
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_130)();
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)();
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x78);
    }
    if (lVar6 != 0) {
      UObjectBaseUtility::GetPathName(lVar6,local_1e8,0);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"Property",L"Linker",L"FailedLoad_Property");
      puVar8 = (undefined8 *)FUN_140973510(local_118,uVar7);
      local_208 = *puVar8;
      local_200 = (longlong *)puVar8[1];
      if (local_200 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_200 + 1) = (int)local_200[1] + 1;
        UNLOCK();
      }
      FUN_141621960(local_258,local_128,&local_208);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      plVar1 = local_200;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_200 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      uVar7 = FText::FromString(local_58,local_1e8);
      puVar8 = (undefined8 *)FUN_141623f70(local_f8,local_1e8,uVar7);
      local_1f8 = *puVar8;
      local_1f0 = (longlong *)puVar8[1];
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
        UNLOCK();
      }
      FUN_141621960(local_258,local_108,&local_1f8);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)local_100 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      plVar1 = local_1f0;
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1f0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_1e8[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_250 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar2 = (int *)((longlong)local_250 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_40);
  }
  return;
}



// FUNCTION 14173fec0 ParseEnum body=140 status=ok
// SIG undefined ParseEnum(void)

longlong UEnum::ParseEnum(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_res8 = *param_1;
  lVar2 = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  cVar1 = FParse::AlnumToken(&local_res8,&local_18);
  if (cVar1 != '\0') {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    FName::FName(&local_res10,puVar3,0);
    lVar2 = LookupEnumName(local_res10,0);
    if (lVar2 != -1) {
      *param_1 = local_res8;
    }
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 14173ff50 FUN_14173ff50 body=582 status=ok
// SIG undefined FUN_14173ff50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14173ff50(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  plVar5 = (longlong *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(DAT_1469e76c0);
  uVar7 = 0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x20);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
    }
  }
  lVar6 = DAT_1469e6880;
  LOCK();
  DAT_1469e72ac = 0;
  UNLOCK();
  if ((DAT_1469e6880 != 0) && (*(int *)(DAT_1469e6880 + 0xc) <= DAT_1469e91a4)) {
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(longlong *)(*plVar5 + (longlong)iVar1 * 8) = lVar6;
  }
  QueryPerformanceCounter(&local_res8);
  FUN_14173e650(param_1,plVar5,param_2,param_3);
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*param_1 + 8))(param_1,plVar5,param_3);
  bVar3 = false;
  DAT_1464b5814 = DAT_1464b5814 + 1;
  lVar6 = (longlong)(DAT_1464b5808 + -1);
  if (-1 < DAT_1464b5808 + -1) {
    lVar8 = lVar6 << 4;
    bVar3 = false;
    do {
      if ((*(int *)(lVar8 + 8 + DAT_1464b5800) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + DAT_1464b5800), plVar2 == (longlong *)0x0)) {
LAB_14174008b:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2,param_3);
        if (cVar4 == '\0') goto LAB_14174008b;
      }
      lVar8 = lVar8 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar1 = DAT_1464b5808;
  DAT_1464b5814 = DAT_1464b5814 + -1;
  if ((bVar3) && (DAT_1464b5814 < 1)) {
    uVar9 = uVar7;
    if (0 < DAT_1464b5808) {
      do {
        if (((*(int *)(uVar9 + 8 + DAT_1464b5800) == 0) ||
            (*(longlong **)(uVar9 + DAT_1464b5800) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(uVar9 + DAT_1464b5800) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b5800,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar9 = uVar9 + 0x10;
        }
      } while ((int)uVar7 < DAT_1464b5808);
    }
    _DAT_1464b5810 = DAT_1464b5808 * 2;
    if (_DAT_1464b5810 < 3) {
      _DAT_1464b5810 = 2;
    }
    if ((_DAT_1464b5810 < iVar1) && (DAT_1464b580c != DAT_1464b5808)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b5800);
    }
  }
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  lVar6 = DAT_1469e76c0;
  *(undefined4 *)(plVar5 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)plVar5 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
  }
  FUN_1415b1b00(lVar6,plVar5);
  return;
}



// FUNCTION 1417401a0 PerformReachabilityAnalysisOnObjects body=459 status=ok
// SIG undefined PerformReachabilityAnalysisOnObjects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FRealtimeGC::PerformReachabilityAnalysisOnObjects
               (undefined8 param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  undefined1 local_2f7 [7];
  longlong local_2f0 [2];
  undefined1 *local_2e0;
  longlong local_2d8;
  undefined1 **local_2d0;
  longlong local_2c8;
  undefined8 local_240;
  _RTL_CRITICAL_SECTION local_1b8;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  longlong local_170;
  undefined1 **local_168;
  longlong local_160;
  undefined8 local_d8;
  _RTL_CRITICAL_SECTION local_50;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  if (param_3 == '\0') {
    if (DAT_1469e76c0 == 0) {
      DAT_1469e76c0 = FUN_1417380b0();
    }
    local_2e0 = &local_2f8;
    local_2d0 = &local_2e0;
    local_240 = 0;
    local_2d8 = DAT_1469e76c0;
    local_2c8 = DAT_1469e76c0;
    InitializeCriticalSection(&local_1b8);
    SetCriticalSectionSpinCount(&local_1b8,4000);
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_17c = 0;
    FUN_14172d6c0(&local_2e0,param_2);
    if (local_190 != 0) {
      FMemory::Free();
    }
    lpCriticalSection = &local_1b8;
  }
  else {
    if (DAT_1469e76c0 == 0) {
      DAT_1469e76c0 = FUN_1417380b0();
    }
    local_178 = local_2f7;
    local_168 = &local_178;
    local_d8 = 0;
    local_170 = DAT_1469e76c0;
    local_160 = DAT_1469e76c0;
    InitializeCriticalSection(&local_50);
    SetCriticalSectionSpinCount(&local_50,4000);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    if (*(int *)(param_2 + 8) != 0) {
      local_2f0[0] = 0;
      FUN_1417436e0(&local_178,param_2,local_2f0);
      if (local_2f0[0] != 0) {
        LOCK();
        piVar1 = (int *)(local_2f0[0] + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_2f0[0]);
        }
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    lpCriticalSection = &local_50;
  }
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141740370 Pop body=281 status=ok
// SIG undefined Pop(void)

undefined8 TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  LOCK();
  uVar3 = *(ulonglong *)(param_1 + 8);
  if (uVar3 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar3 = 0;
  }
  UNLOCK();
  uVar6 = (uint)uVar3;
  do {
    uVar2 = uVar6 & 0x3ffffff;
    if ((uVar3 & 0x3ffffff) == 0) {
LAB_141740436:
      if (uVar2 != 0) {
        uVar1 = *(undefined8 *)
                 ((&DAT_1468a81f8)[uVar2 >> 0xe] + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
        return uVar1;
      }
      return 0;
    }
    uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
    }
    LOCK();
    bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
    if (bVar7) {
      *(ulonglong *)(param_1 + 8) = *(uint *)(lVar4 + 0x10) | uVar5;
    }
    UNLOCK();
    if (bVar7) {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      goto LAB_141740436;
    }
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 8);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar6 = (uint)uVar3;
  } while( true );
}



// FUNCTION 141740490 PopAll body=465 status=ok
// SIG undefined PopAll(void)

void FLockFreePointerFIFOBase<FUObjectItem,128,1>::PopAll(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  while( true ) {
    do {
      while( true ) {
        do {
          LOCK();
          uVar6 = *(ulonglong *)(param_1 + 0x80);
          if (uVar6 == 0) {
            *(ulonglong *)(param_1 + 0x80) = 0;
            uVar6 = 0;
          }
          UNLOCK();
          LOCK();
          uVar2 = *(ulonglong *)(param_1 + 0x108);
          if (uVar2 == 0) {
            *(ulonglong *)(param_1 + 0x108) = 0;
            uVar2 = 0;
          }
          UNLOCK();
          uVar8 = (uint)uVar6 & 0x3ffffff;
          puVar4 = (ulonglong *)0x0;
          if ((uVar6 & 0x3ffffff) != 0) {
            puVar4 = (ulonglong *)
                     ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)((uint)uVar6 & 0x3fff) * 0x18);
          }
          LOCK();
          uVar7 = *puVar4;
          if (uVar7 == 0) {
            *puVar4 = 0;
            uVar7 = 0;
          }
          UNLOCK();
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 0x80);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 0x80) = 0;
            uVar3 = 0;
          }
          UNLOCK();
        } while (uVar6 != uVar3);
        uVar5 = (uint)uVar7;
        if (uVar8 != ((uint)uVar2 & 0x3ffffff)) break;
        if ((uVar7 & 0x3ffffff) == 0) {
          return;
        }
        uVar6 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
        if (uVar6 < (uVar2 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        LOCK();
        if (uVar2 == *(ulonglong *)(param_1 + 0x108)) {
          *(ulonglong *)(param_1 + 0x108) = uVar5 & 0x3ffffff | uVar6;
        }
        UNLOCK();
      }
      puVar4 = (ulonglong *)0x0;
      if ((uVar7 & 0x3ffffff) != 0) {
        puVar4 = (ulonglong *)
                 ((&DAT_1468a81f8)[(uVar5 & 0x3ffffff) >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18)
        ;
      }
      uVar2 = puVar4[1];
      uVar7 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 < (uVar6 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      LOCK();
      bVar9 = uVar6 == *(ulonglong *)(param_1 + 0x80);
      if (bVar9) {
        *(ulonglong *)(param_1 + 0x80) = uVar5 & 0x3ffffff | uVar7;
      }
      UNLOCK();
    } while (!bVar9);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
    if (uVar2 == 0) break;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 141740670 FUN_141740670 body=243 status=ok
// SIG undefined FUN_141740670(void)

void FUN_141740670(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 8);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  uVar7 = (uint)uVar5;
  while (uVar7 = uVar7 & 0x3ffffff, (uVar5 & 0x3ffffff) != 0) {
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 8);
    if (bVar8) {
      *(ulonglong *)(param_1 + 8) = uVar6;
    }
    UNLOCK();
    if (bVar8) break;
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 8);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    uVar7 = (uint)uVar5;
  }
  while (uVar7 != 0) {
    iVar1 = (int)param_2[1];
    lVar3 = (&DAT_1468a81f8)[uVar7 >> 0xe];
    uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar7 & 0x3fff) * 0x18 + 0x10);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
    uVar7 = uVar2;
  }
  return;
}



// FUNCTION 141740770 FUN_141740770 body=1155 status=ok
// SIG undefined FUN_141740770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141740770(longlong param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  char local_res10 [8];
  char local_res18 [8];
  int local_res20 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int local_d4 [3];
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined1 **local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 **local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  if (((*(byte *)(param_2 + 5) & 2) == 0) && ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) == 0)) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_res10[0] = '\0';
      (**(code **)(*param_2 + 8))(param_2,local_res10);
      if (local_res10[0] != '\0') {
        lVar8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_a0,param_2);
        local_90 = local_a0;
        local_88 = &local_90;
        FUN_141661f40(&local_90,&local_f8);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_a0);
        lVar4 = UObjectBaseUtility::GetOutermost(param_1);
        if ((((*(uint *)(lVar4 + 0x50) >> 5 & 1) == 0) &&
            ((*(uint *)(param_2 + 6) & 0x401000) != 0x1000)) && (DAT_1468c21dc == '\0')) {
          local_c8 = (int)local_f8;
          iStack_c4 = local_f8._4_4_;
          iStack_c0 = (int)uStack_f0;
          iStack_bc = uStack_f0._4_4_;
          BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
          if (BVar2 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
          }
          if (DAT_1464b4e10 != DAT_1464b4e3c) {
            iVar3 = FCrc::MemCrc_DEPRECATED(&local_c8,0x10);
            puVar5 = DAT_1464b4e48;
            if (DAT_1464b4e48 == (undefined *)0x0) {
              puVar5 = &DAT_1464b4e40;
            }
            iVar3 = *(int *)(puVar5 + ((longlong)DAT_1464b4e50 - 1U & (longlong)iVar3) * 4);
            while (iVar3 != -1) {
              piVar10 = (int *)((longlong)iVar3 * 0x20 + DAT_1464b4e08);
              if (((piVar10[1] == iStack_c4 && piVar10[2] == iStack_c0) && piVar10[3] == iStack_bc)
                  && *piVar10 == local_c8) {
                if ((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x20 + DAT_1464b4e08, lVar4 != 0)) {
                  lVar8 = *(longlong *)(lVar4 + 0x10);
                }
                break;
              }
              iVar3 = piVar10[6];
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
          if (lVar8 != param_1) {
            uVar6 = FCommandLine::Get();
            cVar1 = FParse::Param(uVar6,L"AssignNewMapGuids");
            if (cVar1 == '\0') {
              if (lVar8 == 0) {
                local_58 = (int)local_f8;
                uStack_54 = local_f8._4_4_;
                uStack_50 = (int)uStack_f0;
                uStack_4c = uStack_f0._4_4_;
                FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::AddAnnotation
                          (&PTR_PTR_1464b4d70,param_1,&local_58);
                LOCK();
                DAT_1464b4c84 = DAT_1464b4c84 + 1;
                UNLOCK();
                return;
              }
              if ((*(uint *)(lVar8 + 8) >> 0xe & 1) != 0) {
                FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAnnotation
                          (&PTR_PTR_1464b4d70,lVar8);
                local_48 = (int)local_f8;
                uStack_44 = local_f8._4_4_;
                uStack_40 = (int)uStack_f0;
                uStack_3c = uStack_f0._4_4_;
                FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::AddAnnotation
                          (&PTR_PTR_1464b4d70,param_1,&local_48);
                LOCK();
                DAT_1464b4c84 = DAT_1464b4c84 + 1;
                UNLOCK();
                return;
              }
            }
            LOCK();
            DAT_1464b4c84 = DAT_1464b4c84 + 1;
            UNLOCK();
            return;
          }
        }
      }
    }
  }
  else {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
    }
    if (param_1 != DAT_1464b4df0) {
      DAT_1464b4df0 = param_1;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1464b4d78,local_res20,param_1);
      piVar10 = (int *)0x0;
      if (local_res20[0] != -1) {
        piVar10 = (int *)((longlong)local_res20[0] * 0x20 + _DAT_1464b4d78);
      }
      piVar7 = piVar10 + 2;
      if (piVar10 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 == (int *)0x0) {
        local_b8 = 0;
        uStack_b0 = 0;
        _DAT_1464b4df8 = 0;
        iRam00000001464b4dfc = 0;
        _DAT_1464b4e00 = 0;
        iRam00000001464b4e04 = 0;
      }
      else {
        _DAT_1464b4df8 = *piVar7;
        iRam00000001464b4dfc = piVar7[1];
        _DAT_1464b4e00 = piVar7[2];
        iRam00000001464b4e04 = piVar7[3];
      }
    }
    local_e8 = _DAT_1464b4df8;
    iStack_e4 = iRam00000001464b4dfc;
    iStack_e0 = _DAT_1464b4e00;
    iStack_dc = iRam00000001464b4e04;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
    local_res18[0] = ((local_e8 != 0 || iStack_e4 != 0) || iStack_e0 != 0) || iStack_dc != 0;
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if (local_res18[0] != '\0') {
      if ((*(uint *)(param_2 + 6) >> 0x16 & 1) != 0) {
        plVar9 = &DAT_1469e7370 + (longlong)(DAT_1464aaa88 % 10) * 10;
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_d8,&local_e8);
        if ((local_d8 == -1) || (lVar8 = *plVar9 + (longlong)local_d8 * 0x28, lVar8 == 0)) {
          local_a8 = &local_e8;
          FUN_141727be0(plVar9,local_d4,&local_a8,0);
          lVar8 = *plVar9 + (longlong)local_d4[0] * 0x28;
        }
        if (((*(int *)(lVar8 + 0x1c) == 0 && *(int *)(lVar8 + 0x18) == 0) &&
            *(int *)(lVar8 + 0x14) == 0) && *(int *)(lVar8 + 0x10) == 0) {
          piVar10 = (int *)FGuid::NewGuid(local_38);
          local_e8 = *piVar10;
          iStack_e4 = piVar10[1];
          iStack_e0 = piVar10[2];
          iStack_dc = piVar10[3];
          *(int *)(lVar8 + 0x10) = local_e8;
          *(int *)(lVar8 + 0x14) = iStack_e4;
          *(int *)(lVar8 + 0x18) = iStack_e0;
          *(int *)(lVar8 + 0x1c) = iStack_dc;
        }
        else {
          local_e8 = *(int *)(lVar8 + 0x10);
          iStack_e4 = *(int *)(lVar8 + 0x14);
          iStack_e0 = *(int *)(lVar8 + 0x18);
          iStack_dc = *(int *)(lVar8 + 0x1c);
        }
      }
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_80,param_2);
      local_70 = local_80;
      local_68 = &local_70;
      FUN_141661f40(&local_70,&local_e8);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_80);
    }
  }
  return;
}



// FUNCTION 141740c00 FUN_141740c00 body=1981 status=ok
// SIG undefined FUN_141740c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141740c00(longlong param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  code *pcVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_128 [32];
  code *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  code *local_d8;
  code **ppcStack_d0;
  uint local_c8;
  code *local_b8;
  code **ppcStack_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [64];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(uint *)(param_2 + 1) >> 10 & 1) != 0) {
    lVar7 = FUN_1417a53c0(param_2);
    if (lVar7 == param_1 + -0x200) {
      lVar7 = UObjectBaseUtility::GetOutermost();
      bVar11 = ~(byte)(*(uint *)(lVar7 + 0x50) >> 4) & 1;
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (bVar11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      lVar7 = FUN_14171c950();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (bVar11 != 0)) {
        local_e8._1_1_ = '\x01';
      }
      else {
        local_e8._1_1_ = '\0';
      }
      if (((bVar2) || (local_e8._1_1_ != '\0')) && (cVar4 = FUN_14170fb20(), cVar4 != '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      cVar4 = FDeferredObjInitializationHelper::DeferObjectPreload(param_2);
      if (cVar4 == '\0') {
        lVar7 = FUN_14171cb10();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
            != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar18 = (longlong *)0x0;
        if (bVar3) {
          lVar7 = FUN_14171bfe0();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar18 = param_2;
          if (!bVar3) {
            plVar18 = (longlong *)0x0;
          }
          if (param_2[6] != 0) {
            FUN_141740c00(param_1);
          }
        }
        local_c8 = *(uint *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = local_c8;
        if (bVar2) {
          *(uint *)(param_1 + 0x90) = local_c8 | 0x100000;
        }
        if ((*(uint *)(param_2 + 1) >> 10 & 1) != 0) {
          iVar5 = FUN_1417a5490(param_2);
          lVar7 = (longlong)iVar5 * 0x88 + *(longlong *)(param_1 + -0x1e8);
          local_a8 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x90))();
          (**(code **)(**(longlong **)(param_1 + 0x118) + 0xa8))
                    (*(longlong **)(param_1 + 0x118),*(undefined8 *)(lVar7 + 0x30));
          if ((*(char *)(param_1 + 0xa2) == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) {
            (**(code **)(**(longlong **)(param_1 + 0x118) + 200))
                      (*(longlong **)(param_1 + 0x118),*(undefined8 *)(lVar7 + 0x30),
                       *(undefined8 *)(lVar7 + 0x28));
          }
          else {
            DAT_1469e689d = *(undefined1 *)(param_1 + 0x564);
            local_f8 = *(undefined4 *)(param_1 + 0x570);
            local_100 = *(undefined8 *)(param_1 + 0x578);
            local_108 = (code *)CONCAT71(local_108._1_7_,*(undefined1 *)(param_1 + 0x568));
            FUN_141702030(*(longlong *)(param_1 + 0x118),*(undefined8 *)(lVar7 + 0x30),
                          *(undefined8 *)(lVar7 + 0x28),*(undefined1 *)(param_1 + 0x567));
          }
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffbff;
          FUN_14174d490(local_a0,param_2);
          if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
            ppcStack_d0 = (code **)&local_e8;
            local_e8._0_1_ = 0;
            local_b8 = FUN_1406ddef0;
            local_d8 = FUN_1406ddef0;
            ppcStack_b0 = ppcStack_d0;
            lVar8 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
            uVar12 = *(undefined8 *)(lVar8 + 0x68);
            *(longlong **)(lVar8 + 0x68) = param_2;
            (**(code **)(*param_2 + 0xa8))(param_2,param_1);
          }
          else {
            if ((*(uint *)(param_1 + 0x90) & 0x100000) != 0) {
              *(int *)(param_1 + 0x58c) = iVar5;
              *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x400;
              FUN_14174da50(local_a0);
              *(uint *)(param_1 + 0x90) = local_c8;
              return;
            }
            ppcStack_d0 = (code **)&local_e8;
            local_e8._0_1_ = 0;
            local_b8 = FUN_1406ddef0;
            local_d8 = FUN_1406ddef0;
            ppcStack_b0 = ppcStack_d0;
            lVar8 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
            uVar12 = *(undefined8 *)(lVar8 + 0x68);
            *(longlong **)(lVar8 + 0x68) = param_2;
            (**(code **)(*(longlong *)param_2[2] + 0x328))((longlong *)param_2[2],param_2,param_1);
          }
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x200000;
          *(undefined8 *)(lVar8 + 0x68) = uVar12;
          if ((*(uint *)(param_2 + 1) >> 0x1d & 1) != 0) {
            uVar14 = 0;
            local_b8 = (code *)local_98;
            ppcStack_d0 = &local_b8;
            local_58 = (longlong *)0x0;
            local_50 = 0;
            local_d8 = FUN_14172d0a0;
            local_108 = (code *)((ulonglong)local_108 & 0xffffffff00000000);
            FUN_1417a4830(param_2,&local_d8,0,0);
            plVar13 = (longlong *)local_98;
            if (local_58 != (longlong *)0x0) {
              plVar13 = local_58;
            }
            uVar17 = (longlong)(int)local_50 & 0x1fffffffffffffff;
            if (plVar13 + (int)local_50 < plVar13) {
              uVar17 = uVar14;
            }
            if (uVar17 != 0) {
              do {
                *(uint *)(*plVar13 + 8) = *(uint *)(*plVar13 + 8) & 0xffffcfff;
                FUN_141740c00(param_1);
                uVar14 = uVar14 + 1;
                plVar13 = plVar13 + 1;
              } while (uVar14 != uVar17);
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          lVar8 = param_1 + -0x200;
          FUN_14174da50(local_a0);
          if (((local_c8 ^ *(uint *)(param_1 + 0x90)) >> 0x14 & 1) != 0) {
            if (local_e8._1_1_ == '\0') {
              if (*(int *)(param_1 + 0x58c) == -1) {
                uVar6 = FLinkerLoad::FindCDOExportIndex(lVar8,param_2);
                *(undefined4 *)(param_1 + 0x58c) = uVar6;
              }
              FUN_141709ce0(lVar8,param_2);
              FUN_1416f46f0(lVar8,param_2);
            }
            else {
              FUN_141709ce0(lVar8,param_2);
            }
          }
          if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
            FDeferredObjInitializationHelper::ResolveDeferredInitsFromArchetype(param_2);
          }
          lVar9 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x90))();
          uVar14 = lVar9 - *(longlong *)(lVar7 + 0x30);
          if ((uVar14 != *(ulonglong *)(lVar7 + 0x28)) &&
             ((*(uint *)(param_2[2] + 0xb4) >> 0x19 & 1) == 0)) {
            puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,&local_d8,0);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar10;
            }
            local_108 = *(code **)(lVar7 + 0x28);
            FString::PrintfImpl(&local_b8,L"%s: Serial size mismatch: Got %d, Expected %d",puVar15,
                                uVar14 & 0xffffffff);
            pcVar16 = (code *)&DAT_143f3eda8;
            if ((int)ppcStack_b0 != 0) {
              pcVar16 = local_b8;
            }
            LowLevelFatalErrorHandler("Unknown",0xe41,&DAT_144d0d658,pcVar16);
            if (local_b8 != (code *)0x0) {
              FMemory::Free();
            }
            if (local_d8 != (code *)0x0) {
              FMemory::Free();
            }
            puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,&local_d8,0);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar10;
            }
            local_108 = *(code **)(lVar7 + 0x28);
            FString::PrintfImpl(&local_b8,L"%s: Serial size mismatch: Got %d, Expected %d",puVar15,
                                uVar14 & 0xffffffff);
            local_108 = (code *)&DAT_143f3eda8;
            if ((int)ppcStack_b0 != 0) {
              local_108 = local_b8;
            }
            FDebug::AssertFailed
                      ((longlong)
                       L"Guid referenced by %s is already used by %s, which should never happen in the editor but could happen at runtime with duplicate level loading or PIE"
                       + 299,"Unknown",0xe41,&DAT_144d0d6c8);
            if (local_b8 != (code *)0x0) {
              FMemory::Free();
            }
            if (local_d8 != (code *)0x0) {
              FMemory::Free();
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x118) + 0xa8))
                    (*(longlong **)(param_1 + 0x118),local_a8);
          if (((plVar18 != (longlong *)0x0) && (plVar18[0x1f] != 0)) && ((int)plVar18[8] != 0)) {
            FUN_141740c00(param_1);
          }
          uVar1 = *(uint *)(param_2 + 1);
          if (((uVar1 >> 4 & 1) != 0) && ((*(uint *)(param_2[2] + 0xb4) >> 0x12 & 1) != 0)) {
            *(uint *)(param_2 + 1) = uVar1 | 0x81000;
            if ((uVar1 & 0x20000000) != 0) {
              ppcStack_d0 = (code **)&local_a8;
              *(uint *)(param_2 + 1) = uVar1 | 0x83000;
              local_d8 = (code *)&LAB_14172d110;
              local_108 = (code *)((ulonglong)local_108 & 0xffffffff00000000);
              local_a8 = lVar8;
              FUN_1417a4830(param_2,&local_d8,1,0);
            }
            ppcStack_d0 = (code **)&local_e8;
            local_e8._0_1_ = 0;
            local_d8 = FUN_1406ddef0;
            lVar7 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
            iVar5 = *(int *)(lVar7 + 0x40);
            *(int *)(lVar7 + 0x40) = iVar5 + 1;
            if (*(int *)(lVar7 + 0x44) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x38,iVar5);
            }
            *(longlong **)(*(longlong *)(lVar7 + 0x38) + (longlong)iVar5 * 8) = param_2;
          }
        }
        *(uint *)(param_1 + 0x90) = local_c8;
      }
    }
    else {
      lVar7 = FUN_1417a53c0(param_2);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x290);
        *(uint *)(lVar7 + 0x290) = *(uint *)(param_1 + 0x90) & 0x100000 | uVar1;
        FUN_141740c00(lVar7 + 0x200,param_2);
        *(uint *)(lVar7 + 0x290) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 1417413c0 PrependStream body=299 status=ok
// SIG undefined PrependStream(void)

void FGCReferenceTokenStream::PrependStream(void **param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  void *local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_10;
  pvVar4 = (void *)0x0;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    pvVar4 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 << 2);
  }
  iVar3 = local_10 + -1;
  if (*(int *)((longlong)pvVar4 + (longlong)iVar3 * 4) == 0xb00) {
    iVar1 = (local_10 - iVar3) + -1;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)pvVar4 + (longlong)iVar3 * 4),
                 (void *)((longlong)pvVar4 + (longlong)local_10 * 4),(longlong)iVar1 << 2);
    }
    local_10 = iVar3;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_18);
    pvVar4 = local_18;
  }
  iVar3 = *(int *)(param_1 + 1);
  iVar1 = local_10;
  if (iVar3 != 0) {
    if (local_c < local_10 + iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_18);
      pvVar4 = local_18;
    }
    iVar1 = local_10;
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar4 + (longlong)local_10 * 4),*param_1,(longlong)iVar3 << 2);
    iVar1 = iVar1 + iVar3;
  }
  if (param_1 == &local_18) {
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  else {
    if (*param_1 != (void *)0x0) {
      FMemory::Free();
    }
    *param_1 = pvVar4;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = local_c;
  }
  return;
}



// FUNCTION 1417414f0 FUN_1417414f0 body=8625 status=ok
// SIG undefined FUN_1417414f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1417414f0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong *puVar21;
  longlong lVar22;
  code *pcVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint *puVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_208 [32];
  uint local_1e8;
  undefined2 *local_1e0;
  undefined2 *local_1d8;
  undefined2 *local_1d0;
  char local_1c8;
  uint local_1c4;
  longlong local_1c0;
  uint local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  int local_190;
  longlong *local_188;
  uint local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined2 *local_150;
  undefined8 local_148;
  undefined2 *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined **local_f8;
  longlong local_f0;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  undefined4 *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  uVar10 = DAT_1464b4c74;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  iVar24 = 0;
  local_180 = DAT_1464b4c74;
  local_1c4 = 0;
  local_170 = param_3;
  local_128 = param_1;
  local_100 = param_2;
  local_1b0 = (longlong *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(param_1[1]);
  if (local_1b0 == (longlong *)0x0) {
    local_1b0 = (longlong *)operator_new(0x20);
    if (local_1b0 == (longlong *)0x0) {
      local_1b0 = (longlong *)0x0;
    }
    else {
      *local_1b0 = 0;
      local_1b0[1] = 0;
      local_1b0[2] = 0;
      local_1b0[3] = 0;
    }
  }
  plVar26 = local_1b0;
  local_110 = (longlong *)0x0;
  local_108 = 0x80;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_110,0);
  if (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  local_190 = 0;
  local_118 = 0;
  do {
    uVar4 = *param_1;
    FReferenceCollector::FReferenceCollector(&local_f8);
    local_f8 = &PTR__scalar_deleting_destructor__144d10ec8;
    local_d0 = 1;
    local_e0 = uVar4;
    local_d8 = plVar26;
    if (iVar24 < (int)param_2[1]) {
      local_c8 = local_110 + 1;
      local_c0 = (undefined4 *)((longlong)local_110 + 0xc);
      local_b8 = local_110 + 2;
      local_190 = iVar24;
LAB_14174160e:
      plVar14 = local_110;
      local_190 = local_190 + 1;
      local_188 = local_110;
      lVar22 = *(longlong *)(*param_2 + local_118 * 8);
      local_118 = local_118 + 1;
      iVar24 = *(int *)(*(longlong *)(lVar22 + 0x10) + 0x40);
      local_178 = lVar22;
      iVar9 = FUN_14169da80();
      uVar13 = (longlong)(iVar9 + -1 + iVar24) / (longlong)iVar9;
      uVar27 = uVar13 & 0xffffffff;
      uVar10 = (uint)uVar13;
      while (uVar10 != 0) {
        uVar10 = (int)uVar27 - 1;
        uVar27 = (ulonglong)uVar10;
      }
      local_1a0 = (longlong *)(*(longlong *)(lVar22 + 0x10) + 0x1b0);
      local_1a8 = 0;
      *plVar14 = lVar22;
      *(undefined4 *)local_c8 = 0;
      *local_c0 = 0xffffffff;
      *(undefined4 *)local_b8 = 0xffffffff;
      plVar17 = local_1a0;
      uVar12 = 0;
      local_1c0 = lVar22;
      lVar15 = lVar22;
LAB_1417416e0:
      uVar10 = local_180;
      plVar16 = local_1b0;
      uVar13 = 0;
      iVar24 = (int)local_1a8;
      uVar27 = uVar13;
      if (0 < (int)uVar12) {
        do {
          *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + -1;
          if (0 < *(int *)((longlong)plVar14 + 0xc)) {
            lVar22 = (longlong)(int)plVar14[1] + *plVar14;
            iVar24 = (int)plVar14[2];
            *plVar14 = lVar22;
            local_1c0 = lVar22;
            break;
          }
          lVar22 = plVar14[-3];
          plVar14 = plVar14 + -3;
          uVar11 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar11;
          local_1c0 = lVar22;
          local_188 = plVar14;
        } while ((int)uVar11 < (int)uVar12);
      }
      lVar5 = *plVar17;
      uVar25 = iVar24 + 1;
      local_1a8 = (ulonglong)uVar25;
      uVar11 = *(uint *)(lVar5 + (longlong)iVar24 * 4);
      uVar19 = uVar11 >> 8 & 0xf;
      switch(uVar19) {
      case 1:
        local_1b8 = uVar11 & 0xff;
        puVar21 = (ulonglong *)((ulonglong)(uVar11 >> 0xc) + lVar22);
        uVar27 = *puVar21;
        if ((uVar27 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar27)) {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        uVar12 = local_1b8;
        if ((uVar27 != 0) && (!bVar29)) {
          uVar10 = *(uint *)(uVar27 + 0xc);
          uVar19 = uVar10 & 0xffff;
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 0xffff;
            uVar19 = uVar19 - 0x10000;
          }
          lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
          lVar5 = lVar22 + (longlong)(int)uVar19 * 0x18;
          uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)uVar19 * 0x18);
          if ((uVar10 >> 0x1d & 1) == 0) {
            if ((uVar10 >> 0x1c & 1) == 0) {
              lVar22 = local_1c0;
              if ((0 < *(int *)(lVar5 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
                while ((uVar10 >> 0x17 & 1) == 0) {
                  LOCK();
                  bVar29 = uVar10 == *(uint *)(lVar5 + 8);
                  if (bVar29) {
                    *(uint *)(lVar5 + 8) = uVar10 | 0x800000;
                  }
                  UNLOCK();
                  if (bVar29) {
                    uVar10 = *(uint *)(lVar5 + 0xc);
                    uVar11 = uVar10 & 0xffff;
                    if ((int)uVar10 < 0) {
                      uVar10 = uVar10 + 0xffff;
                      uVar11 = uVar11 - 0x10000;
                    }
                    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                    uVar10 = *(uint *)(lVar5 + 8 + (longlong)(int)uVar11 * 0x18);
                    lVar5 = lVar5 + (longlong)(int)uVar11 * 0x18;
                    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_141741cb0;
                    break;
                  }
                  uVar10 = *(uint *)(lVar5 + 8);
                }
              }
              goto LAB_1417416e0;
            }
joined_r0x0001417418a9:
            lVar22 = local_1c0;
            if ((uVar10 >> 0x1c & 1) == 0) goto LAB_1417416e0;
            LOCK();
            bVar29 = uVar10 == *(uint *)(lVar5 + 8);
            if (bVar29) {
              *(uint *)(lVar5 + 8) = uVar10 & 0xefffffff;
            }
            UNLOCK();
            if (!bVar29) goto code_r0x0001417418c0;
            if ((*(byte *)(lVar5 + 0xb) & 1) == 0) goto LAB_1417418d6;
            local_1c8 = '\0';
            local_168 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
            puVar28 = *(uint **)(local_168 + 0x18);
            puVar20 = puVar28 + *(int *)(local_168 + 0x20);
            for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
              uVar10 = *puVar28;
              if (-1 < (int)uVar10) {
                lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
                uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                if ((uVar10 >> 0x1d & 1) == 0) {
                  if ((uVar10 >> 0x1c & 1) != 0) {
                    while ((uVar10 >> 0x1c & 1) != 0) {
                      puVar1 = (uint *)(lVar22 + 8);
                      LOCK();
                      bVar29 = uVar10 == *puVar1;
                      if (bVar29) {
                        *puVar1 = uVar10 & 0xefffffff;
                      }
                      UNLOCK();
                      if (bVar29) break;
                      uVar10 = *(uint *)(lVar22 + 8);
                    }
                  }
                }
                else {
                  *puVar28 = 0xffffffff;
                  local_1c8 = '\x01';
                }
              }
            }
            puVar28 = *(uint **)(local_168 + 0x28);
            bVar29 = false;
            puVar20 = puVar28 + *(int *)(local_168 + 0x30);
            if (puVar28 == puVar20) {
LAB_141741b60:
              lVar22 = local_1c0;
              plVar17 = local_1a0;
              plVar14 = local_188;
              uVar12 = local_1b8;
              lVar15 = local_178;
              plVar26 = local_1b0;
              if (local_1c8 == '\0') goto LAB_1417416e0;
            }
            else {
              do {
                uVar10 = *puVar28;
                if (-1 < (int)uVar10) {
                  lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                  puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                  uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                  if ((uVar10 >> 0x1d & 1) == 0) {
                    if ((uVar10 >> 0x1c & 1) == 0) {
                      if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
                        while ((uVar10 >> 0x17 & 1) == 0) {
                          LOCK();
                          bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                          if (bVar30) {
                            *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                          }
                          UNLOCK();
                          if (bVar30) {
                            uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                            uVar12 = uVar10 & 0xffff;
                            if ((int)uVar10 < 0) {
                              uVar10 = uVar10 + 0xffff;
                              uVar12 = uVar12 - 0x10000;
                            }
                            lVar15 = *(longlong *)
                                      (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                            lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                            uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                            if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x000141741b0c;
                            break;
                          }
                          uVar10 = *(uint *)(puVar3 + 1);
                        }
                      }
                    }
                    else {
                      while ((uVar10 >> 0x1c & 1) != 0) {
                        LOCK();
                        bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                        if (bVar30) {
                          *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
                        }
                        UNLOCK();
                        if (bVar30) {
                          iVar24 = (int)plVar16[1];
                          uVar4 = *puVar3;
                          *(int *)(plVar16 + 1) = iVar24 + 1;
                          if (*(int *)((longlong)plVar16 + 0xc) < iVar24 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (plVar16,iVar24);
                          }
                          *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar4;
                          if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                            FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                                      (~*(uint *)((longlong)puVar3 + 0xc),plVar16);
                          }
                          break;
                        }
                        uVar10 = *(uint *)(puVar3 + 1);
                      }
                    }
                  }
                  else {
                    *puVar28 = 0xffffffff;
                    bVar29 = true;
                  }
                }
LAB_141741b46:
                puVar28 = puVar28 + 1;
              } while (puVar28 != puVar20);
              if (!bVar29) goto LAB_141741b60;
            }
            lVar22 = local_168;
            plVar26 = local_1b0;
            uVar27 = 0;
            puVar20 = *(uint **)(local_168 + 8);
            uVar13 = (longlong)*(int *)(local_168 + 0x10) & 0x3fffffffffffffff;
            if (puVar20 + *(int *)(local_168 + 0x10) < puVar20) {
              uVar13 = uVar27;
            }
            if (uVar13 != 0) {
              do {
                uVar10 = *puVar20;
                uVar12 = uVar10 & 0xffff;
                if ((int)uVar10 < 0) {
                  uVar10 = uVar10 + 0xffff;
                  uVar12 = uVar12 - 0x10000;
                }
                iVar24 = (int)plVar26[1];
                uVar4 = *(undefined8 *)
                         (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                         (longlong)(int)uVar12 * 0x18);
                *(int *)(plVar26 + 1) = iVar24 + 1;
                if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
                }
                puVar20 = puVar20 + 1;
                uVar27 = uVar27 + 1;
                *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
              } while (uVar27 != uVar13);
            }
            goto LAB_141741fcb;
          }
          *puVar21 = 0;
          lVar22 = local_1c0;
          if (DAT_1469e7298 != 0) {
            uVar10 = *(uint *)(lVar15 + 0xc);
            if ((int)uVar10 < (int)DAT_1469e91c4) {
              uVar19 = uVar10 & 0xffff;
              uVar11 = uVar10;
              if ((int)uVar10 < 0) {
                uVar11 = uVar10 + 0xffff;
                uVar19 = uVar19 - 0x10000;
              }
              uVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                       (longlong)(int)uVar19 * 0x18;
            }
            if ((*(uint *)(uVar13 + 8) >> 0x1d & 1) == 0) {
              uVar11 = uVar10 & 0xffff;
              if ((int)uVar10 < 0) {
                uVar10 = uVar10 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              puVar20 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8)
                                 + 8 + (longlong)(int)uVar11 * 0x18);
              *puVar20 = *puVar20 | 0x80000000;
            }
          }
        }
        goto LAB_1417416e0;
      case 2:
        local_1b8 = uVar11 & 0xff;
        puVar21 = (ulonglong *)((ulonglong)(uVar11 >> 0xc) + lVar22);
        uVar13 = *puVar21;
        if ((uVar13 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar13)) {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        uVar12 = local_1b8;
        if ((uVar13 != 0) && (!bVar29)) {
          uVar10 = *(uint *)(uVar13 + 0xc);
          uVar19 = uVar10 & 0xffff;
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 0xffff;
            uVar19 = uVar19 - 0x10000;
          }
          lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
          lVar5 = lVar22 + (longlong)(int)uVar19 * 0x18;
          uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)uVar19 * 0x18);
          if ((uVar10 >> 0x1c & 1) == 0) {
            lVar22 = local_1c0;
            if ((0 < *(int *)(lVar5 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                LOCK();
                bVar29 = uVar10 == *(uint *)(lVar5 + 8);
                if (bVar29) {
                  *(uint *)(lVar5 + 8) = uVar10 | 0x800000;
                }
                UNLOCK();
                if (bVar29) {
                  uVar10 = *(uint *)(lVar5 + 0xc);
                  uVar11 = uVar10 & 0xffff;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar10 + 0xffff;
                    uVar11 = uVar11 - 0x10000;
                  }
                  lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                  uVar10 = *(uint *)(lVar5 + 8 + (longlong)(int)uVar11 * 0x18);
                  lVar5 = lVar5 + (longlong)(int)uVar11 * 0x18;
                  if ((uVar10 >> 0x1c & 1) != 0) goto LAB_141742d40;
                  break;
                }
                uVar10 = *(uint *)(lVar5 + 8);
              }
            }
            goto LAB_1417416e0;
          }
joined_r0x000141742987:
          lVar22 = local_1c0;
          if ((uVar10 >> 0x1c & 1) == 0) goto LAB_1417416e0;
          LOCK();
          bVar29 = uVar10 == *(uint *)(lVar5 + 8);
          if (bVar29) {
            *(uint *)(lVar5 + 8) = uVar10 & 0xefffffff;
          }
          UNLOCK();
          if (!bVar29) goto code_r0x0001417429a0;
          if ((*(byte *)(lVar5 + 0xb) & 1) == 0) goto LAB_1417418d6;
          local_1c8 = '\0';
          local_160 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
          puVar28 = *(uint **)(local_160 + 0x18);
          puVar20 = puVar28 + *(int *)(local_160 + 0x20);
          for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
            uVar10 = *puVar28;
            if (-1 < (int)uVar10) {
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
              lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
              uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
              if ((uVar10 >> 0x1d & 1) == 0) {
                if ((uVar10 >> 0x1c & 1) != 0) {
                  while ((uVar10 >> 0x1c & 1) != 0) {
                    puVar1 = (uint *)(lVar22 + 8);
                    LOCK();
                    bVar29 = uVar10 == *puVar1;
                    if (bVar29) {
                      *puVar1 = uVar10 & 0xefffffff;
                    }
                    UNLOCK();
                    if (bVar29) break;
                    uVar10 = *(uint *)(lVar22 + 8);
                  }
                }
              }
              else {
                *puVar28 = 0xffffffff;
                local_1c8 = '\x01';
              }
            }
          }
          puVar28 = *(uint **)(local_160 + 0x28);
          bVar29 = false;
          puVar20 = puVar28 + *(int *)(local_160 + 0x30);
          if (puVar28 == puVar20) {
LAB_141742c10:
            lVar22 = local_1c0;
            plVar17 = local_1a0;
            plVar14 = local_188;
            uVar12 = local_1b8;
            lVar15 = local_178;
            plVar26 = local_1b0;
            if (local_1c8 == '\0') goto LAB_1417416e0;
          }
          else {
            do {
              uVar10 = *puVar28;
              if (-1 < (int)uVar10) {
                lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                if ((uVar10 >> 0x1d & 1) == 0) {
                  if ((uVar10 >> 0x1c & 1) == 0) {
                    if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
                      while ((uVar10 >> 0x17 & 1) == 0) {
                        LOCK();
                        bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                        if (bVar30) {
                          *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                        }
                        UNLOCK();
                        if (bVar30) {
                          uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                          uVar12 = uVar10 & 0xffff;
                          if ((int)uVar10 < 0) {
                            uVar10 = uVar10 + 0xffff;
                            uVar12 = uVar12 - 0x10000;
                          }
                          lVar15 = *(longlong *)
                                    (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                          lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                          uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                          if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x000141742bbc;
                          break;
                        }
                        uVar10 = *(uint *)(puVar3 + 1);
                      }
                    }
                  }
                  else {
                    while ((uVar10 >> 0x1c & 1) != 0) {
                      LOCK();
                      bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                      if (bVar30) {
                        *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
                      }
                      UNLOCK();
                      if (bVar30) {
                        iVar24 = (int)plVar16[1];
                        uVar4 = *puVar3;
                        *(int *)(plVar16 + 1) = iVar24 + 1;
                        if (*(int *)((longlong)plVar16 + 0xc) < iVar24 + 1) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                    (plVar16,iVar24);
                        }
                        *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar4;
                        if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                          FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                                    (~*(uint *)((longlong)puVar3 + 0xc),plVar16);
                        }
                        break;
                      }
                      uVar10 = *(uint *)(puVar3 + 1);
                    }
                  }
                }
                else {
                  *puVar28 = 0xffffffff;
                  bVar29 = true;
                }
              }
LAB_141742bf6:
              puVar28 = puVar28 + 1;
            } while (puVar28 != puVar20);
            if (!bVar29) goto LAB_141742c10;
          }
          lVar22 = local_160;
          plVar26 = local_1b0;
          uVar27 = 0;
          puVar20 = *(uint **)(local_160 + 8);
          uVar13 = (longlong)*(int *)(local_160 + 0x10) & 0x3fffffffffffffff;
          if (puVar20 + *(int *)(local_160 + 0x10) < puVar20) {
            uVar13 = uVar27;
          }
          if (uVar13 != 0) {
            do {
              uVar10 = *puVar20;
              uVar12 = uVar10 & 0xffff;
              if ((int)uVar10 < 0) {
                uVar10 = uVar10 + 0xffff;
                uVar12 = uVar12 - 0x10000;
              }
              iVar24 = (int)plVar26[1];
              uVar4 = *(undefined8 *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)uVar12 * 0x18);
              *(int *)(plVar26 + 1) = iVar24 + 1;
              if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
              }
              puVar20 = puVar20 + 1;
              uVar27 = uVar27 + 1;
              *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
            } while (uVar27 != uVar13);
          }
          goto LAB_141741fcb;
        }
        goto LAB_1417416e0;
      case 3:
        local_1b8 = uVar11 & 0xff;
        plVar16 = (longlong *)((ulonglong)(uVar11 >> 0xc) + lVar22);
        local_168 = 0;
        local_160 = (longlong)(int)plVar16[1];
        uVar12 = local_1b8;
        local_198 = plVar16;
        if (0 < local_160) {
          do {
            plVar14 = local_1b0;
            lVar22 = 0;
            puVar3 = (undefined8 *)(*plVar16 + local_168 * 8);
            uVar13 = *(ulonglong *)(*plVar16 + local_168 * 8);
            if ((uVar13 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar13)) {
              bVar29 = false;
            }
            else {
              bVar29 = true;
            }
            if ((uVar13 != 0) && (!bVar29)) {
              uVar10 = *(uint *)(uVar13 + 0xc);
              uVar12 = uVar10 & 0xffff;
              if ((int)uVar10 < 0) {
                uVar10 = uVar10 + 0xffff;
                uVar12 = uVar12 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
              lVar5 = lVar6 + (longlong)(int)uVar12 * 0x18;
              uVar10 = *(uint *)(lVar6 + 8 + (longlong)(int)uVar12 * 0x18);
              plVar16 = local_198;
              if ((uVar10 >> 0x1d & 1) == 0) {
                if ((uVar10 >> 0x1c & 1) == 0) {
                  if ((0 < *(int *)(lVar5 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
                    while ((uVar10 >> 0x17 & 1) == 0) {
                      LOCK();
                      bVar29 = uVar10 == *(uint *)(lVar5 + 8);
                      if (bVar29) {
                        *(uint *)(lVar5 + 8) = uVar10 | 0x800000;
                      }
                      UNLOCK();
                      if (bVar29) {
                        uVar10 = *(uint *)(lVar5 + 0xc);
                        uVar12 = uVar10 & 0xffff;
                        if ((int)uVar10 < 0) {
                          uVar10 = uVar10 + 0xffff;
                          uVar12 = uVar12 - 0x10000;
                        }
                        lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                        uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)uVar12 * 0x18);
                        lVar22 = lVar22 + (longlong)(int)uVar12 * 0x18;
                        if ((uVar10 >> 0x1c & 1) != 0) goto LAB_141742530;
                        break;
                      }
                      uVar10 = *(uint *)(lVar5 + 8);
                    }
                  }
                }
                else if ((uVar10 >> 0x1c & 1) != 0) {
LAB_141742150:
                  LOCK();
                  bVar29 = uVar10 == *(uint *)(lVar5 + 8);
                  if (bVar29) {
                    *(uint *)(lVar5 + 8) = uVar10 & 0xefffffff;
                  }
                  UNLOCK();
                  if (!bVar29) goto code_r0x000141742160;
                  if ((*(byte *)(lVar5 + 0xb) & 1) == 0) {
                    iVar24 = (int)plVar26[1];
                    *(int *)(plVar26 + 1) = iVar24 + 1;
                    if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar26,iVar24);
                    }
                    *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = *puVar3;
                    plVar16 = local_198;
                  }
                  else {
                    local_1c8 = '\0';
                    local_158 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
                    puVar28 = *(uint **)(local_158 + 0x18);
                    puVar20 = puVar28 + *(int *)(local_158 + 0x20);
                    for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
                      uVar10 = *puVar28;
                      if (-1 < (int)uVar10) {
                        lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                        lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
                        uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                        if ((uVar10 >> 0x1d & 1) == 0) {
                          if ((uVar10 >> 0x1c & 1) != 0) {
                            while ((uVar10 >> 0x1c & 1) != 0) {
                              puVar1 = (uint *)(lVar22 + 8);
                              LOCK();
                              bVar29 = uVar10 == *puVar1;
                              if (bVar29) {
                                *puVar1 = uVar10 & 0xefffffff;
                              }
                              UNLOCK();
                              if (bVar29) break;
                              uVar10 = *(uint *)(lVar22 + 8);
                            }
                          }
                        }
                        else {
                          *puVar28 = 0xffffffff;
                          local_1c8 = '\x01';
                        }
                      }
                    }
                    puVar28 = *(uint **)(local_158 + 0x28);
                    bVar29 = false;
                    puVar20 = puVar28 + *(int *)(local_158 + 0x30);
                    if (puVar28 == puVar20) {
LAB_1417423fe:
                      plVar16 = local_198;
                      if (local_1c8 != '\0') goto LAB_141742407;
                    }
                    else {
                      do {
                        uVar10 = *puVar28;
                        if (-1 < (int)uVar10) {
                          lVar22 = *(longlong *)
                                    (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                          puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                          uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
                          if ((uVar10 >> 0x1d & 1) == 0) {
                            if ((uVar10 >> 0x1c & 1) == 0) {
                              if ((0 < *(int *)((longlong)puVar3 + 0xc)) &&
                                 ((uVar10 >> 0x17 & 1) == 0)) {
                                while ((uVar10 >> 0x17 & 1) == 0) {
                                  LOCK();
                                  bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                                  if (bVar30) {
                                    *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                                  }
                                  UNLOCK();
                                  if (bVar30) {
                                    uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                                    uVar12 = uVar10 & 0xffff;
                                    if ((int)uVar10 < 0) {
                                      uVar10 = uVar10 + 0xffff;
                                      uVar12 = uVar12 - 0x10000;
                                    }
                                    lVar15 = *(longlong *)
                                              (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                                    lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                                    uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                                    if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x0001417423ac;
                                    break;
                                  }
                                  uVar10 = *(uint *)(puVar3 + 1);
                                }
                              }
                            }
                            else {
                              while ((uVar10 >> 0x1c & 1) != 0) {
                                LOCK();
                                bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                                if (bVar30) {
                                  *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
                                }
                                UNLOCK();
                                if (bVar30) {
                                  iVar24 = (int)plVar14[1];
                                  uVar4 = *puVar3;
                                  *(int *)(plVar14 + 1) = iVar24 + 1;
                                  if (*(int *)((longlong)plVar14 + 0xc) < iVar24 + 1) {
                                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::
                                    ResizeGrow(plVar14,iVar24);
                                  }
                                  *(undefined8 *)(*plVar14 + (longlong)iVar24 * 8) = uVar4;
                                  if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                                    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                                              (~*(uint *)((longlong)puVar3 + 0xc),plVar14);
                                  }
                                  break;
                                }
                                uVar10 = *(uint *)(puVar3 + 1);
                              }
                            }
                          }
                          else {
                            *puVar28 = 0xffffffff;
                            bVar29 = true;
                          }
                        }
LAB_1417423e6:
                        puVar28 = puVar28 + 1;
                      } while (puVar28 != puVar20);
                      if (!bVar29) goto LAB_1417423fe;
LAB_141742407:
                      plVar26 = local_1b0;
                      uVar27 = 0;
                      puVar20 = *(uint **)(local_158 + 8);
                      uVar13 = (longlong)*(int *)(local_158 + 0x10) & 0x3fffffffffffffff;
                      if (puVar20 + *(int *)(local_158 + 0x10) < puVar20) {
                        uVar13 = uVar27;
                      }
                      if (uVar13 != 0) {
                        do {
                          uVar10 = *puVar20;
                          uVar12 = uVar10 & 0xffff;
                          if ((int)uVar10 < 0) {
                            uVar10 = uVar10 + 0xffff;
                            uVar12 = uVar12 - 0x10000;
                          }
                          iVar24 = (int)plVar26[1];
                          uVar4 = *(undefined8 *)
                                   (*(longlong *)
                                     (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                                   (longlong)(int)uVar12 * 0x18);
                          *(int *)(plVar26 + 1) = iVar24 + 1;
                          if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (plVar26,iVar24);
                          }
                          puVar20 = puVar20 + 1;
                          uVar27 = uVar27 + 1;
                          *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
                        } while (uVar27 != uVar13);
                      }
LAB_141742843:
                      *(undefined1 *)(local_158 + 0x48) = 1;
                      DAT_1469e8f34 = 1;
                      plVar16 = local_198;
                    }
                  }
                }
              }
              else {
                *puVar3 = 0;
                if (DAT_1469e7298 != 0) {
                  uVar10 = *(uint *)(lVar15 + 0xc);
                  if ((int)uVar10 < (int)DAT_1469e91c4) {
                    uVar11 = uVar10 & 0xffff;
                    uVar12 = uVar10;
                    if ((int)uVar10 < 0) {
                      uVar12 = uVar10 + 0xffff;
                      uVar11 = uVar11 - 0x10000;
                    }
                    lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
                             (longlong)(int)uVar11 * 0x18;
                  }
                  if ((*(uint *)(lVar22 + 8) >> 0x1d & 1) == 0) {
                    uVar12 = uVar10 & 0xffff;
                    if ((int)uVar10 < 0) {
                      uVar10 = uVar10 + 0xffff;
                      uVar12 = uVar12 - 0x10000;
                    }
                    puVar20 = (uint *)(*(longlong *)
                                        (DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) + 8 +
                                      (longlong)(int)uVar12 * 0x18);
                    *puVar20 = *puVar20 | 0x80000000;
                  }
                }
              }
            }
LAB_141742854:
            local_168 = local_168 + 1;
            lVar22 = local_1c0;
            plVar17 = local_1a0;
            plVar26 = local_1b0;
            lVar15 = local_178;
            plVar14 = local_188;
            uVar12 = local_1b8;
          } while (local_168 < local_160);
        }
        goto LAB_1417416e0;
      case 4:
        local_188 = plVar14 + 3;
        plVar16 = (longlong *)((ulonglong)(uVar11 >> 0xc) + lVar22);
        lVar22 = *plVar16;
        *local_188 = lVar22;
        *(undefined4 *)(plVar14 + 4) = *(undefined4 *)(*plVar17 + (longlong)(int)uVar25 * 4);
        iVar9 = (int)plVar16[1];
        *(int *)((longlong)plVar14 + 0x24) = iVar9;
        uVar10 = *(int *)(*plVar17 + (longlong)(iVar24 + 2) * 4) + (iVar24 + 2) * 0x100;
        *(int *)(plVar14 + 5) = iVar24 + 3;
        local_1c0 = lVar22;
        if (iVar9 == 0) {
          local_1a8 = (ulonglong)(uVar10 >> 8);
          plVar14 = local_188;
          uVar12 = (uint)*(byte *)(*plVar17 + -4 + local_1a8 * 4) - (uVar10 & 0xff);
          goto LAB_1417416e0;
        }
        break;
      case 5:
        plVar14[3] = lVar22;
        *(undefined4 *)(plVar14 + 4) = *(undefined4 *)(*plVar17 + (longlong)(int)uVar25 * 4);
        *(undefined4 *)((longlong)plVar14 + 0x24) =
             *(undefined4 *)(*plVar17 + (longlong)(iVar24 + 2) * 4);
        *(int *)(plVar14 + 5) = iVar24 + 3;
        break;
      case 6:
        lVar22 = (ulonglong)(uVar11 >> 0xc) + lVar22;
        pcVar23 = (code *)CONCAT44(*(undefined4 *)(lVar5 + (longlong)(iVar24 + 2) * 4),
                                   *(undefined4 *)(lVar5 + (longlong)(int)uVar25 * 4));
        goto LAB_1417430b5;
      case 7:
        pcVar23 = (code *)CONCAT44(*(undefined4 *)(lVar5 + (longlong)(iVar24 + 2) * 4),
                                   *(undefined4 *)(lVar5 + (longlong)(int)uVar25 * 4));
        lVar22 = lVar15;
LAB_1417430b5:
        local_1a8 = (ulonglong)(iVar24 + 3);
        (*pcVar23)(lVar22,&local_f8);
        lVar22 = local_1c0;
        plVar17 = local_1a0;
        uVar12 = uVar11 & 0xff;
        goto LAB_1417416e0;
      case 8:
      case 9:
        local_1a8 = (ulonglong)(iVar24 + 3);
        plVar17 = (longlong *)
                  CONCAT44(*(undefined4 *)(lVar5 + (longlong)(iVar24 + 2) * 4),
                           *(undefined4 *)(lVar5 + (longlong)(int)uVar25 * 4));
        if (local_f0 == 0) {
          FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_f8);
        }
        (**(code **)(*plVar17 + 0x2c0))(plVar17,local_f0,(ulonglong)(uVar11 >> 0xc) + lVar22,0);
        plVar17 = local_1a0;
        goto LAB_1417416d3;
      case 10:
        uVar12 = uVar11 & 0xff;
        goto LAB_1417416e0;
      case 0xb:
        goto switchD_141741769_caseD_b;
      default:
        goto switchD_141741769_default;
      }
      local_1a8 = (ulonglong)(iVar24 + 3);
      local_188 = plVar14 + 3;
      plVar14 = local_188;
      uVar12 = 0;
      goto LAB_1417416e0;
    }
    iVar24 = (int)plVar26[1];
LAB_141743495:
    if (iVar24 < (int)uVar10) {
      if (iVar24 != 0) {
        if (param_2 != plVar26) {
          local_50 = *param_2;
          lStack_48 = param_2[1];
          uVar7 = *(undefined4 *)((longlong)plVar26 + 4);
          lVar22 = plVar26[1];
          uVar8 = *(undefined4 *)((longlong)plVar26 + 0xc);
          *(int *)param_2 = (int)*plVar26;
          *(undefined4 *)((longlong)param_2 + 4) = uVar7;
          *(int *)(param_2 + 1) = (int)lVar22;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
          *plVar26 = local_50;
          plVar26[1] = lStack_48;
        }
        *(undefined4 *)(plVar26 + 1) = 0;
        local_190 = 0;
        local_118 = 0;
      }
    }
    else {
      plVar14 = (longlong *)FTaskGraphInterface::Get();
      lVar22 = plVar26[1];
      iVar9 = (**(code **)(*plVar14 + 0x18))(plVar14);
      iVar24 = (int)plVar26[1];
      uVar12 = (int)lVar22 / iVar9;
      if ((int)uVar12 <= (int)uVar10) {
        uVar12 = uVar10;
      }
      iVar9 = 0;
      if (0 < iVar24) {
        do {
          uVar10 = iVar24 - iVar9;
          if ((int)uVar12 <= iVar24 - iVar9) {
            uVar10 = uVar12;
          }
          if (*param_3 == 0) {
            TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
            FCollectorTaskQueue::AddTask(param_1 + 2,plVar26,iVar9,uVar10);
          }
          else {
            uVar4 = param_1[1];
            plVar14 = (longlong *)FUN_141732f60(local_68,0,0xff);
            local_1e8 = uVar10;
            local_1e0 = (undefined2 *)uVar4;
            TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
            FCollectorTask::FCollectorTask(*plVar14 + 0x10,param_1,plVar26,iVar9);
            FUN_141748040(*plVar14,&local_120,plVar14[1],(int)plVar14[2]);
            lVar22 = *local_170;
            iVar24 = *(int *)(lVar22 + 0x40);
            *(int *)(lVar22 + 0x40) = iVar24 + 1;
            if (*(int *)(lVar22 + 0x44) < iVar24 + 1) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (lVar22 + 0x18,iVar24);
            }
            lVar15 = *(longlong *)(lVar22 + 0x38);
            if (*(longlong *)(lVar22 + 0x38) == 0) {
              lVar15 = lVar22 + 0x18;
            }
            plVar14 = (longlong *)(lVar15 + (longlong)iVar24 * 8);
            param_3 = local_170;
            if (plVar14 != (longlong *)0x0) {
              *plVar14 = local_120;
              if (local_120 == 0) goto LAB_1417435b3;
              LOCK();
              *(int *)(local_120 + 0x48) = *(int *)(local_120 + 0x48) + 1;
              UNLOCK();
            }
            if (local_120 != 0) {
              LOCK();
              piVar2 = (int *)(local_120 + 0x48);
              iVar24 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                FGraphEvent::Recycle(local_120);
                param_3 = local_170;
              }
            }
          }
LAB_1417435b3:
          iVar9 = iVar9 + uVar10;
          iVar24 = (int)plVar26[1];
        } while (iVar9 < iVar24);
      }
      *(undefined4 *)(plVar26 + 1) = 0;
      param_2 = local_100;
      uVar10 = local_180;
    }
    iVar24 = local_190;
    FReferenceCollector::~FReferenceCollector(&local_f8);
    if ((int)param_2[1] <= iVar24) {
      uVar4 = param_1[1];
      *(undefined4 *)(plVar26 + 1) = 0;
      if ((*(int *)((longlong)plVar26 + 0xc) < 0) && (*(int *)((longlong)plVar26 + 0xc) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar26,0);
      }
      FUN_1415b1b00(uVar4,plVar26);
      if (local_110 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
  } while( true );
switchD_141741769_default:
  local_1c4 = local_1c4 | 1;
  if (*(longlong *)(lVar15 + 0x10) == 0) {
    local_150 = (undefined2 *)0x0;
    local_148 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    FGenericPlatformString::Memcpy(local_150,&DAT_143f3edc8,10);
  }
  else {
    local_b0 = *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x18);
    FName::ToString(&local_b0,&local_150);
  }
  puVar18 = &DAT_143f3eda8;
  if ((int)local_148 != 0) {
    puVar18 = local_150;
  }
  UObjectBaseUtility::GetPathName(lVar15,&local_a0,0);
  local_1d8 = &DAT_143f3eda8;
  if (local_98 != 0) {
    local_1d8 = local_a0;
  }
  local_1e8 = iVar24;
  local_1e0 = puVar18;
  LowLevelFatalErrorHandler
            ("Unknown",0x328,L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",
             uVar19);
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar10 = local_1c4 & 0xfffffffe;
  if (local_150 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar18 = *(undefined2 **)(lVar15 + 0x10);
  local_1c4 = uVar10 | 2;
  if (puVar18 == (undefined2 *)0x0) {
    local_138 = 5;
    local_140 = puVar18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,&DAT_143f3edc8,10);
  }
  else {
    local_a8 = *(undefined8 *)(puVar18 + 0xc);
    FName::ToString(&local_a8,&local_140);
  }
  puVar18 = &DAT_143f3eda8;
  if ((int)local_138 != 0) {
    puVar18 = local_140;
  }
  UObjectBaseUtility::GetPathName(lVar15,&local_90,0);
  local_1d0 = &DAT_143f3eda8;
  if (local_88 != 0) {
    local_1d0 = local_90;
  }
  local_1e0 = (undefined2 *)CONCAT44(local_1e0._4_4_,iVar24);
  local_1e8 = uVar19;
  local_1d8 = puVar18;
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x328,
             L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s");
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_1c4 = local_1c4 & 0xfffffffd;
  lVar22 = local_1c0;
  plVar17 = local_1a0;
  if (local_140 != (undefined2 *)0x0) {
    FMemory::Free();
    lVar22 = local_1c0;
    plVar17 = local_1a0;
  }
  goto LAB_1417416e0;
switchD_141741769_caseD_b:
  iVar24 = (int)plVar26[1];
  if ((int)local_180 <= iVar24) {
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    lVar22 = plVar26[1];
    iVar9 = (**(code **)(*plVar14 + 0x18))(plVar14);
    iVar24 = (int)plVar26[1];
    uVar12 = (int)lVar22 / iVar9;
    if ((int)uVar12 <= (int)uVar10) {
      uVar12 = uVar10;
    }
    iVar9 = iVar24;
    if ((int)uVar10 <= iVar24) {
      do {
        puVar3 = local_128;
        iVar24 = iVar9 - uVar12;
        if ((int)(iVar9 - uVar12) < 1) {
          iVar24 = 0;
        }
        if (*local_170 == 0) {
          TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
          FCollectorTaskQueue::AddTask(local_128 + 2,plVar26,iVar24,iVar9 - iVar24);
        }
        else {
          uVar4 = local_128[1];
          plVar14 = (longlong *)FUN_141732f60(local_80,0,0xff);
          local_1e8 = iVar9 - iVar24;
          local_1e0 = (undefined2 *)uVar4;
          TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
          FCollectorTask::FCollectorTask(*plVar14 + 0x10,puVar3,plVar26,iVar24);
          FUN_141748040(*plVar14,&local_130,plVar14[1],(int)plVar14[2]);
          lVar22 = *local_170;
          iVar9 = *(int *)(lVar22 + 0x40);
          *(int *)(lVar22 + 0x40) = iVar9 + 1;
          if (*(int *)(lVar22 + 0x44) < iVar9 + 1) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (lVar22 + 0x18,iVar9);
          }
          lVar15 = *(longlong *)(lVar22 + 0x38);
          if (*(longlong *)(lVar22 + 0x38) == 0) {
            lVar15 = lVar22 + 0x18;
          }
          plVar14 = (longlong *)(lVar15 + (longlong)iVar9 * 8);
          if (plVar14 != (longlong *)0x0) {
            *plVar14 = local_130;
            if (local_130 == 0) goto LAB_14174343e;
            LOCK();
            *(int *)(local_130 + 0x48) = *(int *)(local_130 + 0x48) + 1;
            UNLOCK();
          }
          if (local_130 != 0) {
            LOCK();
            piVar2 = (int *)(local_130 + 0x48);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FGraphEvent::Recycle(local_130);
            }
          }
        }
LAB_14174343e:
        *(int *)(plVar26 + 1) = iVar24;
        uVar10 = local_180;
        iVar9 = iVar24;
      } while ((int)local_180 <= iVar24);
    }
  }
  param_3 = local_170;
  param_1 = local_128;
  param_2 = local_100;
  if ((int)local_100[1] <= local_190) goto LAB_141743495;
  goto LAB_14174160e;
LAB_141742530:
  LOCK();
  bVar29 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar29) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (!bVar29) goto code_r0x00014174253e;
  local_1c8 = '\0';
  local_158 = (longlong)(int)~*(uint *)(lVar22 + 0xc) * 0x50 + DAT_1469e8f10;
  puVar28 = *(uint **)(local_158 + 0x18);
  puVar20 = puVar28 + *(int *)(local_158 + 0x20);
  for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
    uVar10 = *puVar28;
    if (-1 < (int)uVar10) {
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
      lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
      uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
      if ((uVar10 >> 0x1d & 1) == 0) {
        if ((uVar10 >> 0x1c & 1) != 0) {
          while ((uVar10 >> 0x1c & 1) != 0) {
            puVar1 = (uint *)(lVar22 + 8);
            LOCK();
            bVar29 = uVar10 == *puVar1;
            if (bVar29) {
              *puVar1 = uVar10 & 0xefffffff;
            }
            UNLOCK();
            if (bVar29) break;
            uVar10 = *(uint *)(lVar22 + 8);
          }
        }
      }
      else {
        *puVar28 = 0xffffffff;
        local_1c8 = '\x01';
      }
    }
  }
  puVar28 = *(uint **)(local_158 + 0x28);
  bVar29 = false;
  puVar20 = puVar28 + *(int *)(local_158 + 0x30);
  if (puVar28 != puVar20) {
    do {
      uVar10 = *puVar28;
      if (-1 < (int)uVar10) {
        lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
        puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        if ((uVar10 >> 0x1d & 1) == 0) {
          if ((uVar10 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                LOCK();
                bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                if (bVar30) {
                  *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                }
                UNLOCK();
                if (bVar30) {
                  uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                  uVar12 = uVar10 & 0xffff;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar10 + 0xffff;
                    uVar12 = uVar12 - 0x10000;
                  }
                  lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                  lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                  uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                  if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x00014174274c;
                  break;
                }
                uVar10 = *(uint *)(puVar3 + 1);
              }
            }
          }
          else {
            while ((uVar10 >> 0x1c & 1) != 0) {
              LOCK();
              bVar30 = uVar10 == *(uint *)(puVar3 + 1);
              if (bVar30) {
                *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
              }
              UNLOCK();
              if (bVar30) {
                iVar24 = (int)plVar14[1];
                uVar4 = *puVar3;
                *(int *)(plVar14 + 1) = iVar24 + 1;
                if (*(int *)((longlong)plVar14 + 0xc) < iVar24 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar24);
                }
                *(undefined8 *)(*plVar14 + (longlong)iVar24 * 8) = uVar4;
                if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                  FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                            (~*(uint *)((longlong)puVar3 + 0xc),plVar14);
                }
                break;
              }
              uVar10 = *(uint *)(puVar3 + 1);
            }
          }
        }
        else {
          *puVar28 = 0xffffffff;
          bVar29 = true;
        }
      }
LAB_141742786:
      puVar28 = puVar28 + 1;
    } while (puVar28 != puVar20);
    if (!bVar29) goto LAB_14174279e;
LAB_1417427a7:
    plVar26 = local_1b0;
    uVar27 = 0;
    puVar20 = *(uint **)(local_158 + 8);
    uVar13 = (longlong)*(int *)(local_158 + 0x10) & 0x3fffffffffffffff;
    if (puVar20 + *(int *)(local_158 + 0x10) < puVar20) {
      uVar13 = uVar27;
    }
    if (uVar13 != 0) {
      do {
        uVar10 = *puVar20;
        uVar12 = uVar10 & 0xffff;
        if ((int)uVar10 < 0) {
          uVar10 = uVar10 + 0xffff;
          uVar12 = uVar12 - 0x10000;
        }
        iVar24 = (int)plVar26[1];
        uVar4 = *(undefined8 *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                 (longlong)(int)uVar12 * 0x18);
        *(int *)(plVar26 + 1) = iVar24 + 1;
        if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
        }
        puVar20 = puVar20 + 1;
        uVar27 = uVar27 + 1;
        *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
      } while (uVar27 != uVar13);
    }
    goto LAB_141742843;
  }
LAB_14174279e:
  plVar16 = local_198;
  if (local_1c8 != '\0') goto LAB_1417427a7;
  goto LAB_141742854;
code_r0x00014174253e:
  uVar10 = *(uint *)(lVar22 + 8);
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141742854;
  goto LAB_141742530;
joined_r0x00014174274c:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141742786;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar14);
    goto LAB_141742786;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x00014174274c;
code_r0x000141742160:
  uVar10 = *(uint *)(lVar5 + 8);
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141742854;
  goto LAB_141742150;
joined_r0x0001417423ac:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_1417423e6;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar14);
    goto LAB_1417423e6;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x0001417423ac;
code_r0x0001417429a0:
  uVar10 = *(uint *)(lVar5 + 8);
  goto joined_r0x000141742987;
joined_r0x000141742bbc:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141742bf6;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar16);
    goto LAB_141742bf6;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x000141742bbc;
LAB_141742d40:
  LOCK();
  bVar29 = uVar10 == *(uint *)(lVar5 + 8);
  if (bVar29) {
    *(uint *)(lVar5 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (!bVar29) goto code_r0x000141742d4e;
  local_1c8 = '\0';
  local_160 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
  puVar28 = *(uint **)(local_160 + 0x18);
  puVar20 = puVar28 + *(int *)(local_160 + 0x20);
  for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
    uVar10 = *puVar28;
    if (-1 < (int)uVar10) {
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
      lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
      uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
      if ((uVar10 >> 0x1d & 1) == 0) {
        if ((uVar10 >> 0x1c & 1) != 0) {
          while ((uVar10 >> 0x1c & 1) != 0) {
            puVar1 = (uint *)(lVar22 + 8);
            LOCK();
            bVar29 = uVar10 == *puVar1;
            if (bVar29) {
              *puVar1 = uVar10 & 0xefffffff;
            }
            UNLOCK();
            if (bVar29) break;
            uVar10 = *(uint *)(lVar22 + 8);
          }
        }
      }
      else {
        *puVar28 = 0xffffffff;
        local_1c8 = '\x01';
      }
    }
  }
  puVar28 = *(uint **)(local_160 + 0x28);
  bVar29 = false;
  puVar20 = puVar28 + *(int *)(local_160 + 0x30);
  if (puVar28 == puVar20) {
LAB_141742fb0:
    lVar22 = local_1c0;
    plVar17 = local_1a0;
    plVar14 = local_188;
    uVar12 = local_1b8;
    lVar15 = local_178;
    plVar26 = local_1b0;
    if (local_1c8 == '\0') goto LAB_1417416e0;
  }
  else {
    do {
      uVar10 = *puVar28;
      if (-1 < (int)uVar10) {
        lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
        puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        if ((uVar10 >> 0x1d & 1) == 0) {
          if ((uVar10 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                LOCK();
                bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                if (bVar30) {
                  *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                }
                UNLOCK();
                if (bVar30) {
                  uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                  uVar12 = uVar10 & 0xffff;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar10 + 0xffff;
                    uVar12 = uVar12 - 0x10000;
                  }
                  lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                  lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                  uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                  if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x000141742f5c;
                  break;
                }
                uVar10 = *(uint *)(puVar3 + 1);
              }
            }
          }
          else {
            while ((uVar10 >> 0x1c & 1) != 0) {
              LOCK();
              bVar30 = uVar10 == *(uint *)(puVar3 + 1);
              if (bVar30) {
                *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
              }
              UNLOCK();
              if (bVar30) {
                iVar24 = (int)plVar16[1];
                uVar4 = *puVar3;
                *(int *)(plVar16 + 1) = iVar24 + 1;
                if (*(int *)((longlong)plVar16 + 0xc) < iVar24 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar24);
                }
                *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar4;
                if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                  FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                            (~*(uint *)((longlong)puVar3 + 0xc),plVar16);
                }
                break;
              }
              uVar10 = *(uint *)(puVar3 + 1);
            }
          }
        }
        else {
          *puVar28 = 0xffffffff;
          bVar29 = true;
        }
      }
LAB_141742f96:
      puVar28 = puVar28 + 1;
    } while (puVar28 != puVar20);
    if (!bVar29) goto LAB_141742fb0;
  }
  lVar22 = local_160;
  plVar26 = local_1b0;
  uVar27 = 0;
  puVar20 = *(uint **)(local_160 + 8);
  uVar13 = (longlong)*(int *)(local_160 + 0x10) & 0x3fffffffffffffff;
  if (puVar20 + *(int *)(local_160 + 0x10) < puVar20) {
    uVar13 = uVar27;
  }
  if (uVar13 != 0) {
    do {
      uVar10 = *puVar20;
      uVar12 = uVar10 & 0xffff;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0xffff;
        uVar12 = uVar12 - 0x10000;
      }
      iVar24 = (int)plVar26[1];
      uVar4 = *(undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
               (longlong)(int)uVar12 * 0x18);
      *(int *)(plVar26 + 1) = iVar24 + 1;
      if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
      }
      puVar20 = puVar20 + 1;
      uVar27 = uVar27 + 1;
      *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
    } while (uVar27 != uVar13);
  }
  goto LAB_141741fcb;
code_r0x000141742d4e:
  uVar10 = *(uint *)(lVar5 + 8);
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_1417416e0;
  goto LAB_141742d40;
joined_r0x000141742f5c:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141742f96;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar16);
    goto LAB_141742f96;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x000141742f5c;
LAB_1417418d6:
  local_1b8 = uVar11 & 0xff;
  iVar24 = (int)plVar26[1];
  *(int *)(plVar26 + 1) = iVar24 + 1;
  if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
    plVar17 = local_1a0;
  }
  *(ulonglong *)(*plVar26 + (longlong)iVar24 * 8) = *puVar21;
LAB_1417416d3:
  lVar22 = local_1c0;
  uVar12 = uVar11 & 0xff;
  goto LAB_1417416e0;
joined_r0x000141741b0c:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141741b46;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar16);
    goto LAB_141741b46;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x000141741b0c;
code_r0x0001417418c0:
  uVar10 = *(uint *)(lVar5 + 8);
  goto joined_r0x0001417418a9;
LAB_141741cb0:
  LOCK();
  bVar29 = uVar10 == *(uint *)(lVar5 + 8);
  if (bVar29) {
    *(uint *)(lVar5 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (!bVar29) {
    uVar10 = *(uint *)(lVar5 + 8);
    if ((uVar10 >> 0x1c & 1) == 0) goto LAB_1417416e0;
    goto LAB_141741cb0;
  }
  local_1c8 = '\0';
  local_168 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
  puVar28 = *(uint **)(local_168 + 0x18);
  puVar20 = puVar28 + *(int *)(local_168 + 0x20);
  for (; puVar28 != puVar20; puVar28 = puVar28 + 1) {
    uVar10 = *puVar28;
    if (-1 < (int)uVar10) {
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
      lVar22 = lVar15 + (longlong)(int)(uVar10 & 0xffff) * 0x18;
      uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
      if ((uVar10 >> 0x1d & 1) == 0) {
        if ((uVar10 >> 0x1c & 1) != 0) {
          while ((uVar10 >> 0x1c & 1) != 0) {
            puVar1 = (uint *)(lVar22 + 8);
            LOCK();
            bVar29 = uVar10 == *puVar1;
            if (bVar29) {
              *puVar1 = uVar10 & 0xefffffff;
            }
            UNLOCK();
            if (bVar29) break;
            uVar10 = *(uint *)(lVar22 + 8);
          }
        }
      }
      else {
        *puVar28 = 0xffffffff;
        local_1c8 = '\x01';
      }
    }
  }
  puVar28 = *(uint **)(local_168 + 0x28);
  bVar29 = false;
  puVar20 = puVar28 + *(int *)(local_168 + 0x30);
  if (puVar28 == puVar20) {
LAB_141741f20:
    lVar22 = local_1c0;
    plVar17 = local_1a0;
    plVar14 = local_188;
    uVar12 = local_1b8;
    lVar15 = local_178;
    plVar26 = local_1b0;
    if (local_1c8 == '\0') goto LAB_1417416e0;
  }
  else {
    do {
      uVar10 = *puVar28;
      if (-1 < (int)uVar10) {
        lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
        puVar3 = (undefined8 *)(lVar22 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        uVar10 = *(uint *)(lVar22 + 8 + (longlong)(int)(uVar10 & 0xffff) * 0x18);
        if ((uVar10 >> 0x1d & 1) == 0) {
          if ((uVar10 >> 0x1c & 1) == 0) {
            if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((uVar10 >> 0x17 & 1) == 0)) {
              while ((uVar10 >> 0x17 & 1) == 0) {
                LOCK();
                bVar30 = uVar10 == *(uint *)(puVar3 + 1);
                if (bVar30) {
                  *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
                }
                UNLOCK();
                if (bVar30) {
                  uVar10 = *(uint *)((longlong)puVar3 + 0xc);
                  uVar12 = uVar10 & 0xffff;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar10 + 0xffff;
                    uVar12 = uVar12 - 0x10000;
                  }
                  lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8);
                  lVar22 = lVar15 + (longlong)(int)uVar12 * 0x18;
                  uVar10 = *(uint *)(lVar15 + 8 + (longlong)(int)uVar12 * 0x18);
                  if ((uVar10 >> 0x1c & 1) != 0) goto joined_r0x000141741ecc;
                  break;
                }
                uVar10 = *(uint *)(puVar3 + 1);
              }
            }
          }
          else {
            while ((uVar10 >> 0x1c & 1) != 0) {
              LOCK();
              bVar30 = uVar10 == *(uint *)(puVar3 + 1);
              if (bVar30) {
                *(uint *)(puVar3 + 1) = uVar10 & 0xefffffff;
              }
              UNLOCK();
              if (bVar30) {
                iVar24 = (int)plVar16[1];
                uVar4 = *puVar3;
                *(int *)(plVar16 + 1) = iVar24 + 1;
                if (*(int *)((longlong)plVar16 + 0xc) < iVar24 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar24);
                }
                *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar4;
                if ((int)*(uint *)((longlong)puVar3 + 0xc) < 0) {
                  FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable
                            (~*(uint *)((longlong)puVar3 + 0xc),plVar16);
                }
                break;
              }
              uVar10 = *(uint *)(puVar3 + 1);
            }
          }
        }
        else {
          *puVar28 = 0xffffffff;
          bVar29 = true;
        }
      }
LAB_141741f06:
      puVar28 = puVar28 + 1;
    } while (puVar28 != puVar20);
    if (!bVar29) goto LAB_141741f20;
  }
  lVar22 = local_168;
  plVar26 = local_1b0;
  uVar27 = 0;
  puVar20 = *(uint **)(local_168 + 8);
  uVar13 = (longlong)*(int *)(local_168 + 0x10) & 0x3fffffffffffffff;
  if (puVar20 + *(int *)(local_168 + 0x10) < puVar20) {
    uVar13 = uVar27;
  }
  if (uVar13 != 0) {
    do {
      uVar10 = *puVar20;
      uVar12 = uVar10 & 0xffff;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0xffff;
        uVar12 = uVar12 - 0x10000;
      }
      iVar24 = (int)plVar26[1];
      uVar4 = *(undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
               (longlong)(int)uVar12 * 0x18);
      *(int *)(plVar26 + 1) = iVar24 + 1;
      if (*(int *)((longlong)plVar26 + 0xc) < iVar24 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
      }
      puVar20 = puVar20 + 1;
      uVar27 = uVar27 + 1;
      *(undefined8 *)(*plVar26 + (longlong)iVar24 * 8) = uVar4;
    } while (uVar27 != uVar13);
  }
LAB_141741fcb:
  *(undefined1 *)(lVar22 + 0x48) = 1;
  DAT_1469e8f34 = 1;
  lVar22 = local_1c0;
  plVar17 = local_1a0;
  plVar14 = local_188;
  uVar12 = local_1b8;
  lVar15 = local_178;
  goto LAB_1417416e0;
joined_r0x000141741ecc:
  if ((uVar10 >> 0x1c & 1) == 0) goto LAB_141741f06;
  LOCK();
  bVar30 = uVar10 == *(uint *)(lVar22 + 8);
  if (bVar30) {
    *(uint *)(lVar22 + 8) = uVar10 & 0xefffffff;
  }
  UNLOCK();
  if (bVar30) {
    FGCReferenceProcessor<1>::MarkReferencedClustersAsReachable(~*(uint *)(lVar22 + 0xc),plVar16);
    goto LAB_141741f06;
  }
  uVar10 = *(uint *)(lVar22 + 8);
  goto joined_r0x000141741ecc;
}



// FUNCTION 1417436e0 FUN_1417436e0 body=6671 status=ok
// SIG undefined FUN_1417436e0(void)

void FUN_1417436e0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  undefined4 uVar27;
  longlong *local_140;
  uint local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  uint local_e8;
  longlong local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  undefined **local_b0;
  longlong local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  uVar14 = 0;
  local_e8 = 0;
  local_70 = param_2;
  local_68 = param_1;
  local_128 = (longlong *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(param_1[1]);
  if (local_128 == (longlong *)0x0) {
    local_128 = (longlong *)operator_new(0x20);
    if (local_128 == (longlong *)0x0) {
      local_128 = (longlong *)0x0;
    }
    else {
      *local_128 = 0;
      local_128[1] = 0;
      local_128[2] = 0;
      local_128[3] = 0;
    }
  }
  local_f8 = (longlong *)0x0;
  local_f0 = 0x80;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_f8,0);
  if (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  local_c0 = local_f8;
  local_140 = local_f8;
  uVar10 = uVar14;
  while( true ) {
    uVar2 = *param_1;
    FReferenceCollector::FReferenceCollector(&local_b0);
    local_b0 = &PTR__scalar_deleting_destructor__144d10df8;
    local_88 = 1;
    local_98 = uVar2;
    local_90 = local_128;
    if ((int)uVar14 < (int)param_2[1]) break;
LAB_14174506a:
    if ((int)local_128[1] != 0) {
      if (param_2 != local_128) {
        uVar27 = *(undefined4 *)((longlong)local_128 + 4);
        lVar21 = local_128[1];
        uVar5 = *(undefined4 *)((longlong)local_128 + 0xc);
        lVar3 = *param_2;
        lVar20 = param_2[1];
        *(int *)param_2 = (int)*local_128;
        *(undefined4 *)((longlong)param_2 + 4) = uVar27;
        *(int *)(param_2 + 1) = (int)lVar21;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
        *local_128 = lVar3;
        local_128[1] = lVar20;
      }
      *(undefined4 *)(local_128 + 1) = 0;
      uVar14 = 0;
      uVar10 = 0;
    }
    FReferenceCollector::~FReferenceCollector();
    if ((int)param_2[1] <= (int)uVar14) {
      uVar2 = param_1[1];
      *(undefined4 *)(local_128 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)local_128 + 0xc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(local_128,0);
      }
      FUN_1415b1b00(uVar2,local_128);
      if (local_140 != (longlong *)0x0) {
        FMemory::Free(local_140);
      }
      return;
    }
  }
LAB_1417437c0:
  local_e8 = (int)uVar14 + 1;
  lVar3 = *(longlong *)(*param_2 + uVar10 * 8);
  local_b8 = uVar10 + 1;
  iVar23 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x40);
  iVar7 = FUN_14169da80();
  uVar14 = (longlong)(iVar7 + -1 + iVar23) / (longlong)iVar7;
  uVar10 = uVar14 & 0xffffffff;
  uVar8 = (uint)uVar14;
  while (uVar8 != 0) {
    uVar8 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar8;
  }
  plVar19 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x1b0);
  uVar14 = 0;
  *(undefined4 *)(local_140 + 1) = 0;
  *local_140 = lVar3;
  *(undefined8 *)((longlong)local_140 + 0xc) = 0xffffffffffffffff;
  plVar15 = local_140;
  lVar20 = lVar3;
  local_138 = 0;
  local_130 = lVar3;
LAB_141743880:
  iVar7 = 0;
  iVar23 = (int)uVar14;
  if (0 < (int)local_138) {
    do {
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + -1;
      if (0 < *(int *)((longlong)plVar15 + 0xc)) {
        lVar20 = (longlong)(int)plVar15[1] + *plVar15;
        iVar23 = (int)plVar15[2];
        *plVar15 = lVar20;
        local_130 = lVar20;
        break;
      }
      lVar20 = plVar15[-3];
      plVar15 = plVar15 + -3;
      iVar7 = iVar7 + 1;
      local_140 = plVar15;
      local_130 = lVar20;
    } while (iVar7 < (int)local_138);
  }
  lVar21 = *plVar19;
  uVar24 = iVar23 + 1;
  uVar14 = (ulonglong)uVar24;
  uVar8 = *(uint *)(lVar21 + (longlong)iVar23 * 4);
  uVar16 = uVar8 >> 8 & 0xf;
  switch(uVar16) {
  case 1:
    puVar18 = (ulonglong *)((ulonglong)(uVar8 >> 0xc) + lVar20);
    uVar10 = *puVar18;
    if ((uVar10 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar10)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((uVar10 != 0) && (!bVar22)) {
      uVar16 = *(uint *)(uVar10 + 0xc);
      uVar24 = uVar16 & 0xffff;
      if ((int)uVar16 < 0) {
        uVar16 = uVar16 + 0xffff;
        uVar24 = uVar24 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
      lVar21 = lVar4 + (longlong)(int)uVar24 * 0x18;
      uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar24 * 0x18);
      if ((uVar16 >> 0x1d & 1) == 0) {
        if ((uVar16 >> 0x1c & 1) == 0) {
          uVar24 = *(uint *)(lVar21 + 0xc);
          if (((int)uVar24 < 1) || ((uVar16 >> 0x17 & 1) != 0)) goto LAB_141743a40;
          uVar9 = uVar24 & 0xffff;
          *(uint *)(lVar21 + 8) = uVar16 | 0x800000;
          if ((int)uVar24 < 0) {
            uVar24 = uVar24 + 0xffff;
            uVar9 = uVar9 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
          lVar21 = lVar4 + (longlong)(int)uVar9 * 0x18;
          uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar9 * 0x18);
          plVar15 = local_140;
          if ((uVar16 >> 0x1c & 1) == 0) break;
          *(uint *)(lVar21 + 8) = uVar16 & 0xefffffff;
          bVar22 = false;
          lVar21 = (longlong)(int)~*(uint *)(lVar21 + 0xc) * 0x50 + DAT_1469e8f10;
          puVar26 = *(uint **)(lVar21 + 0x18);
          puVar17 = puVar26 + *(int *)(lVar21 + 0x20);
          for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
            uVar16 = *puVar26;
            if (-1 < (int)uVar16) {
              lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
              uVar24 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              if ((uVar24 >> 0x1d & 1) == 0) {
                *(uint *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18 + 8) =
                     uVar24 & 0xefffffff;
              }
              else {
                *puVar26 = 0xffffffff;
                bVar22 = true;
              }
            }
          }
          puVar26 = *(uint **)(lVar21 + 0x28);
          bVar6 = false;
          puVar17 = puVar26 + *(int *)(lVar21 + 0x30);
          if (puVar26 == puVar17) {
LAB_141743f3f:
            lVar20 = local_130;
            if (!bVar22) break;
          }
          else {
            do {
              uVar16 = *puVar26;
              if (-1 < (int)uVar16) {
                lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
                puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
                uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
                if ((uVar16 >> 0x1d & 1) == 0) {
                  if ((uVar16 >> 0x1c & 1) == 0) {
                    uVar24 = *(uint *)((longlong)puVar1 + 0xc);
                    if ((0 < (int)uVar24) && ((uVar16 >> 0x17 & 1) == 0)) {
                      uVar9 = uVar24 & 0xffff;
                      *(uint *)(puVar1 + 1) = uVar16 | 0x800000;
                      if ((int)uVar24 < 0) {
                        uVar24 = uVar24 + 0xffff;
                        uVar9 = uVar9 - 0x10000;
                      }
                      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
                      lVar20 = lVar4 + (longlong)(int)uVar9 * 0x18;
                      uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar9 * 0x18);
                      if ((uVar16 >> 0x1c & 1) != 0) {
                        *(uint *)(lVar20 + 8) = uVar16 & 0xefffffff;
                        FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                  (~*(uint *)(lVar20 + 0xc),local_128);
                      }
                    }
                  }
                  else {
                    uVar2 = *puVar1;
                    *(uint *)(puVar1 + 1) = uVar16 & 0xefffffff;
                    iVar23 = (int)local_128[1];
                    *(int *)(local_128 + 1) = iVar23 + 1;
                    if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (local_128,iVar23);
                    }
                    *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                    if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                    }
                  }
                }
                else {
                  *puVar26 = 0xffffffff;
                  bVar6 = true;
                }
              }
              puVar26 = puVar26 + 1;
            } while (puVar26 != puVar17);
            if (!bVar6) goto LAB_141743f3f;
          }
          uVar25 = 0;
          puVar17 = *(uint **)(lVar21 + 8);
          uVar10 = (longlong)*(int *)(lVar21 + 0x10) & 0x3fffffffffffffff;
          if (puVar17 + *(int *)(lVar21 + 0x10) < puVar17) {
            uVar10 = uVar25;
          }
          if (uVar10 != 0) {
            do {
              uVar16 = *puVar17;
              uVar24 = uVar16 & 0xffff;
              if ((int)uVar16 < 0) {
                uVar16 = uVar16 + 0xffff;
                uVar24 = uVar24 - 0x10000;
              }
              iVar23 = (int)local_128[1];
              uVar2 = *(undefined8 *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) +
                       (longlong)(int)uVar24 * 0x18);
              *(int *)(local_128 + 1) = iVar23 + 1;
              if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
              }
              puVar17 = puVar17 + 1;
              uVar25 = uVar25 + 1;
              *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
            } while (uVar25 != uVar10);
          }
        }
        else {
          *(uint *)(lVar21 + 8) = uVar16 & 0xefffffff;
          if (((uVar16 & 0xefffffff) >> 0x18 & 1) == 0) {
            iVar23 = (int)local_128[1];
            *(int *)(local_128 + 1) = iVar23 + 1;
            if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
              lVar20 = local_130;
            }
            *(ulonglong *)(*local_128 + (longlong)iVar23 * 8) = *puVar18;
            plVar15 = local_140;
            break;
          }
          bVar22 = false;
          lVar21 = (longlong)(int)~*(uint *)(lVar21 + 0xc) * 0x50 + DAT_1469e8f10;
          puVar26 = *(uint **)(lVar21 + 0x18);
          puVar17 = puVar26 + *(int *)(lVar21 + 0x20);
          for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
            uVar16 = *puVar26;
            if (-1 < (int)uVar16) {
              lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
              uVar24 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              if ((uVar24 >> 0x1d & 1) == 0) {
                *(uint *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18 + 8) =
                     uVar24 & 0xefffffff;
              }
              else {
                *puVar26 = 0xffffffff;
                bVar22 = true;
              }
            }
          }
          puVar26 = *(uint **)(lVar21 + 0x28);
          bVar6 = false;
          puVar17 = puVar26 + *(int *)(lVar21 + 0x30);
          if (puVar26 == puVar17) {
LAB_141743c5f:
            plVar15 = local_140;
            lVar20 = local_130;
            if (!bVar22) break;
          }
          else {
            do {
              uVar16 = *puVar26;
              if (-1 < (int)uVar16) {
                lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
                puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
                uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
                if ((uVar16 >> 0x1d & 1) == 0) {
                  if ((uVar16 >> 0x1c & 1) == 0) {
                    uVar24 = *(uint *)((longlong)puVar1 + 0xc);
                    if ((0 < (int)uVar24) && ((uVar16 >> 0x17 & 1) == 0)) {
                      uVar9 = uVar24 & 0xffff;
                      *(uint *)(puVar1 + 1) = uVar16 | 0x800000;
                      if ((int)uVar24 < 0) {
                        uVar24 = uVar24 + 0xffff;
                        uVar9 = uVar9 - 0x10000;
                      }
                      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
                      lVar20 = lVar4 + (longlong)(int)uVar9 * 0x18;
                      uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar9 * 0x18);
                      if ((uVar16 >> 0x1c & 1) != 0) {
                        *(uint *)(lVar20 + 8) = uVar16 & 0xefffffff;
                        FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                  (~*(uint *)(lVar20 + 0xc),local_128);
                      }
                    }
                  }
                  else {
                    uVar2 = *puVar1;
                    *(uint *)(puVar1 + 1) = uVar16 & 0xefffffff;
                    iVar23 = (int)local_128[1];
                    *(int *)(local_128 + 1) = iVar23 + 1;
                    if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (local_128,iVar23);
                    }
                    *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                    if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                    }
                  }
                }
                else {
                  *puVar26 = 0xffffffff;
                  bVar6 = true;
                }
              }
              puVar26 = puVar26 + 1;
            } while (puVar26 != puVar17);
            if (!bVar6) goto LAB_141743c5f;
          }
          uVar25 = 0;
          puVar17 = *(uint **)(lVar21 + 8);
          uVar10 = (longlong)*(int *)(lVar21 + 0x10) & 0x3fffffffffffffff;
          if (puVar17 + *(int *)(lVar21 + 0x10) < puVar17) {
            uVar10 = uVar25;
          }
          if (uVar10 != 0) {
            do {
              uVar16 = *puVar17;
              uVar24 = uVar16 & 0xffff;
              if ((int)uVar16 < 0) {
                uVar16 = uVar16 + 0xffff;
                uVar24 = uVar24 - 0x10000;
              }
              iVar23 = (int)local_128[1];
              uVar2 = *(undefined8 *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) +
                       (longlong)(int)uVar24 * 0x18);
              *(int *)(local_128 + 1) = iVar23 + 1;
              if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
              }
              puVar17 = puVar17 + 1;
              uVar25 = uVar25 + 1;
              *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
            } while (uVar25 != uVar10);
          }
        }
        goto LAB_141743fe4;
      }
      *puVar18 = 0;
      lVar21 = 0;
      plVar15 = local_140;
      local_138 = uVar8 & 0xff;
      if (DAT_1469e7298 == 0) goto LAB_141743880;
      uVar16 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar16 < (int)DAT_1469e91c4) {
        uVar9 = uVar16 & 0xffff;
        uVar24 = uVar16;
        if ((int)uVar16 < 0) {
          uVar24 = uVar16 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        lVar21 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8) +
                 (longlong)(int)uVar9 * 0x18;
      }
      if ((*(uint *)(lVar21 + 8) >> 0x1d & 1) == 0) {
        uVar24 = uVar16 & 0xffff;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0xffff;
          uVar24 = uVar24 - 0x10000;
        }
        puVar17 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) + 8 +
                          (longlong)(int)uVar24 * 0x18);
        *puVar17 = *puVar17 | 0x80000000;
LAB_141743a40:
        plVar15 = local_140;
        local_138 = uVar8 & 0xff;
        goto LAB_141743880;
      }
    }
    break;
  case 2:
    puVar18 = (ulonglong *)((ulonglong)(uVar8 >> 0xc) + lVar20);
    uVar10 = *puVar18;
    if ((uVar10 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar10)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    local_138 = uVar8 & 0xff;
    if ((uVar10 != 0) && (!bVar22)) {
      uVar16 = *(uint *)(uVar10 + 0xc);
      uVar24 = uVar16 & 0xffff;
      if ((int)uVar16 < 0) {
        uVar16 = uVar16 + 0xffff;
        uVar24 = uVar24 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
      lVar21 = lVar4 + (longlong)(int)uVar24 * 0x18;
      uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar24 * 0x18);
      if ((uVar16 >> 0x1c & 1) == 0) {
        uVar24 = *(uint *)(lVar21 + 0xc);
        if (((int)uVar24 < 1) || ((uVar16 >> 0x17 & 1) != 0)) goto LAB_141743a40;
        uVar9 = uVar24 & 0xffff;
        *(uint *)(lVar21 + 8) = uVar16 | 0x800000;
        if ((int)uVar24 < 0) {
          uVar24 = uVar24 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
        lVar21 = lVar4 + (longlong)(int)uVar9 * 0x18;
        uVar16 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar9 * 0x18);
        plVar15 = local_140;
        if ((uVar16 >> 0x1c & 1) == 0) break;
        *(uint *)(lVar21 + 8) = uVar16 & 0xefffffff;
        bVar22 = false;
        local_e0 = (longlong)(int)~*(uint *)(lVar21 + 0xc) * 0x50 + DAT_1469e8f10;
        puVar26 = *(uint **)(local_e0 + 0x18);
        puVar17 = puVar26 + *(int *)(local_e0 + 0x20);
        for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
          uVar16 = *puVar26;
          if (-1 < (int)uVar16) {
            lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
            uVar24 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
            if ((uVar24 >> 0x1d & 1) == 0) {
              *(uint *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18 + 8) = uVar24 & 0xefffffff;
            }
            else {
              *puVar26 = 0xffffffff;
              bVar22 = true;
            }
          }
        }
        puVar26 = *(uint **)(local_e0 + 0x28);
        bVar6 = false;
        puVar17 = puVar26 + *(int *)(local_e0 + 0x30);
        if (puVar26 == puVar17) {
LAB_141744cb5:
          lVar20 = local_130;
          if (!bVar22) break;
        }
        else {
          do {
            uVar16 = *puVar26;
            if (-1 < (int)uVar16) {
              lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
              puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              if ((uVar16 >> 0x1d & 1) == 0) {
                if ((uVar16 >> 0x1c & 1) == 0) {
                  uVar24 = *(uint *)((longlong)puVar1 + 0xc);
                  if ((0 < (int)uVar24) && ((uVar16 >> 0x17 & 1) == 0)) {
                    uVar9 = uVar24 & 0xffff;
                    *(uint *)(puVar1 + 1) = uVar16 | 0x800000;
                    if ((int)uVar24 < 0) {
                      uVar24 = uVar24 + 0xffff;
                      uVar9 = uVar9 - 0x10000;
                    }
                    lVar21 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
                    lVar20 = lVar21 + (longlong)(int)uVar9 * 0x18;
                    uVar16 = *(uint *)(lVar21 + 8 + (longlong)(int)uVar9 * 0x18);
                    if ((uVar16 >> 0x1c & 1) != 0) {
                      *(uint *)(lVar20 + 8) = uVar16 & 0xefffffff;
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)(lVar20 + 0xc),local_128);
                    }
                  }
                }
                else {
                  uVar2 = *puVar1;
                  *(uint *)(puVar1 + 1) = uVar16 & 0xefffffff;
                  iVar23 = (int)local_128[1];
                  *(int *)(local_128 + 1) = iVar23 + 1;
                  if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (local_128,iVar23);
                  }
                  *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                  if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                    FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                              (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                  }
                }
              }
              else {
                *puVar26 = 0xffffffff;
                bVar6 = true;
              }
            }
            puVar26 = puVar26 + 1;
          } while (puVar26 != puVar17);
          if (!bVar6) goto LAB_141744cb5;
        }
        lVar21 = local_e0;
        uVar25 = 0;
        puVar17 = *(uint **)(local_e0 + 8);
        uVar10 = (longlong)*(int *)(local_e0 + 0x10) & 0x3fffffffffffffff;
        if (puVar17 + *(int *)(local_e0 + 0x10) < puVar17) {
          uVar10 = uVar25;
        }
        if (uVar10 != 0) {
          do {
            uVar16 = *puVar17;
            uVar24 = uVar16 & 0xffff;
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 0xffff;
              uVar24 = uVar24 - 0x10000;
            }
            iVar23 = (int)local_128[1];
            uVar2 = *(undefined8 *)
                     (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) +
                     (longlong)(int)uVar24 * 0x18);
            *(int *)(local_128 + 1) = iVar23 + 1;
            if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
            }
            puVar17 = puVar17 + 1;
            uVar25 = uVar25 + 1;
            *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
          } while (uVar25 != uVar10);
        }
      }
      else {
        *(uint *)(lVar21 + 8) = uVar16 & 0xefffffff;
        if (((uVar16 & 0xefffffff) >> 0x18 & 1) == 0) {
          iVar23 = (int)local_128[1];
          *(int *)(local_128 + 1) = iVar23 + 1;
          if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
            lVar20 = local_130;
          }
          *(ulonglong *)(*local_128 + (longlong)iVar23 * 8) = *puVar18;
          plVar15 = local_140;
          break;
        }
        bVar22 = false;
        local_e0 = (longlong)(int)~*(uint *)(lVar21 + 0xc) * 0x50 + DAT_1469e8f10;
        puVar26 = *(uint **)(local_e0 + 0x18);
        puVar17 = puVar26 + *(int *)(local_e0 + 0x20);
        for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
          uVar16 = *puVar26;
          if (-1 < (int)uVar16) {
            lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
            uVar24 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
            if ((uVar24 >> 0x1d & 1) == 0) {
              *(uint *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18 + 8) = uVar24 & 0xefffffff;
            }
            else {
              *puVar26 = 0xffffffff;
              bVar22 = true;
            }
          }
        }
        puVar26 = *(uint **)(local_e0 + 0x28);
        bVar6 = false;
        puVar17 = puVar26 + *(int *)(local_e0 + 0x30);
        if (puVar26 == puVar17) {
LAB_1417449f1:
          plVar15 = local_140;
          lVar20 = local_130;
          if (!bVar22) break;
        }
        else {
          do {
            uVar16 = *puVar26;
            if (-1 < (int)uVar16) {
              lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
              puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar16 & 0xffff) * 0x18);
              if ((uVar16 >> 0x1d & 1) == 0) {
                if ((uVar16 >> 0x1c & 1) == 0) {
                  uVar24 = *(uint *)((longlong)puVar1 + 0xc);
                  if ((0 < (int)uVar24) && ((uVar16 >> 0x17 & 1) == 0)) {
                    uVar9 = uVar24 & 0xffff;
                    *(uint *)(puVar1 + 1) = uVar16 | 0x800000;
                    if ((int)uVar24 < 0) {
                      uVar24 = uVar24 + 0xffff;
                      uVar9 = uVar9 - 0x10000;
                    }
                    lVar21 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar24 >> 0x10) * 8);
                    lVar20 = lVar21 + (longlong)(int)uVar9 * 0x18;
                    uVar16 = *(uint *)(lVar21 + 8 + (longlong)(int)uVar9 * 0x18);
                    if ((uVar16 >> 0x1c & 1) != 0) {
                      *(uint *)(lVar20 + 8) = uVar16 & 0xefffffff;
                      FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                (~*(uint *)(lVar20 + 0xc),local_128);
                    }
                  }
                }
                else {
                  uVar2 = *puVar1;
                  *(uint *)(puVar1 + 1) = uVar16 & 0xefffffff;
                  iVar23 = (int)local_128[1];
                  *(int *)(local_128 + 1) = iVar23 + 1;
                  if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (local_128,iVar23);
                  }
                  *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                  if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                    FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                              (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                  }
                }
              }
              else {
                *puVar26 = 0xffffffff;
                bVar6 = true;
              }
            }
            puVar26 = puVar26 + 1;
          } while (puVar26 != puVar17);
          if (!bVar6) goto LAB_1417449f1;
        }
        lVar21 = local_e0;
        uVar25 = 0;
        puVar17 = *(uint **)(local_e0 + 8);
        uVar10 = (longlong)*(int *)(local_e0 + 0x10) & 0x3fffffffffffffff;
        if (puVar17 + *(int *)(local_e0 + 0x10) < puVar17) {
          uVar10 = uVar25;
        }
        if (uVar10 != 0) {
          do {
            uVar16 = *puVar17;
            uVar24 = uVar16 & 0xffff;
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 0xffff;
              uVar24 = uVar24 - 0x10000;
            }
            iVar23 = (int)local_128[1];
            uVar2 = *(undefined8 *)
                     (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) +
                     (longlong)(int)uVar24 * 0x18);
            *(int *)(local_128 + 1) = iVar23 + 1;
            if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_128,iVar23);
            }
            puVar17 = puVar17 + 1;
            uVar25 = uVar25 + 1;
            *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
          } while (uVar25 != uVar10);
        }
      }
LAB_141743fe4:
      local_138 = uVar8 & 0xff;
      *(undefined1 *)(lVar21 + 0x48) = 1;
      DAT_1469e8f34 = 1;
      plVar15 = local_140;
      lVar20 = local_130;
    }
    goto LAB_141743880;
  case 3:
    local_138 = uVar8 & 0xff;
    plVar13 = (longlong *)((ulonglong)(uVar8 >> 0xc) + lVar20);
    local_100 = 0;
    local_e0 = (longlong)(int)plVar13[1];
    if (0 < local_e0) {
      do {
        lVar20 = 0;
        lVar21 = *plVar13;
        puVar1 = (undefined8 *)(lVar21 + local_100 * 8);
        uVar10 = *(ulonglong *)(lVar21 + local_100 * 8);
        if ((uVar10 < DAT_1469e8ef8) || (DAT_1469e8f00 <= uVar10)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((uVar10 != 0) && (!bVar22)) {
          uVar8 = *(uint *)(uVar10 + 0xc);
          uVar16 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar16 = uVar16 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
          lVar21 = lVar4 + (longlong)(int)uVar16 * 0x18;
          uVar8 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar16 * 0x18);
          if ((uVar8 >> 0x1d & 1) == 0) {
            if ((uVar8 >> 0x1c & 1) == 0) {
              uVar16 = *(uint *)(lVar21 + 0xc);
              if ((0 < (int)uVar16) && ((uVar8 >> 0x17 & 1) == 0)) {
                uVar24 = uVar16 & 0xffff;
                *(uint *)(lVar21 + 8) = uVar8 | 0x800000;
                if ((int)uVar16 < 0) {
                  uVar16 = uVar16 + 0xffff;
                  uVar24 = uVar24 - 0x10000;
                }
                lVar21 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
                lVar20 = lVar21 + (longlong)(int)uVar24 * 0x18;
                uVar8 = *(uint *)(lVar21 + 8 + (longlong)(int)uVar24 * 0x18);
                if ((uVar8 >> 0x1c & 1) != 0) {
                  *(uint *)(lVar20 + 8) = uVar8 & 0xefffffff;
                  bVar22 = false;
                  local_c8 = (longlong)(int)~*(uint *)(lVar20 + 0xc) * 0x50 + DAT_1469e8f10;
                  puVar26 = *(uint **)(local_c8 + 0x18);
                  puVar17 = puVar26 + *(int *)(local_c8 + 0x20);
                  for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
                    uVar8 = *puVar26;
                    if (-1 < (int)uVar8) {
                      lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                      uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                      if ((uVar16 >> 0x1d & 1) == 0) {
                        *(uint *)(lVar20 + (longlong)(int)(uVar8 & 0xffff) * 0x18 + 8) =
                             uVar16 & 0xefffffff;
                      }
                      else {
                        *puVar26 = 0xffffffff;
                        bVar22 = true;
                      }
                    }
                  }
                  puVar26 = *(uint **)(local_c8 + 0x28);
                  bVar6 = false;
                  puVar17 = puVar26 + *(int *)(local_c8 + 0x30);
                  if (puVar26 == puVar17) {
LAB_141744609:
                    if (!bVar22) goto LAB_1417446b4;
                  }
                  else {
                    do {
                      uVar8 = *puVar26;
                      if (-1 < (int)uVar8) {
                        lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                        puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                        uVar8 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                        if ((uVar8 >> 0x1d & 1) == 0) {
                          if ((uVar8 >> 0x1c & 1) == 0) {
                            uVar16 = *(uint *)((longlong)puVar1 + 0xc);
                            if ((0 < (int)uVar16) && ((uVar8 >> 0x17 & 1) == 0)) {
                              uVar24 = uVar16 & 0xffff;
                              *(uint *)(puVar1 + 1) = uVar8 | 0x800000;
                              if ((int)uVar16 < 0) {
                                uVar16 = uVar16 + 0xffff;
                                uVar24 = uVar24 - 0x10000;
                              }
                              lVar21 = *(longlong *)
                                        (DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
                              lVar20 = lVar21 + (longlong)(int)uVar24 * 0x18;
                              uVar8 = *(uint *)(lVar21 + 8 + (longlong)(int)uVar24 * 0x18);
                              if ((uVar8 >> 0x1c & 1) != 0) {
                                *(uint *)(lVar20 + 8) = uVar8 & 0xefffffff;
                                FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                          (~*(uint *)(lVar20 + 0xc),local_128);
                              }
                            }
                          }
                          else {
                            uVar2 = *puVar1;
                            *(uint *)(puVar1 + 1) = uVar8 & 0xefffffff;
                            iVar23 = (int)local_128[1];
                            *(int *)(local_128 + 1) = iVar23 + 1;
                            if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                        (local_128,iVar23);
                            }
                            *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                            if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                              FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                        (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                            }
                          }
                        }
                        else {
                          *puVar26 = 0xffffffff;
                          bVar6 = true;
                        }
                      }
                      puVar26 = puVar26 + 1;
                    } while (puVar26 != puVar17);
                    if (!bVar6) goto LAB_141744609;
                  }
                  lVar20 = local_c8;
                  uVar25 = 0;
                  puVar17 = *(uint **)(local_c8 + 8);
                  uVar10 = (longlong)*(int *)(local_c8 + 0x10) & 0x3fffffffffffffff;
                  if (puVar17 + *(int *)(local_c8 + 0x10) < puVar17) {
                    uVar10 = uVar25;
                  }
                  if (uVar10 != 0) {
                    do {
                      uVar8 = *puVar17;
                      uVar16 = uVar8 & 0xffff;
                      if ((int)uVar8 < 0) {
                        uVar8 = uVar8 + 0xffff;
                        uVar16 = uVar16 - 0x10000;
                      }
                      iVar23 = (int)local_128[1];
                      uVar2 = *(undefined8 *)
                               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                               (longlong)(int)uVar16 * 0x18);
                      *(int *)(local_128 + 1) = iVar23 + 1;
                      if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (local_128,iVar23);
                      }
                      puVar17 = puVar17 + 1;
                      uVar25 = uVar25 + 1;
                      *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                    } while (uVar25 != uVar10);
                  }
                  goto LAB_1417446a2;
                }
              }
            }
            else {
              *(uint *)(lVar21 + 8) = uVar8 & 0xefffffff;
              if (((uVar8 & 0xefffffff) >> 0x18 & 1) == 0) {
                iVar23 = (int)local_128[1];
                *(int *)(local_128 + 1) = iVar23 + 1;
                if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (local_128,iVar23);
                }
                *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = *puVar1;
                goto LAB_1417446b4;
              }
              bVar22 = false;
              local_c8 = (longlong)(int)~*(uint *)(lVar21 + 0xc) * 0x50 + DAT_1469e8f10;
              puVar26 = *(uint **)(local_c8 + 0x18);
              puVar17 = puVar26 + *(int *)(local_c8 + 0x20);
              for (; puVar26 != puVar17; puVar26 = puVar26 + 1) {
                uVar8 = *puVar26;
                if (-1 < (int)uVar8) {
                  lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                  uVar16 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                  if ((uVar16 >> 0x1d & 1) == 0) {
                    *(uint *)(lVar20 + (longlong)(int)(uVar8 & 0xffff) * 0x18 + 8) =
                         uVar16 & 0xefffffff;
                  }
                  else {
                    *puVar26 = 0xffffffff;
                    bVar22 = true;
                  }
                }
              }
              puVar26 = *(uint **)(local_c8 + 0x28);
              bVar6 = false;
              puVar17 = puVar26 + *(int *)(local_c8 + 0x30);
              if (puVar26 == puVar17) {
LAB_141744359:
                if (!bVar22) goto LAB_1417446b4;
              }
              else {
                do {
                  uVar8 = *puVar26;
                  if (-1 < (int)uVar8) {
                    lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8);
                    puVar1 = (undefined8 *)(lVar20 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                    uVar8 = *(uint *)(lVar20 + 8 + (longlong)(int)(uVar8 & 0xffff) * 0x18);
                    if ((uVar8 >> 0x1d & 1) == 0) {
                      if ((uVar8 >> 0x1c & 1) == 0) {
                        uVar16 = *(uint *)((longlong)puVar1 + 0xc);
                        if ((0 < (int)uVar16) && ((uVar8 >> 0x17 & 1) == 0)) {
                          uVar24 = uVar16 & 0xffff;
                          *(uint *)(puVar1 + 1) = uVar8 | 0x800000;
                          if ((int)uVar16 < 0) {
                            uVar16 = uVar16 + 0xffff;
                            uVar24 = uVar24 - 0x10000;
                          }
                          lVar21 = *(longlong *)
                                    (DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8);
                          lVar20 = lVar21 + (longlong)(int)uVar24 * 0x18;
                          uVar8 = *(uint *)(lVar21 + 8 + (longlong)(int)uVar24 * 0x18);
                          if ((uVar8 >> 0x1c & 1) != 0) {
                            *(uint *)(lVar20 + 8) = uVar8 & 0xefffffff;
                            FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                      (~*(uint *)(lVar20 + 0xc),local_128);
                          }
                        }
                      }
                      else {
                        uVar2 = *puVar1;
                        *(uint *)(puVar1 + 1) = uVar8 & 0xefffffff;
                        iVar23 = (int)local_128[1];
                        *(int *)(local_128 + 1) = iVar23 + 1;
                        if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                    (local_128,iVar23);
                        }
                        *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                        if ((int)*(uint *)((longlong)puVar1 + 0xc) < 0) {
                          FGCReferenceProcessor<0>::MarkReferencedClustersAsReachable
                                    (~*(uint *)((longlong)puVar1 + 0xc),local_128);
                        }
                      }
                    }
                    else {
                      *puVar26 = 0xffffffff;
                      bVar6 = true;
                    }
                  }
                  puVar26 = puVar26 + 1;
                } while (puVar26 != puVar17);
                if (!bVar6) goto LAB_141744359;
              }
              lVar20 = local_c8;
              uVar25 = 0;
              puVar17 = *(uint **)(local_c8 + 8);
              uVar10 = (longlong)*(int *)(local_c8 + 0x10) & 0x3fffffffffffffff;
              if (puVar17 + *(int *)(local_c8 + 0x10) < puVar17) {
                uVar10 = uVar25;
              }
              if (uVar10 != 0) {
                do {
                  uVar8 = *puVar17;
                  uVar16 = uVar8 & 0xffff;
                  if ((int)uVar8 < 0) {
                    uVar8 = uVar8 + 0xffff;
                    uVar16 = uVar16 - 0x10000;
                  }
                  iVar23 = (int)local_128[1];
                  uVar2 = *(undefined8 *)
                           (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                           (longlong)(int)uVar16 * 0x18);
                  *(int *)(local_128 + 1) = iVar23 + 1;
                  if (*(int *)((longlong)local_128 + 0xc) < iVar23 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (local_128,iVar23);
                  }
                  puVar17 = puVar17 + 1;
                  uVar25 = uVar25 + 1;
                  *(undefined8 *)(*local_128 + (longlong)iVar23 * 8) = uVar2;
                } while (uVar25 != uVar10);
              }
LAB_1417446a2:
              *(undefined1 *)(lVar20 + 0x48) = 1;
              DAT_1469e8f34 = 1;
            }
          }
          else {
            *puVar1 = 0;
            if (DAT_1469e7298 != 0) {
              uVar8 = *(uint *)(lVar3 + 0xc);
              if ((int)uVar8 < (int)DAT_1469e91c4) {
                uVar24 = uVar8 & 0xffff;
                uVar16 = uVar8;
                if ((int)uVar8 < 0) {
                  uVar16 = uVar8 + 0xffff;
                  uVar24 = uVar24 - 0x10000;
                }
                lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar16 >> 0x10) * 8) +
                         (longlong)(int)uVar24 * 0x18;
              }
              if ((*(uint *)(lVar20 + 8) >> 0x1d & 1) == 0) {
                uVar16 = uVar8 & 0xffff;
                if ((int)uVar8 < 0) {
                  uVar8 = uVar8 + 0xffff;
                  uVar16 = uVar16 - 0x10000;
                }
                puVar17 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8)
                                   + 8 + (longlong)(int)uVar16 * 0x18);
                *puVar17 = *puVar17 | 0x80000000;
              }
            }
          }
        }
LAB_1417446b4:
        local_100 = local_100 + 1;
        plVar15 = local_140;
        lVar20 = local_130;
      } while (local_100 < local_e0);
    }
    goto LAB_141743880;
  case 4:
    local_140 = plVar15 + 3;
    plVar13 = (longlong *)((ulonglong)(uVar8 >> 0xc) + lVar20);
    lVar20 = *plVar13;
    *local_140 = lVar20;
    *(undefined4 *)(plVar15 + 4) = *(undefined4 *)(*plVar19 + (longlong)(int)uVar24 * 4);
    iVar7 = (int)plVar13[1];
    *(int *)((longlong)plVar15 + 0x24) = iVar7;
    uVar8 = *(int *)(*plVar19 + (longlong)(iVar23 + 2) * 4) + (iVar23 + 2) * 0x100;
    *(int *)(plVar15 + 5) = iVar23 + 3;
    local_130 = lVar20;
    if (iVar7 != 0) goto LAB_141744d89;
    uVar14 = (ulonglong)(uVar8 >> 8);
    plVar15 = local_140;
    local_138 = (uint)*(byte *)(*plVar19 + -4 + uVar14 * 4) - (uVar8 & 0xff);
    goto LAB_141743880;
  case 5:
    plVar15[3] = lVar20;
    *(undefined4 *)(plVar15 + 4) = *(undefined4 *)(*plVar19 + (longlong)(int)uVar24 * 4);
    *(undefined4 *)((longlong)plVar15 + 0x24) =
         *(undefined4 *)(*plVar19 + (longlong)(iVar23 + 2) * 4);
    *(int *)(plVar15 + 5) = iVar23 + 3;
LAB_141744d89:
    uVar14 = (ulonglong)(iVar23 + 3);
    local_140 = plVar15 + 3;
    plVar15 = local_140;
    local_138 = 0;
    goto LAB_141743880;
  case 6:
    uVar14 = (ulonglong)(iVar23 + 3);
    (*(code *)CONCAT44(*(undefined4 *)(lVar21 + (longlong)(iVar23 + 2) * 4),
                       *(undefined4 *)(lVar21 + (longlong)(int)uVar24 * 4)))
              ((ulonglong)(uVar8 >> 0xc) + lVar20,&local_b0);
    plVar15 = local_140;
    lVar20 = local_130;
    local_138 = uVar8 & 0xff;
    goto LAB_141743880;
  case 7:
    uVar14 = (ulonglong)(iVar23 + 3);
    (*(code *)CONCAT44(*(undefined4 *)(lVar21 + (longlong)(iVar23 + 2) * 4),
                       *(undefined4 *)(lVar21 + (longlong)(int)uVar24 * 4)))(lVar3,&local_b0);
    plVar15 = local_140;
    lVar20 = local_130;
    local_138 = uVar8 & 0xff;
    goto LAB_141743880;
  case 8:
  case 9:
    uVar14 = (ulonglong)(iVar23 + 3);
    plVar15 = (longlong *)
              CONCAT44(*(undefined4 *)(lVar21 + (longlong)(iVar23 + 2) * 4),
                       *(undefined4 *)(lVar21 + (longlong)(int)uVar24 * 4));
    if (local_a8 == 0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_b0);
    }
    (**(code **)(*plVar15 + 0x2c0))(plVar15,local_a8,(ulonglong)(uVar8 >> 0xc) + lVar20,0);
    plVar15 = local_140;
    lVar20 = local_130;
    break;
  case 10:
    local_138 = uVar8 & 0xff;
    goto LAB_141743880;
  case 0xb:
    goto switchD_141743909_caseD_b;
  default:
    goto switchD_141743909_default;
  }
  local_138 = uVar8 & 0xff;
  goto LAB_141743880;
switchD_141743909_default:
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    local_d8 = (undefined2 *)0x0;
    local_d0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,&DAT_143f3edc8,10);
  }
  else {
    local_80 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18);
    FName::ToString(&local_80,&local_d8);
  }
  puVar12 = &DAT_143f3eda8;
  if ((int)local_d0 != 0) {
    puVar12 = local_d8;
  }
  UObjectBaseUtility::GetPathName(lVar3,&local_60,0);
  puVar11 = &DAT_143f3eda8;
  if (local_58 != 0) {
    puVar11 = local_60;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x328,L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",
             uVar16,iVar23,puVar12,puVar11);
  uVar27 = (undefined4)((ulonglong)puVar12 >> 0x20);
  if (local_60 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar15 = *(longlong **)(lVar3 + 0x10);
  if (plVar15 == (longlong *)0x0) {
    local_f0 = 5;
    local_f8 = plVar15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
  }
  else {
    local_78 = plVar15[3];
    FName::ToString(&local_78,&local_f8);
  }
  plVar15 = (longlong *)&DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    plVar15 = local_f8;
  }
  UObjectBaseUtility::GetPathName(lVar3,&local_50,0);
  puVar12 = &DAT_143f3eda8;
  if (local_48 != 0) {
    puVar12 = local_50;
  }
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x328,
             L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",uVar16,
             CONCAT44(uVar27,iVar23),plVar15,puVar12);
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar15 = local_140;
  lVar20 = local_130;
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  goto LAB_141743880;
switchD_141743909_caseD_b:
  uVar14 = (ulonglong)local_e8;
  local_140 = local_c0;
  param_1 = local_68;
  param_2 = local_70;
  uVar10 = local_b8;
  if ((int)local_70[1] <= (int)local_e8) goto LAB_14174506a;
  goto LAB_1417437c0;
}



// FUNCTION 141745120 Push body=416 status=ok
// SIG undefined Push(void)

ulonglong FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  puVar4 = (ulonglong *)0x0;
  if (uVar2 != 0) {
    puVar4 = (ulonglong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18);
  }
  puVar4[1] = param_2;
  do {
    while( true ) {
      do {
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 0x108);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 0x108) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        puVar4 = (ulonglong *)0x0;
        if ((uVar3 & 0x3ffffff) != 0) {
          puVar4 = (ulonglong *)
                   ((&DAT_1468a81f8)[((uint)uVar3 & 0x3ffffff) >> 0xe] +
                   (ulonglong)((uint)uVar3 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar5 = *puVar4;
        if (uVar5 == 0) {
          *puVar4 = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar6 = *(ulonglong *)(param_1 + 0x108);
        if (uVar6 == 0) {
          *(ulonglong *)(param_1 + 0x108) = 0;
          uVar6 = 0;
        }
        UNLOCK();
      } while (uVar6 != uVar3);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar6 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
      if (uVar6 < (uVar3 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      LOCK();
      if (uVar3 == *(ulonglong *)(param_1 + 0x108)) {
        *(ulonglong *)(param_1 + 0x108) = (uint)uVar5 & 0x3ffffff | uVar6;
      }
      UNLOCK();
    }
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    LOCK();
    uVar1 = *puVar4;
    if (uVar5 == uVar1) {
      *puVar4 = uVar2 | uVar6;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
    LockFreeTagCounterHasOverflowed();
  }
  LOCK();
  uVar6 = *(ulonglong *)(param_1 + 0x108);
  if (uVar3 == uVar6) {
    *(ulonglong *)(param_1 + 0x108) = uVar2 | uVar5;
    uVar6 = uVar3;
  }
  UNLOCK();
  return uVar6;
}



// FUNCTION 1417452c0 Rehash body=653 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1417453ff;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1417453ff:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar16 = (undefined8 *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar10 = *(uint *)(puVar16 + 1);
        uVar12 = ((int)((ulonglong)*puVar16 >> 0x20) - uVar10) + (int)*puVar16 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar16 + 0x1c) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar16 + 3) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141745550 Remove body=424 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar5 = FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar11 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)iVar5 & uVar11) * 4);
  if (iVar5 != -1) {
    lVar3 = *param_1;
    do {
      lVar9 = (longlong)iVar5;
      piVar8 = (int *)(lVar9 * 0x20 + lVar3);
      if (((piVar8[1] == param_2[1] && piVar8[2] == param_2[2]) && piVar8[3] == param_2[3]) &&
          *param_2 == *piVar8) {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_141745673;
        uVar11 = (longlong)*(int *)(lVar9 * 0x20 + 0x1c + lVar3) & uVar11;
        piVar8 = (int *)((longlong)plVar7 + uVar11 * 4);
        iVar2 = *(int *)((longlong)plVar7 + uVar11 * 4);
        goto joined_r0x00014174564f;
      }
      iVar5 = piVar8[6];
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x00014174564f:
  if (iVar2 == -1) {
LAB_141745673:
    bVar4 = (byte)iVar5 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
    }
    uVar6 = 0xffffffff;
    puVar10 = (undefined4 *)(lVar9 * 0x20 + *param_1);
    *puVar10 = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar6 = (undefined4)param_1[6];
    }
    puVar10[1] = uVar6;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar5;
    plVar7 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar5) {
    *piVar8 = *(int *)(lVar9 * 0x20 + 0x18 + lVar3);
    goto LAB_141745673;
  }
  piVar8 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar8;
  goto joined_r0x00014174564f;
}



// FUNCTION 141745700 RemoveAllAnnotations body=147 status=ok
// SIG undefined RemoveAllAnnotations(void)

void FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAllAnnotations(longlong param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 8,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014174578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417457a0 RemoveAnnotation body=171 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141745844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 141745850 RemoveAnnotation body=299 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res8,param_2);
  if (local_res8[0] != -1) {
    puVar1 = (undefined8 *)((longlong)local_res8[0] * 0x20 + 8 + *(longlong *)(param_1 + 8));
    local_38 = *puVar1;
    uStack_30 = puVar1[1];
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 8);
  }
  if ((0 < iVar2 - iVar3) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (((uStack_30._4_4_ != 0 || (int)uStack_30 != 0) || local_38._4_4_ != 0) || (int)local_38 != 0)
  {
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x98,&local_38);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  return;
}



// FUNCTION 141745980 RemoveAtImpl body=233 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TFunction<bool___cdecl(double)>,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x30 + (longlong)param_2 * 0x50);
    iVar4 = param_3;
    do {
      if ((int)plVar3[2] != 0) {
        plVar2 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar2 = plVar3 + -4;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x50),
                 (void *)((longlong)(param_2 + param_3) * 0x50 + *param_1),(longlong)iVar1 * 0x50);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141745a70 RemoveNamesFromMasterList body=252 status=ok
// SIG undefined RemoveNamesFromMasterList(void)

void UEnum::RemoveNamesFromMasterList(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x48) * 2;
  lVar6 = DAT_1464b4cb0;
  do {
    if (plVar4 == plVar5) {
      return;
    }
    if (DAT_1464b4cb8 != DAT_1464b4ce4) {
      puVar2 = DAT_1464b4cf0;
      if (DAT_1464b4cf0 == (undefined *)0x0) {
        puVar2 = &DAT_1464b4ce8;
      }
      iVar1 = *(int *)(puVar2 + (longlong)
                                (int)(*(int *)((longlong)plVar4 + 4) + (int)*plVar4 &
                                     DAT_1464b4cf8 - 1U) * 4);
      while (iVar1 != -1) {
        lVar3 = (longlong)iVar1;
        if (*(longlong *)(lVar6 + lVar3 * 0x18) == *plVar4) {
          if ((iVar1 != -1) && (lVar3 = lVar6 + lVar3 * 0x18, lVar3 != 0)) {
            lVar3 = *(longlong *)(lVar3 + 8);
            goto LAB_141745b1a;
          }
          break;
        }
        iVar1 = *(int *)(lVar6 + 0x10 + lVar3 * 0x18);
      }
    }
    lVar3 = 0;
LAB_141745b1a:
    if (lVar3 == param_1) {
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Remove(&DAT_1464b4cb0);
      lVar6 = DAT_1464b4cb0;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}



// FUNCTION 141745b70 FUN_141745b70 body=504 status=ok
// SIG undefined FUN_141745b70(void)

void FUN_141745b70(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  wchar_t *_Source;
  undefined8 local_res8;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  
  iVar8 = *(int *)(param_1 + 0x48);
  if (iVar8 != 0) {
    pwVar3 = (wchar_t *)0x0;
    if ((iVar8 < 1) || (iVar8 <= iVar8 + -1)) {
      local_res8 = 0;
    }
    else {
      local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + -0x10 + (longlong)iVar8 * 0x10);
    }
    FName::ToString(&local_res8,&local_58);
    iVar1 = FUN_141592950(&local_58,&DAT_144d0b8f4,0,0,0xffffffff);
    iVar8 = 0;
    if (local_50 == 0) {
      _Source = L"";
      iVar4 = iVar8;
    }
    else {
      _Source = local_58;
      iVar4 = local_50 + -1;
    }
    if ((-1 < iVar1) && (iVar8 = iVar4, iVar1 < iVar4)) {
      iVar8 = iVar1;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    iVar1 = iVar8 + 1;
    if (iVar8 == 0) {
      iVar1 = 0;
    }
    local_40 = iVar1;
    if ((0 < iVar1) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar1 = local_40,
       pwVar3 = local_48, 0 < local_40)) {
      wcsncpy(local_48,_Source,(longlong)iVar8);
      pwVar3[iVar8] = L'\0';
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_4c = local_3c;
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    local_58 = pwVar3;
    local_50 = iVar1;
    FName::ToString(&local_res8,&local_38);
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x48) * 2;
    for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
      FName::ToString(puVar5,&local_48);
      puVar7 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar7 = local_38;
      }
      pwVar3 = L"";
      if (local_50 != 0) {
        pwVar3 = local_58;
      }
      FString::ReplaceInline(&local_48,pwVar3,puVar7,1);
      pwVar3 = L"";
      if (local_40 != 0) {
        pwVar3 = local_48;
      }
      puVar2 = (undefined8 *)FName::FName(&local_res8,pwVar3,1);
      *puVar5 = *puVar2;
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141745d70 FUN_141745d70 body=354 status=ok
// SIG undefined FUN_141745d70(void)

void FUN_141745d70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = (int)param_1[1];
  iVar5 = 0;
  uVar2 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (0 < iVar4) {
    do {
      lVar1 = *param_1;
      lVar6 = (longlong)iVar5;
      uVar3 = *(uint *)(lVar1 + lVar6 * 4) >> 8 & 0xf;
      switch(uVar3) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 10:
      case 0xb:
        break;
      case 4:
        iVar5 = ((uint)(*(int *)(lVar1 + (longlong)(iVar5 + 2) * 4) + (iVar5 + 2) * 0x100) >> 8) - 1
        ;
        break;
      case 5:
      case 6:
      case 8:
      case 9:
        iVar5 = iVar5 + 2;
        break;
      case 7:
        *(int *)(lVar1 + 4 + lVar6 * 4) = (int)param_2;
        *(undefined4 *)(lVar1 + 8 + lVar6 * 4) = uVar2;
        return;
      default:
        LowLevelFatalErrorHandler
                  ("Unknown",0x983,L"Unknown token type (%u) when trying to add ARO token.",uVar3);
        FDebug::AssertFailed
                  (&DAT_144d072b7,"Unknown",0x983,
                   L"Unknown token type (%u) when trying to add ARO token.",uVar3);
      }
      iVar4 = (int)param_1[1];
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar4 * 4) = 0x700;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  lVar1 = *param_1;
  *(int *)(lVar1 + (longlong)iVar4 * 4) = (int)param_2;
  *(undefined4 *)(lVar1 + 4 + (longlong)iVar4 * 4) = uVar2;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar4 * 4) = 0xa00;
  return;
}



// FUNCTION 141745f10 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
     Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141745fc0 ResetLoaders body=46 status=ok
// SIG undefined ResetLoaders(void)

void ResetLoaders(undefined8 param_1)

{
  undefined8 uVar1;
  
  (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  FUN_1416f7d70(0xffffffff);
  uVar1 = FUN_1417555a0();
  FUN_14175f2c0(uVar1,param_1);
  return;
}



// FUNCTION 141745ff0 ResetPIEFixups body=56 status=ok
// SIG undefined ResetPIEFixups(void)

void FLazyObjectPtr::ResetPIEFixups(void)

{
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
            (&DAT_1469e7370 + (longlong)(DAT_1464aaa88 % 10) * 10);
  return;
}



// FUNCTION 141746030 ResetStatusInfo body=90 status=ok
// SIG undefined ResetStatusInfo(void)

void FLinkerLoad::ResetStatusInfo(longlong param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x200;
  UGameUserSettings::SetPostProcessingQuality(param_1,0x204);
  FArchive::SetLicenseeUE4Ver(param_1,0x1a);
  uVar1 = FEngineVersion::Current();
  FArchive::SetEngineVer(param_1,uVar1);
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,1);
  FUN_141693490(param_1);
  return;
}



// FUNCTION 1417460a0 ResolveObject body=287 status=ok
// SIG undefined ResolveObject(void)

undefined8 FUniqueObjectGuid::ResolveObject(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  local_18 = *param_1;
  iStack_14 = param_1[1];
  iStack_10 = param_1[2];
  iStack_c = param_1[3];
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
  }
  uVar4 = 0;
  if (DAT_1464b4e10 != DAT_1464b4e3c) {
    iVar2 = FCrc::MemCrc_DEPRECATED(&local_18,0x10,0);
    puVar3 = DAT_1464b4e48;
    if (DAT_1464b4e48 == (undefined *)0x0) {
      puVar3 = &DAT_1464b4e40;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)DAT_1464b4e50 - 1U & (longlong)iVar2) * 4);
    while (iVar2 != -1) {
      piVar5 = (int *)((longlong)iVar2 * 0x20 + DAT_1464b4e08);
      if (((piVar5[1] == iStack_14 && piVar5[2] == iStack_10) && piVar5[3] == iStack_c) &&
          *piVar5 == local_18) {
        if ((iVar2 != -1) && (lVar6 = (longlong)iVar2 * 0x20 + DAT_1464b4e08, lVar6 != 0)) {
          uVar4 = *(undefined8 *)(lVar6 + 0x10);
        }
        break;
      }
      iVar2 = piVar5[6];
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4e58);
  return uVar4;
}



// FUNCTION 1417461c0 SameType body=61 status=ok
// SIG undefined SameType(void)

ulonglong UEnumProperty::SameType(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = UProperty::SameType();
  if (((char)uVar1 != '\0') &&
     (uVar1 = *(ulonglong *)(param_1 + 0x78), *(ulonglong *)(param_2 + 0x78) == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141746220 Serialize body=49 status=ok
// SIG undefined Serialize(void)

void FGenerationInfo::Serialize(longlong param_1,undefined8 *param_2)

{
  FUN_1415d6020(*param_2,param_1);
  FUN_1415d6020(*param_2,param_1 + 4);
  return;
}



// FUNCTION 141746260 Serialize body=175 status=ok
// SIG undefined Serialize(void)

void FLinker::Serialize(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x2a) & 0x20) != 0) {
    FUN_14172aef0(param_2,param_1 + 8);
    FUN_14172ad60(param_2,param_1 + 0x18);
    FUN_14172b080(param_2,param_1 + 0x28);
    FUN_14172b230(param_2,param_1 + 0x38);
    FUN_14172ab80(param_2,param_1 + 0x1d0);
    FUN_14172b5a0(param_2,param_1 + 0x48);
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x88),0,0);
        *(undefined8 *)(param_1 + 0x88) = uVar1;
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x48,*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c),0);
    }
  }
  return;
}



// FUNCTION 141746320 FUN_141746320 body=603 status=ok
// SIG undefined FUN_141746320(void)

void FUN_141746320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong local_res10;
  undefined8 *local_38;
  ulonglong local_30;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0058);
  FUN_1417233a0(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
LAB_1417464be:
    FUN_14172a9e0(param_2,param_1 + 0x40);
  }
  else {
    if ((int)param_2[8] < 0x1cf) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_14172b230(param_2,&local_38);
      puVar9 = local_38 + (int)local_30;
      lVar6 = 0;
      lVar7 = local_res10;
      puVar4 = local_38;
      for (puVar8 = local_38; local_res10 = lVar6, local_38 = puVar4, puVar8 != puVar9;
          puVar8 = puVar8 + 1) {
        iVar3 = *(int *)(param_1 + 0x48);
        lVar6 = local_res10 + 1;
        *(int *)(param_1 + 0x48) = iVar3 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x40,iVar3);
        }
        puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x40));
        *puVar4 = *puVar8;
        puVar4[1] = local_res10;
        lVar7 = local_res10;
        puVar4 = local_38;
      }
    }
    else {
      iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0058);
      if (1 < iVar3) goto LAB_1417464be;
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_14172a7f0(param_2,&local_38);
      lVar7 = (longlong)(int)local_30;
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x4c) < (int)local_30) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x40,local_30 & 0xffffffff);
      }
      puVar4 = local_38;
      puVar8 = local_38 + lVar7 * 2;
      for (puVar9 = local_38; lVar7 = local_res10, puVar9 != puVar8; puVar9 = puVar9 + 2) {
        iVar3 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar3 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x40,iVar3);
        }
        puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x40));
        *puVar5 = *puVar9;
        puVar5[1] = (ulonglong)*(byte *)(puVar9 + 1);
      }
    }
    local_res10 = lVar7;
    if (puVar4 != (undefined8 *)0x0) {
      FMemory::Free(puVar4);
    }
  }
  if ((int)param_2[8] < 0x186) {
    (**(code **)(*param_2 + 8))(param_2,&local_res10);
    bVar2 = (byte)local_res10 != '\0';
  }
  else {
    plVar1 = (longlong *)param_2[1];
    local_res10 = CONCAT71(local_res10._1_7_,*(undefined1 *)(param_1 + 0x50));
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res10,1);
    }
    else {
      local_res10 = CONCAT71(local_res10._1_7_,*(undefined1 *)*plVar1);
      *plVar1 = *plVar1 + 1;
    }
    bVar2 = (byte)local_res10;
  }
  *(uint *)(param_1 + 0x50) = (uint)bVar2;
  if ((*(byte *)(param_2 + 5) & 3) != 0) {
    if (((*(uint *)(param_2 + 6) >> 0xc & 1) != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      FUN_141745b70(param_1);
    }
    FUN_14172c970(param_1);
  }
  return;
}



// FUNCTION 141746580 FUN_141746580 body=104 status=ok
// SIG undefined FUN_141746580(void)

void FUN_141746580(longlong param_1,longlong *param_2)

{
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
  }
  return;
}



// FUNCTION 1417465f0 FUN_1417465f0 body=581 status=ok
// SIG undefined FUN_1417465f0(void)

undefined8 FUN_1417465f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  
  if ((((*(byte *)(param_1 + 0x228) & 8) == 0) && (*(int *)(param_1 + 0x754) == 0)) &&
     (0 < *(int *)(param_1 + 0x100))) {
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0xa8))
              (*(longlong **)(param_1 + 0x318),(longlong)*(int *)(param_1 + 0x104));
  }
  iVar2 = *(int *)(param_1 + 0x754);
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  if (iVar2 < *(int *)(param_1 + 0x100)) {
    do {
      iVar4 = *(int *)(param_1 + 0x76c) + 1;
      *(int *)(param_1 + 0x76c) = iVar4;
      if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
        if (*(char *)(param_1 + 0x766) != '\0') break;
        if ((*(char *)(param_1 + 0x767) != '\0') && (iVar4 == (iVar4 / 100) * 100)) {
          QueryPerformanceCounter(&local_res8);
          iVar2 = *(int *)(param_1 + 0x754);
          *(bool *)(param_1 + 0x766) =
               (double)*(float *)(param_1 + 0x770) <
               ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x778);
        }
      }
      if (*(char *)(param_1 + 0x766) != '\0') break;
      iVar2 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar2 + 1;
      if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x18,iVar2);
      }
      if ((longlong)iVar2 * 0x88 + *(longlong *)(param_1 + 0x18) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FObjectExport::FObjectExport();
      }
      FUN_14174e690(uVar1,lVar3);
      iVar2 = *(int *)(param_1 + 0x754) + 1;
      *(int *)(lVar3 + 0x14) = iVar2;
      if ((((*(char *)(lVar3 + 0x59) == '\0') && (*(char *)(lVar3 + 0x5b) == '\0')) &&
          ((*(char *)(param_1 + 0x1f0) == '\0' || (*(char *)(lVar3 + 0x56) == '\0')))) &&
         ((*(char *)(param_1 + 0x1f1) == '\0' || (*(char *)(lVar3 + 0x55) == '\0')))) {
        bVar5 = iVar2 == 0;
      }
      else {
        bVar5 = true;
      }
      *(bool *)(lVar3 + 0x5b) = bVar5;
      iVar2 = *(int *)(param_1 + 0x754) + 1;
      *(int *)(param_1 + 0x754) = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x100));
  }
  if (iVar2 == *(int *)(param_1 + 0x100)) {
    *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
    if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
      if (*(char *)(param_1 + 0x766) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x767) != '\0') {
        QueryPerformanceCounter(&local_res8);
        *(bool *)(param_1 + 0x766) =
             (double)*(float *)(param_1 + 0x770) <
             ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(param_1 + 0x778);
      }
    }
    if (*(char *)(param_1 + 0x766) == '\0') {
      return 1;
    }
  }
  return 2;
}



// FUNCTION 141746840 FUN_141746840 body=506 status=ok
// SIG undefined FUN_141746840(void)

undefined8 FUN_141746840(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  
  if ((((*(byte *)(param_1 + 0x228) & 8) == 0) && (*(int *)(param_1 + 0x750) == 0)) &&
     (0 < *(int *)(param_1 + 0x108))) {
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0xa8))
              (*(longlong **)(param_1 + 0x318),(longlong)*(int *)(param_1 + 0x10c));
  }
  iVar3 = *(int *)(param_1 + 0x750);
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  if (iVar3 < *(int *)(param_1 + 0x108)) {
    do {
      iVar4 = *(int *)(param_1 + 0x76c) + 1;
      *(int *)(param_1 + 0x76c) = iVar4;
      if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
        if (*(char *)(param_1 + 0x766) != '\0') break;
        if ((*(char *)(param_1 + 0x767) != '\0') && (iVar4 == (iVar4 / 100) * 100)) {
          QueryPerformanceCounter(&local_res8);
          iVar3 = *(int *)(param_1 + 0x750);
          *(bool *)(param_1 + 0x766) =
               (double)*(float *)(param_1 + 0x770) <
               ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x778);
        }
      }
      if (*(char *)(param_1 + 0x766) != '\0') break;
      iVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3 + 1;
      if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 8,iVar3);
      }
      if ((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 8) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FObjectImport::FObjectImport();
      }
      FUN_14174e860(uVar1,uVar2);
      iVar3 = *(int *)(param_1 + 0x750) + 1;
      *(int *)(param_1 + 0x750) = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x108));
  }
  if (iVar3 == *(int *)(param_1 + 0x108)) {
    *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
    if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
      if (*(char *)(param_1 + 0x766) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x767) != '\0') {
        QueryPerformanceCounter(&local_res8);
        *(bool *)(param_1 + 0x766) =
             (double)*(float *)(param_1 + 0x770) <
             ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(param_1 + 0x778);
      }
    }
    if (*(char *)(param_1 + 0x766) == '\0') {
      return 1;
    }
  }
  return 2;
}



// FUNCTION 141746a40 FUN_141746a40 body=476 status=ok
// SIG undefined FUN_141746a40(void)

void FUN_141746a40(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res8;
  
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (cVar1 = (**(code **)(*param_2 + 0x140))(param_2), cVar1 == '\0')) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_2 + 5) & 2) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))
                  (*(longlong **)(param_1 + 0x70),param_2,param_3,param_4);
      }
      else {
        local_res8 = 0;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x3a8))
                            (*(longlong **)(param_1 + 0x70),param_3);
          lVar5 = *(longlong *)(param_1 + 0x78);
          if (0 < *(int *)(lVar5 + 0x48)) {
            plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 8);
            lVar8 = 0;
            while (*plVar6 != lVar4) {
              lVar8 = lVar8 + 1;
              plVar6 = plVar6 + 2;
              if (*(int *)(lVar5 + 0x48) <= lVar8) {
                (**(code **)(*param_2 + 0x40))(param_2,&local_res8);
                return;
              }
            }
            plVar6 = *(longlong **)(lVar5 + 0x40);
            plVar7 = plVar6 + (longlong)*(int *)(lVar5 + 0x48) * 2;
            for (; local_res8 = 0, plVar6 != plVar7; plVar6 = plVar6 + 2) {
              if (plVar6[1] == lVar4) {
                local_res8 = *plVar6;
                break;
              }
            }
          }
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_res8);
      }
    }
    else {
      uVar3 = 0;
      local_res8 = 0;
      (**(code **)(*param_2 + 0x40))(param_2,&local_res8);
      lVar5 = *(longlong *)(param_1 + 0x78);
      if (lVar5 != 0) {
        if ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0) {
          (**(code **)(*param_2 + 0x70))(param_2,lVar5);
          lVar5 = *(longlong *)(param_1 + 0x78);
        }
        iVar2 = UEnum::GetIndexByName(lVar5,local_res8,1);
        if (iVar2 == -1) {
          uVar3 = UEnum::GetMaxEnumValue(*(longlong *)(param_1 + 0x78));
        }
        else {
          uVar3 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 8 + (longlong)iVar2 * 0x10
                   );
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x388))
                (*(longlong **)(param_1 + 0x70),param_3,uVar3);
    }
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x3a8))
                      (*(longlong **)(param_1 + 0x70),param_3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x290))
                      (*(longlong **)(param_1 + 0x78),param_2,uVar3);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x388))
              (*(longlong **)(param_1 + 0x70),param_3,uVar3);
  }
  return;
}



// FUNCTION 141746c20 SerializeItem body=83 status=ok
// SIG undefined SerializeItem(void)

void UProperty::SerializeItem(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x131,L"Pure virtual not implemented (%s)",L"UProperty::SerializeItem");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x131,L"Pure virtual not implemented (%s)",L"UProperty::SerializeItem");
  return;
}



// FUNCTION 141746c80 FUN_141746c80 body=770 status=ok
// SIG undefined FUN_141746c80(void)

undefined8 FUN_141746c80(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  undefined1 local_848 [2052];
  undefined4 local_44;
  undefined1 local_40;
  
  cVar3 = '\x01';
  iVar6 = *(int *)(param_1 + 0x748);
  iVar5 = iVar6;
  if (iVar6 == 0) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      iVar5 = 0;
      if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x318) + 0xa8))
                  (*(longlong **)(param_1 + 0x318),(longlong)*(int *)(param_1 + 0xe4));
        iVar5 = *(int *)(param_1 + 0x748);
        iVar6 = iVar5;
      }
      if (*(int *)(param_1 + 200) < 1) {
        cVar3 = '\x01';
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x318);
        if (*(char *)(param_1 + 0x2a2) == '\0') {
          cVar3 = (**(code **)(*plVar1 + 200))
                            (plVar1,(longlong)*(int *)(param_1 + 0xe4),
                             (longlong)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xe4)));
          iVar5 = *(int *)(param_1 + 0x748);
          iVar6 = iVar5;
        }
        else {
          cVar3 = FArchiveAsync2::ReadyToStartReadingHeader
                            (plVar1,*(undefined1 *)(param_1 + 0x767),
                             *(undefined1 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x778),
                             *(undefined4 *)(param_1 + 0x770));
          iVar5 = *(int *)(param_1 + 0x748);
          iVar6 = iVar5;
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2b8);
  if (cVar3 != '\0') {
    while (iVar5 = iVar6, iVar5 < *(int *)(param_1 + 0xe0)) {
      iVar6 = *(int *)(param_1 + 0x76c) + 1;
      *(int *)(param_1 + 0x76c) = iVar6;
      if (((((*(byte *)(param_1 + 0x228) & 8) == 0) && (*(char *)(param_1 + 0x766) == '\0')) &&
          (*(char *)(param_1 + 0x767) != '\0')) && (iVar6 == (iVar6 / 100) * 100)) {
        QueryPerformanceCounter(&local_res8);
        iVar5 = *(int *)(param_1 + 0x748);
        *(bool *)(param_1 + 0x766) =
             (double)*(float *)(param_1 + 0x770) <
             ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(param_1 + 0x778);
      }
      if (*(char *)(param_1 + 0x766) != '\0') break;
      local_44 = 0;
      local_40 = 0;
      operator<<(uVar2,local_848);
      puVar4 = (undefined8 *)FName::FName(local_res10,local_848);
      iVar6 = *(int *)(param_1 + 0x1c8);
      *(int *)(param_1 + 0x1c8) = iVar6 + 1;
      if (*(int *)(param_1 + 0x1cc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c0,iVar6);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 8) = *puVar4;
      *(int *)(param_1 + 0x748) = *(int *)(param_1 + 0x748) + 1;
      iVar6 = *(int *)(param_1 + 0x748);
    }
  }
  if (iVar5 == *(int *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
    if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
      if (*(char *)(param_1 + 0x766) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x767) != '\0') {
        QueryPerformanceCounter(&local_res8);
        *(bool *)(param_1 + 0x766) =
             (double)*(float *)(param_1 + 0x770) <
             ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(param_1 + 0x778);
      }
    }
    if (*(char *)(param_1 + 0x766) == '\0') {
      return 1;
    }
  }
  return 2;
}



// FUNCTION 141746f90 FUN_141746f90 body=1255 status=ok
// SIG undefined FUN_141746f90(void)

char FUN_141746f90(longlong param_1)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 extraout_var;
  byte bVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined2 *puVar17;
  bool bVar18;
  LARGE_INTEGER local_res8;
  longlong local_28;
  longlong lStack_20;
  
  if (*(char *)(param_1 + 0x760) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x318) + 0x28) < '\0') {
      return '\0';
    }
    if (*(char *)(param_1 + 0x2a2) != '\0') {
      FArchiveAsync2::StartReadingHeader();
    }
    FUN_14174e8e0(*(undefined8 *)(param_1 + 0x2b8),param_1 + 0xa8);
    if (*(int *)(param_1 + 0xa8) != -0x61d57c3f) {
      return '\0';
    }
    if (*(int *)(param_1 + 0xac) < 0xd6) {
      return '\0';
    }
    uVar8 = FEngineVersion::Current();
    cVar6 = FEngineVersion::IsCompatibleWith(uVar8,param_1 + 0x168);
    if (cVar6 == '\0') {
      return '\0';
    }
    uVar8 = FCommandLine::Get();
    cVar6 = FParse::Param(uVar8,L"IgnoreVerCheck");
    bVar18 = cVar6 == '\0';
    if (cVar6 == '\0') {
      local_res8.s.LowPart = 0x7fffffff;
      uVar8 = FCommandLine::Get();
      cVar6 = FParse::Value(uVar8,L"IgnoreVerCheck=",&local_res8);
      if ((cVar6 == '\0') || (*(DWORD *)(param_1 + 0xb0) != local_res8.s.LowPart)) {
        bVar18 = *(int *)(param_1 + 0xb0) != 0x7fffffff;
        goto LAB_141747084;
      }
    }
    else {
LAB_141747084:
      if (bVar18) {
        if (0x204 < *(int *)(param_1 + 0xac)) {
          return '\0';
        }
        if (0x1a < *(int *)(param_1 + 0xb0)) {
          return '\0';
        }
      }
    }
    if (-1 < *(int *)(param_1 + 0xcc)) {
      return '\0';
    }
    if (((0 < *(int *)(param_1 + 0x1b8)) && (0 < *(int *)(param_1 + 0x1bc))) &&
       (cVar6 = FUN_1416fbbb0(), cVar6 == '\0')) {
      puVar9 = (undefined8 *)FLinkerLoad::GetArchiveName(param_1 + 0x200,&local_28);
      puVar12 = &DAT_143f3eda8;
      if (*(int *)(puVar9 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar9;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x4ca,
                 L"Package %s contains preload dependency data but the current build does not support it. Make sure Event Driven Loader is enabled and rebuild the game executable."
                 ,puVar17);
      if (local_28 != 0) {
        FMemory::Free();
      }
      puVar9 = (undefined8 *)FLinkerLoad::GetArchiveName(param_1 + 0x200,&local_28);
      if (*(int *)(puVar9 + 1) != 0) {
        puVar12 = (undefined2 *)*puVar9;
      }
      FDebug::AssertFailed
                (&DAT_144d0801e,"Unknown",0x4ca,
                 L"Package %s contains preload dependency data but the current build does not support it. Make sure Event Driven Loader is enabled and rebuild the game executable."
                 ,puVar12);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    lVar10 = FCustomVersionContainer::GetRegistered();
    iVar15 = 1;
    bVar18 = true;
    iVar16 = 0;
    if (*(char *)(param_1 + 400) == '\0') {
      while ((-1 < iVar16 && (iVar16 < *(int *)(param_1 + 0xc0)))) {
        plVar13 = (longlong *)((longlong)iVar16 * 0x20 + *(longlong *)(param_1 + 0xb8));
        local_28 = *plVar13;
        lStack_20 = plVar13[1];
        DVar7 = FCustomVersionContainer::GetVersion();
        if (CONCAT44(extraout_var,DVar7) == 0) {
          iVar15 = 0;
          iVar16 = iVar16 + 1;
        }
        else {
          iVar1 = *(int *)(CONCAT44(extraout_var,DVar7) + 0x10);
          if (iVar1 < (int)plVar13[2]) {
            return '\0';
          }
          if ((int)plVar13[2] != iVar1) {
            iVar15 = 0;
          }
          iVar16 = iVar16 + 1;
        }
      }
      if ((*(int *)(param_1 + 0xc0) == *(int *)(lVar10 + 8)) && ((char)iVar15 != '\0')) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x1a8))
              (*(longlong **)(param_1 + 0x318),*(undefined4 *)(param_1 + 0xac));
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x1b0))
              (*(longlong **)(param_1 + 0x318),*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x1b8))
              (*(longlong **)(param_1 + 0x318),param_1 + 0x148);
    UGameUserSettings::SetPostProcessingQuality(param_1 + 0x200,*(undefined4 *)(param_1 + 0xac));
    FArchive::SetLicenseeUE4Ver(param_1 + 0x200,*(undefined4 *)(param_1 + 0xb0));
    FArchive::SetEngineVer(param_1 + 0x200,param_1 + 0x148);
    puVar9 = (undefined8 *)(param_1 + 0xb8);
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x128))(*(longlong **)(param_1 + 0x318),puVar9);
    FUN_141695050(param_1 + 0x200,puVar9);
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (lVar10 != 0) {
      uVar2 = *(uint *)(param_1 + 0xcc) | 0x100000;
      if ((*(uint *)(lVar10 + 0x50) >> 0x14 & 1) == 0) {
        uVar2 = *(uint *)(param_1 + 0xcc);
      }
      *(uint *)(lVar10 + 0x50) = uVar2;
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar10 + 0x40,param_1 + 0x1a8);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x98))();
      *(undefined8 *)(lVar10 + 0x80) = uVar8;
      uVar3 = *(undefined4 *)(param_1 + 0x128);
      uVar4 = *(undefined4 *)(param_1 + 300);
      uVar5 = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_1 + 0x124);
      *(undefined4 *)(lVar10 + 0x34) = uVar3;
      *(undefined4 *)(lVar10 + 0x38) = uVar4;
      *(undefined4 *)(lVar10 + 0x3c) = uVar5;
      *(undefined4 *)(lVar10 + 0x68) = *(undefined4 *)(param_1 + 0x240);
      *(undefined4 *)(lVar10 + 0x6c) = *(undefined4 *)(param_1 + 0x244);
      if ((!bVar18) && (puVar14 = (undefined8 *)(lVar10 + 0x70), puVar14 != puVar9)) {
        iVar16 = *(int *)(param_1 + 0xc0);
        _Src = (void *)*puVar9;
        *(int *)(lVar10 + 0x78) = iVar16;
        if ((iVar16 == 0) && (*(int *)(lVar10 + 0x7c) == 0)) {
          *(undefined4 *)(lVar10 + 0x7c) = 0;
        }
        else {
          TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar14,iVar16);
          _guard_xfg_dispatch_icall_nop((void *)*puVar14,_Src,(longlong)iVar16 << 5);
        }
      }
    }
    bVar11 = *(byte *)(param_1 + 0x22a) & 0xfb;
    if ((*(uint *)(param_1 + 0xcc) & 0x80000) == 0) {
      bVar11 = *(byte *)(param_1 + 0x22a) | 4;
    }
    *(byte *)(param_1 + 0x22a) = bVar11;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x108)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x100)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo()
      ;
    }
    TArray<FGatherableTextData,FDefaultAllocator>::Empty
              (param_1 + 0x1d0,*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    if (*(int *)(param_1 + 0x1cc) != *(int *)(param_1 + 0xe0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
    *(undefined1 *)(param_1 + 0x760) = 1;
  }
  *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
  if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
    bVar18 = false;
    if (*(char *)(param_1 + 0x766) != '\0') goto LAB_141747452;
    if (*(char *)(param_1 + 0x767) != '\0') {
      QueryPerformanceCounter(&local_res8);
      *(bool *)(param_1 + 0x766) =
           (double)*(float *)(param_1 + 0x770) <
           ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
           16777216.0) - *(double *)(param_1 + 0x778);
    }
  }
  bVar18 = *(char *)(param_1 + 0x766) == '\0';
LAB_141747452:
  return !bVar18 + '\x01';
}



// FUNCTION 141747480 FUN_141747480 body=429 status=ok
// SIG undefined FUN_141747480(void)

char FUN_141747480(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  ulonglong uVar5;
  
  if (((*(char *)(param_1 + 0x761) != '\0') || (iVar3 = *(int *)(param_1 + 0x1b8), iVar3 < 1)) ||
     (*(int *)(param_1 + 0x1bc) < 1)) {
    return '\x01';
  }
  if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0xa8))();
    iVar3 = *(int *)(param_1 + 0x1b8);
  }
  plVar1 = (longlong *)(param_1 + 0x728);
  iVar3 = iVar3 + *(int *)(param_1 + 0x730);
  *(int *)(param_1 + 0x730) = iVar3;
  if (*(int *)(param_1 + 0x734) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  uVar5 = 0;
  if ((((*(byte *)(param_1 + 0x228) & 2) == 0) || (*(longlong *)(param_1 + 0x270) != 0)) &&
     ((*(byte *)(param_1 + 0x229) & 0x10) == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x50))
              (*(longlong **)(param_1 + 0x318),*plVar1,(longlong)*(int *)(param_1 + 0x1b8) << 2);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x2b8);
    uVar6 = uVar5;
    if (0 < *(int *)(param_1 + 0x1b8)) {
      do {
        local_res8.s.LowPart = 0;
        FUN_1415d6020(*puVar2,&local_res8);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(DWORD *)(uVar6 + *plVar1) = local_res8.s.LowPart;
        uVar6 = uVar6 + 4;
      } while ((int)uVar4 < *(int *)(param_1 + 0x1b8));
    }
  }
  *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
  *(undefined1 *)(param_1 + 0x761) = 1;
  if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
    bVar7 = *(char *)(param_1 + 0x766) == '\0';
    if (!bVar7) goto LAB_141747610;
    if (*(char *)(param_1 + 0x767) != '\0') {
      QueryPerformanceCounter(&local_res8);
      *(bool *)(param_1 + 0x766) =
           (double)*(float *)(param_1 + 0x770) <
           ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
           16777216.0) - *(double *)(param_1 + 0x778);
    }
  }
  bVar7 = *(char *)(param_1 + 0x766) == '\0';
LAB_141747610:
  return !bVar7 + '\x01';
}



// FUNCTION 141747630 FUN_141747630 body=68 status=ok
// SIG undefined FUN_141747630(void)

void FUN_141747630(undefined8 param_1)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141747680(param_1,&local_18);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return;
}



// FUNCTION 141747680 FUN_141747680 body=1919 status=ok
// SIG undefined FUN_141747680(void)

void FUN_141747680(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *_Str;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  int local_res8 [2];
  int *local_res10;
  int **local_res18;
  int ***local_res20;
  undefined8 local_108;
  uint *puStack_100;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  
  lVar9 = *param_2;
  if ((*(byte *)(*(longlong *)(lVar9 + 8) + 0x28) & 2) != 0) {
    local_res10 = local_res8;
    plVar1 = (longlong *)(param_1 + 0x40);
    local_res18 = &local_res10;
    if (0 < *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)) {
      TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(plVar1);
      local_res20 = &local_res18;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>
                (*plVar1,(longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)));
    }
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(plVar1);
    uVar15 = *(uint *)(param_1 + 0x68);
    puVar12 = (uint *)(param_1 + 0x50);
    local_108 = (wchar_t *)0x100000000;
    uStack_f4 = 0;
    iStack_f0 = 0;
    if (uVar15 != 0) {
      puVar11 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar11 = puVar12;
      }
      uVar5 = *puVar11;
      iStack_f0 = 0;
      iVar6 = 0;
      while (uVar5 == 0) {
        iStack_f0 = iStack_f0 + 0x20;
        uVar4 = (ulonglong)local_108 >> 0x20;
        local_108 = (wchar_t *)CONCAT44((int)uVar4,iVar6 + 1);
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1417477b3;
        uVar5 = puVar11[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_108 = (wchar_t *)CONCAT44(uVar5,SUB84(local_108,0));
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_f4 = (iStack_f0 - iVar6) + 0x1f;
      if ((int)uVar15 < (int)uStack_f4) {
LAB_1417477b3:
        uStack_f4 = uVar15;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x68);
    auStack_a8._4_4_ = uStack_f4;
    auStack_a8._0_4_ = 0xffffffff;
    local_c8 = CONCAT44(uStack_ec,iStack_f0);
    auStack_a8._8_8_ = local_c8;
    local_f8 = -1 << ((byte)uVar5 & 0x1f);
    uStack_b8 = local_108;
    uVar10 = uVar5 & 0xffffffe0;
    uStack_e0 = local_108;
    uStack_d0 = 0xffffffff;
    uStack_cc = uStack_f4;
    puStack_100 = puVar12;
    uStack_f4 = uVar5;
    local_e8 = (int ***)plVar1;
    local_c0 = plVar1;
    puStack_b0 = puVar12;
    local_d8 = puVar12;
    if (uVar5 != uVar15) {
      puVar11 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar11 = puVar12;
      }
      uVar8 = puVar11[(int)uVar5 >> 5] & local_f8;
      iVar6 = (int)uVar5 >> 5;
      while (uVar8 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141747888;
        uVar8 = puVar11[(longlong)iVar6 + 1];
        local_f8 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_f4 = (uVar10 - iVar6) + 0x1f;
      uVar5 = uStack_f4;
      if ((int)uVar15 < (int)uStack_f4) {
LAB_141747888:
        uStack_f4 = uVar15;
        uVar5 = uVar15;
      }
    }
    while (((uStack_cc != uVar5 || (local_d8 != puVar12)) || (local_e8 != (int ***)plVar1))) {
      AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
                (*(undefined8 *)((longlong)(int)uStack_cc * 0x20 + 8 + (longlong)*local_e8),
                 (longlong)*(int *)((longlong)(int)uStack_cc * 0x20 + 0x10 + (longlong)*local_e8));
      uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    }
    lVar9 = *param_2;
  }
  uVar15 = 0;
  plVar1 = *(longlong **)(lVar9 + 8);
  plVar13 = (longlong *)(param_1 + 0x40);
  if ((*(byte *)(plVar1 + 5) & 8) == 0) {
    FUN_14172b8f0(param_2,plVar13);
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x80),0,0);
        *(undefined8 *)(param_1 + 0x80) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar13,*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74),0);
    }
  }
  else {
    local_res10 = (int *)CONCAT44(local_res10._4_4_,
                                  *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74));
    puVar2 = *(undefined4 **)plVar1[1];
    if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_res10,4);
      if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar1,&local_res10,4);
      }
    }
    else {
      local_res10 = (int *)CONCAT44(local_res10._4_4_,*puVar2);
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    }
    local_108 = (wchar_t *)0x0;
    puStack_100 = (uint *)0x0;
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x68);
      puStack_b0 = (uint *)(param_1 + 0x50);
      local_e8 = (int ***)0x100000000;
      local_d8._4_4_ = 0;
      uStack_d0 = 0;
      if (iVar6 != 0) {
        puVar12 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar12 = puStack_b0;
        }
        uVar5 = *puVar12;
        uVar10 = uVar15;
        uStack_d0 = uVar15;
        while (uVar5 == 0) {
          uStack_d0 = uStack_d0 + 0x20;
          uVar4 = (ulonglong)local_e8 >> 0x20;
          local_e8 = (int ***)CONCAT44((int)uVar4,uVar10 + 1);
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar10)
          goto LAB_141747b7f;
          uVar5 = puVar12[(longlong)(int)uVar10 + 1];
          uVar10 = uVar10 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar14 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        local_e8 = (int ***)CONCAT44(uVar5,SUB84(local_e8,0));
        if (uVar5 == 0) {
          iVar14 = 0x20;
        }
        else {
          iVar14 = 0x1f - iVar14;
        }
        local_d8._4_4_ = (uStack_d0 - iVar14) + 0x1f;
        if (iVar6 < local_d8._4_4_) {
LAB_141747b7f:
          local_d8._4_4_ = iVar6;
        }
      }
      local_d8._0_4_ = 0xffffffff;
      uStack_70 = CONCAT44(local_d8._4_4_,0xffffffff);
      auStack_a8._8_4_ = uStack_d0;
      auStack_a8._0_8_ = uStack_70;
      auStack_a8._12_4_ = uStack_cc;
      uStack_b8 = local_e8;
      local_50 = 0;
      local_98._0_4_ = SUB84(plVar13,0);
      local_98._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      uStack_80 = local_e8;
      local_68._8_4_ = (undefined4)local_98;
      local_68._0_8_ = auStack_a8._8_8_;
      local_68._12_4_ = local_98._4_4_;
      iVar6 = local_d8._4_4_;
      local_c0 = plVar13;
      local_98 = plVar13;
      local_88 = plVar13;
      local_78 = puStack_b0;
      local_58 = plVar13;
      if (*(int *)(param_1 + 0x68) <= local_d8._4_4_) {
        return;
      }
      do {
        plVar1 = local_88;
        local_e8 = (int ***)0x0;
        uStack_e0 = 0;
        FString::AppendInt(&local_e8,*(undefined4 *)((longlong)iVar6 * 0x20 + *local_88));
        if (local_108 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_108 = (wchar_t *)local_e8;
        puStack_100 = (uint *)uStack_e0;
        local_e8 = (int ***)0x0;
        uStack_e0 = 0;
        FUN_14158ce90(*(undefined8 *)(*param_2 + 8),&local_108);
        lVar9 = *plVar1 + (longlong)iVar6 * 0x20;
        local_res8[0] = *(int *)(lVar9 + 0x10);
        plVar1 = *(longlong **)(*param_2 + 8);
        piVar3 = *(int **)plVar1[1];
        if ((int *)((undefined8 *)plVar1[1])[1] < piVar3 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,local_res8,4);
          }
        }
        else {
          local_res8[0] = *piVar3;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
          iVar6 = *(int *)(lVar9 + 0x10);
          if (iVar6 < local_res8[0]) {
            *(int *)(lVar9 + 0x10) = local_res8[0];
            iVar14 = local_res8[0] - iVar6;
            if (*(int *)(lVar9 + 0x14) < local_res8[0]) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 8);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8),0,
                       (longlong)iVar14 << 3);
          }
          else if ((local_res8[0] < iVar6) && (iVar6 - local_res8[0] != 0)) {
            *(int *)(lVar9 + 0x10) = iVar6 - (iVar6 - local_res8[0]);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar9 + 8);
          }
        }
        uVar5 = uVar15;
        if (0 < local_res8[0]) {
          do {
            (**(code **)(**(longlong **)(*param_2 + 8) + 0x40))
                      (*(longlong **)(*param_2 + 8),
                       *(longlong *)(lVar9 + 8) + (longlong)(int)uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < local_res8[0]);
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        iVar6 = uStack_70._4_4_;
      } while (uStack_70._4_4_ < (int)local_78[6]);
      local_d8 = (uint *)CONCAT44(local_d8._4_4_,(undefined4)local_d8);
      if (((char)local_50 != '\0') &&
         (local_d8 = (uint *)CONCAT44(local_d8._4_4_,(undefined4)local_d8), local_50._1_1_ != '\0'))
      {
        TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
      }
    }
    else {
      local_res18 = (int **)((ulonglong)local_res18 & 0xffffffff00000000);
      if ((int)local_res10 < 1) {
        return;
      }
      local_e8 = &local_res18;
      do {
        FUN_14158ce90(*(undefined8 *)(*param_2 + 8),&local_108);
        _Str = L"";
        if ((int)puStack_100 != 0) {
          _Str = local_108;
        }
        iVar6 = _wtoi(_Str);
        local_res18 = (int **)CONCAT44(local_res18._4_4_,iVar6);
        FUN_141727e70(plVar13,&local_res20,&local_e8,0);
        lVar9 = (longlong)(int)local_res20 * 0x20 + *plVar13;
        local_res8[0] = *(int *)(lVar9 + 0x10);
        plVar1 = *(longlong **)(*param_2 + 8);
        piVar3 = *(int **)plVar1[1];
        if ((int *)((undefined8 *)plVar1[1])[1] < piVar3 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,local_res8,4);
          }
        }
        else {
          local_res8[0] = *piVar3;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
          iVar6 = *(int *)(lVar9 + 0x10);
          if (iVar6 < local_res8[0]) {
            *(int *)(lVar9 + 0x10) = local_res8[0];
            iVar14 = local_res8[0] - iVar6;
            if (*(int *)(lVar9 + 0x14) < local_res8[0]) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 8);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8),0,
                       (longlong)iVar14 << 3);
          }
          else if ((local_res8[0] < iVar6) && (iVar6 - local_res8[0] != 0)) {
            *(int *)(lVar9 + 0x10) = iVar6 - (iVar6 - local_res8[0]);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar9 + 8);
          }
        }
        iVar6 = 0;
        if (0 < local_res8[0]) {
          do {
            (**(code **)(**(longlong **)(*param_2 + 8) + 0x40))
                      (*(longlong **)(*param_2 + 8),*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_res8[0]);
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)local_res10);
    }
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141747e00 FUN_141747e00 body=547 status=ok
// SIG undefined FUN_141747e00(void)

undefined8 FUN_141747e00(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  longlong local_38;
  
  if (0 < (int)param_1[9]) {
    UEnum::RemoveNamesFromMasterList();
  }
  plVar1 = param_1 + 8;
  if (plVar1 != param_2) {
    iVar2 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 9) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 4);
    }
  }
  *(undefined4 *)(param_1 + 10) = param_3;
  if ((param_4 != '\0') && (cVar4 = FUN_14172ddc0(param_1), cVar4 == '\0')) {
    puVar5 = (undefined8 *)FUN_141736a40(param_1);
    iVar2 = *(int *)(puVar5 + 1);
    local_58 = (undefined2 *)*puVar5;
    *puVar5 = 0;
    local_50 = *(int *)(puVar5 + 1);
    local_4c = *(int *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
    iVar7 = local_50;
    if (local_4c < (int)((5 - (uint)(iVar2 != 0)) + local_50)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar7 = local_50;
    }
    local_50 = (5 - (uint)(iVar7 != 0)) + iVar7;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar7);
    }
    puVar3 = local_58;
    puVar8 = &DAT_143f3eda8;
    puVar9 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    builtin_wcsncpy(local_58 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),L"_MAX",5);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_48,puVar9);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar5;
    }
    FName::FName(&local_res8,puVar8,1);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    lVar6 = UEnum::LookupEnumName(local_res8,0);
    if (lVar6 != -1) {
      return 0;
    }
    lVar6 = UEnum::GetMaxEnumValue(param_1);
    iVar2 = (int)param_1[9];
    *(int *)(param_1 + 9) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar5 = local_res8;
    puVar5[1] = lVar6 + 1;
  }
  FUN_14172c970(param_1);
  return 1;
}



// FUNCTION 141748040 FUN_141748040 body=54 status=ok
// SIG undefined FUN_141748040(void)

longlong * FUN_141748040(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141748080(param_1,param_3,param_4,1);
  return param_2;
}



// FUNCTION 141748080 FUN_141748080 body=614 status=ok
// SIG undefined FUN_141748080(void)

void FUN_141748080(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141748237;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141748237:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1417482f0 FUN_1417482f0 body=611 status=ok
// SIG undefined FUN_1417482f0(void)

void FUN_1417482f0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1417484a7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1417484a7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141748560 StartScriptSHAGeneration body=64 status=ok
// SIG undefined StartScriptSHAGeneration(void)

void FLinker::StartScriptSHAGeneration(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  if (lVar2 == 0) {
    lVar1 = operator_new(200);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FSHA1::FSHA1(lVar1);
    }
    *(longlong *)(param_1 + 0x1f8) = lVar2;
  }
  FSHA1::~FSHA1(lVar2);
  return;
}



// FUNCTION 1417485a0 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

longlong UProperty::StaticClass(void)

{
  if (DAT_1469e7b20 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Property",&DAT_1469e7b20,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000001,0x8000,L"Engine",
                  InternalConstructor<UProperty>,InternalVTableHelperCtorCaller<UProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,FUN_14171c410,FUN_14171c410,0);
  }
  return DAT_1469e7b20;
}



// FUNCTION 1417485b0 FUN_1417485b0 body=8 status=ok
// SIG undefined FUN_1417485b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417485b0(undefined8 param_1)

{
  _DAT_1469e72a0 = param_1;
  return;
}



// FUNCTION 1417485e0 FUN_1417485e0 body=739 status=ok
// SIG undefined FUN_1417485e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1417485e0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  LARGE_INTEGER local_a8 [2];
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x764) != '\0') {
    return 1;
  }
  QueryPerformanceCounter(local_a8);
  dVar5 = (double)local_a8[0].QuadPart * DAT_1468b02f8;
  *(undefined1 *)(param_1 + 0x767) = param_3;
  *(undefined4 *)(param_1 + 0x770) = param_2;
  *(undefined1 *)(param_1 + 0x766) = 0;
  *(undefined1 *)(param_1 + 0x768) = param_4;
  *(double *)(param_1 + 0x778) = dVar5 + 16777216.0;
  do {
    if (DAT_1468c21ab == '\0') {
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f3f130;
      }
      local_98[0] = AK::MemoryMgr::StartProfileThreadUsage;
      iVar2 = FUN_141732940(param_1,local_98);
      if (local_58 != 0) {
        plVar4 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar4 = local_68;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (iVar2 == 1) goto LAB_14174870c;
    }
    else {
LAB_14174870c:
      iVar2 = FUN_141746f90(param_1);
      if ((((iVar2 == 1) && (iVar2 = FUN_141746c80(param_1), iVar2 == 1)) &&
          (iVar2 = FUN_141746840(param_1), iVar2 == 1)) &&
         (iVar2 = FUN_1417465f0(param_1), iVar2 == 1)) {
        if (*(char *)(param_1 + 0x762) == '\0') {
          *(undefined1 *)(param_1 + 0x762) = 1;
        }
        *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
        if ((((*(byte *)(param_1 + 0x228) & 8) == 0) && (*(char *)(param_1 + 0x766) == '\0')) &&
           (*(char *)(param_1 + 0x767) != '\0')) {
          QueryPerformanceCounter(local_a8);
          *(bool *)(param_1 + 0x766) =
               (double)*(float *)(param_1 + 0x770) <
               ((double)local_a8[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x778);
        }
        iVar2 = (*(char *)(param_1 + 0x766) != '\0') + 1;
        if ((*(char *)(param_1 + 0x766) == '\0') && (iVar2 = FUN_141731c40(param_1), iVar2 == 1)) {
          if (*(char *)(param_1 + 0x763) == '\0') {
            *(undefined1 *)(param_1 + 0x763) = 1;
          }
          cVar1 = FUN_14173dc30(param_1,L"finding existing exports",1);
          iVar2 = (cVar1 != '\0') + 1;
          if ((cVar1 == '\0') && (iVar2 = FUN_141747480(param_1), iVar2 == 1)) {
            iVar2 = FUN_1417356e0(param_1);
          }
        }
      }
    }
    if (iVar2 != 2) {
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x60) = 0;
      return 0;
    }
    if (*(char *)(param_1 + 0x767) != '\0') {
      if (*(char *)(param_1 + 0x768) == '\0') {
        return 2;
      }
      cVar1 = FUN_14173dc30(param_1,L"Checking Full Timer",1);
      if (cVar1 != '\0') {
        return 2;
      }
    }
  } while( true );
}



// FUNCTION 1417488f0 FUN_1417488f0 body=233 status=ok
// SIG undefined FUN_1417488f0(void)

bool FUN_1417488f0(undefined4 param_1,undefined1 param_2)

{
  int *piVar1;
  BOOL BVar2;
  bool bVar3;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  piVar1 = DAT_1469e7300;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1469e7300 + 4));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 4));
  }
  LOCK();
  bVar3 = *piVar1 == 0;
  if (bVar3) {
    *piVar1 = 0;
  }
  UNLOCK();
  if (bVar3) {
    (**(code **)(**(longlong **)(piVar1 + 0xe) + 0x18))();
    LOCK();
    piVar1[1] = piVar1[1] + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 4));
  if (!bVar3) {
    if ((DAT_1464b4c80 < 1) || (DAT_1469e7698 <= DAT_1464b4c80)) {
      DAT_1469e7698 = DAT_1469e7698 + 1;
      return bVar3;
    }
    DAT_1469e7698 = 0;
    QueryPerformanceCounter(&local_res18);
    FUN_141736720(DAT_1469e7300);
    QueryPerformanceCounter(&local_res20);
    bVar3 = true;
  }
  FUN_14172d4d0(param_1,param_2);
  piVar1 = DAT_1469e7300;
  (**(code **)(**(longlong **)(DAT_1469e7300 + 0xe) + 0x10))();
  LOCK();
  piVar1[1] = piVar1[1] + -1;
  UNLOCK();
  FMemory::Trim();
  return bVar3;
}



// FUNCTION 1417489e0 UnhashUnreachableObjects body=316 status=ok
// SIG undefined UnhashUnreachableObjects(void)

bool UnhashUnreachableObjects(char param_1,float param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  LARGE_INTEGER local_res18;
  
  uVar4 = DAT_1469e7295;
  DAT_1469e7295 = 1;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464b5830);
  QueryPerformanceCounter(&local_res18);
  iVar5 = 0;
  dVar3 = (double)local_res18.QuadPart * DAT_1468b02f8;
  if (DAT_1469e7694 < DAT_1469e72c8) {
    do {
      puVar2 = *(undefined8 **)(DAT_1469e72c0 + (longlong)DAT_1469e7694 * 8);
      DAT_1469e7694 = DAT_1469e7694 + 1;
      UObject::ConditionalBeginDestroy(*puVar2);
      puVar1 = (uint *)(puVar2 + 1);
      *puVar1 = *puVar1 & 0x7fffffff;
      if (((param_1 != '\0') && (iVar5 % 10 == 0)) &&
         (QueryPerformanceCounter(&local_res18),
         (double)param_2 < (double)local_res18.QuadPart * DAT_1468b02f8 - dVar3)) break;
      iVar5 = iVar5 + 1;
    } while (DAT_1469e7694 < DAT_1469e72c8);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464b5848);
  DAT_1469e7295 = uVar4;
  return DAT_1469e7694 < DAT_1469e72c8;
}



// FUNCTION 141748b20 UpdateScriptSHAKey body=30 status=ok
// SIG undefined UpdateScriptSHAKey(void)

void FLinker::UpdateScriptSHAKey(longlong param_1,undefined8 *param_2)

{
  if ((*(longlong *)(param_1 + 0x1f8) != 0) && (*(int *)(param_2 + 1) != 0)) {
    FSHA1::Update(*(longlong *)(param_1 + 0x1f8),*param_2);
    return;
  }
  return;
}



// FUNCTION 141748b40 FUN_141748b40 body=1219 status=ok
// SIG undefined FUN_141748b40(void)

int FUN_141748b40(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  BOOL BVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_128;
  undefined8 local_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  longlong local_b8;
  longlong lStack_b0;
  
  local_128 = 0;
  plVar25 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 8));
  local_120 = 0;
  FUN_141749010(param_1,param_2,&local_128);
  iVar26 = 1;
  uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  if ((((plVar25[5] == 0) ||
       (uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100),
       (int)plVar25[6] != -1)) ||
      (uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100), plVar25[4] != 0
      )) || ((iVar23 = 0,
             uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100),
             (int)plVar25[1] == 0 ||
             (uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100),
             *plVar25 == 0x67)))) goto LAB_141748fc6;
  lVar5 = plVar25[2];
  lVar6 = plVar25[3];
  lVar7 = *plVar25;
  lVar8 = plVar25[1];
  lVar9 = plVar25[4];
  lVar10 = plVar25[5];
  lVar22 = plVar25[6];
  plVar25[3] = 0x67;
  plVar25[2] = DAT_1468e2358;
  local_b8 = lVar5;
  lStack_b0 = lVar6;
  FUN_141749010(param_1,param_2,&local_128);
  lVar13 = lStack_b0;
  iVar26 = iVar23;
  if ((int)plVar25[6] != -1) {
    uVar18 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_f8,L" [redirection]",L"LinkerLoad",L"LoadWarningSuffix_redirection");
    puVar19 = (undefined8 *)FText::ToString(uVar18);
    uVar12 = local_120;
    if (*(int *)(puVar19 + 1) != 0) {
      iVar23 = *(int *)(puVar19 + 1) + -1;
    }
    pvVar4 = (void *)*puVar19;
    if (iVar23 != 0) {
      iVar26 = (int)local_120;
      lVar24 = (longlong)(int)local_120;
      iVar14 = (uint)((int)local_120 == 0) + (int)local_120 + iVar23;
      local_120 = CONCAT44(local_120._4_4_,iVar14);
      if (local_120._4_4_ < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,uVar12 & 0xffffffff);
      }
      pvVar3 = (void *)(local_128 + (lVar24 - (ulonglong)(iVar26 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar23 * 2);
      *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar26 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    lVar24 = FUN_141730700(plVar25[5],(int)plVar25[6]);
    iVar26 = 0;
    if (lVar24 != 0) {
      lVar20 = UObjectRedirector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        *(uint *)(lVar24 + 8) = *(uint *)(lVar24 + 8) | 0x400;
        FUN_141740c00(param_1 + 0x200,lVar24);
        lVar24 = *(longlong *)(lVar24 + 0x28);
        if (lVar24 != 0) {
          lVar20 = *(longlong *)(lVar24 + 0x10);
          lVar21 = lVar20;
          if ((*(uint *)(lVar24 + 8) >> 4 & 1) == 0) {
            for (; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x30)) {
              if (*(longlong *)(lVar21 + 0x18) == lVar13) goto LAB_141748ebe;
            }
            lVar24 = UObjectRedirector::GetPrivateStaticClass();
            uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
            if (lVar20 == lVar24) {
              uVar18 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_e0,L" [circular redirection]",L"LinkerLoad",
                                  L"LoadWarningSuffix_circularredirection");
              puVar19 = (undefined8 *)FText::ToString(uVar18);
              uVar12 = local_120;
              pvVar4 = (void *)*puVar19;
              iVar23 = *(int *)(puVar19 + 1) + -1;
              if (*(int *)(puVar19 + 1) == 0) {
                iVar23 = iVar26;
              }
              if (iVar23 != 0) {
                iVar14 = (int)local_120;
                lVar24 = (longlong)(int)local_120;
                iVar15 = (uint)((int)local_120 == 0) + iVar23 + (int)local_120;
                local_120 = CONCAT44(local_120._4_4_,iVar15);
                if (local_120._4_4_ < iVar15) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,uVar12 & 0xffffffff);
                }
                pvVar3 = (void *)(local_128 + (lVar24 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar23 * 2);
                *(undefined2 *)((longlong)pvVar3 + (longlong)iVar23 * 2) = 0;
              }
              uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
              if (local_d8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_d8 + 1;
                lVar24 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
                if ((int)lVar24 == 1) {
                  (**(code **)*local_d8)(local_d8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_d8 + 0xc);
                  iVar23 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  iVar26 = 0;
                  if (iVar23 == 1) {
                    (**(code **)(*local_d8 + 8))(local_d8,1);
                  }
                }
              }
            }
          }
          else {
LAB_141748ebe:
            puStack_110 = local_res10;
            plVar25[4] = lVar24;
            local_res10[0] = 0;
            local_118 = FUN_1406ddef0;
            local_108 = 0x406ddef0;
            uStack_104 = 1;
            uStack_100 = puStack_110;
            lVar24 = FUN_1415d8310(&local_108,&DAT_14622e6dc);
            *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + 1;
            local_res20 = param_1;
            lVar24 = FUN_1417555a0();
            BVar16 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar24 + 0xd0));
            if (BVar16 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar24 + 0xd0));
            }
            FUN_14058c5a0(lVar24 + 0x80,local_res18,&local_res20,0);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar24 + 0xd0));
            iVar26 = 2;
          }
          goto LAB_141748f5b;
        }
      }
    }
    iVar26 = 0;
  }
LAB_141748f5b:
  plVar25[3] = lVar13;
  plVar25[2] = local_b8;
  if (iVar26 == 0) {
    *plVar25 = lVar7;
    plVar25[1] = lVar8;
    plVar25[2] = lVar5;
    plVar25[3] = lVar6;
    plVar25[4] = lVar9;
    plVar25[5] = lVar10;
    plVar25[6] = lVar22;
  }
  else {
    uVar17 = FUN_1417a5490(plVar25[4]);
    *(undefined4 *)(plVar25 + 6) = uVar17;
    lVar22 = FUN_1417a53c0(plVar25[4]);
    plVar25[5] = lVar22;
  }
LAB_141748fc6:
  if (local_128 != 0) {
    FMemory::Free();
  }
  return iVar26;
}



// FUNCTION 141749010 FUN_141749010 body=2550 status=ok
// SIG undefined FUN_141749010(void)

ulonglong FUN_141749010(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint7 uVar14;
  longlong lVar9;
  longlong *extraout_RAX;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong extraout_RAX_00;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  longlong *local_res8;
  char local_res10 [8];
  longlong *local_res20;
  ulonglong in_stack_ffffffffffffff48;
  longlong local_a8 [2];
  code *local_98;
  char *pcStack_90;
  longlong local_88;
  longlong local_80 [2];
  longlong local_70 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  char *pcStack_50;
  longlong local_48 [2];
  
  plVar18 = (longlong *)((longlong)param_2 * 0x38 + param_1[1]);
  if ((plVar18[5] != 0) && (plVar6 = (longlong *)(longlong)param_2, (int)plVar18[6] != -1))
  goto LAB_14174909a;
  plVar21 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  plVar6 = plVar21;
  if ((plVar18[2] == 0) || ((plVar6 = plVar4, plVar18[3] == 0 || (*plVar18 == 0))))
  goto LAB_14174909a;
  plVar4 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  local_res8 = param_1;
  if (*(uint *)(plVar18 + 1) == 0) {
    local_a8[0] = 0xcf;
    if (plVar18[3] != 0xcf) {
      plVar18[5] = 0;
      goto LAB_14174909a;
    }
    uVar17 = *(uint *)(param_1 + 0x52) & 0x2082;
    plVar5 = (longlong *)
             FindObjectFast<UPackage>(0,*plVar18,0,0,in_stack_ffffffffffffff48 & 0xffffffff00000000)
    ;
    if ((plVar5 == (longlong *)0x0) ||
       (plVar6 = (longlong *)UPackage::IsFullyLoaded(plVar5), (char)plVar6 == '\0')) {
      uVar17 = uVar17 | *(uint *)(param_1 + 0x52) & 0x100000;
      bVar23 = false;
      puVar7 = (undefined8 *)FName::ToString(plVar18,&local_98);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar7;
      }
      plVar5 = (longlong *)FUN_141790a60(0,puVar20,uVar17 | 0x100,param_1,0);
      plVar6 = plVar5;
      if (local_98 != (code *)0x0) {
        plVar6 = (longlong *)FMemory::Free();
      }
    }
    else {
      bVar23 = true;
    }
    if (plVar5 == (longlong *)0x0) {
      puVar7 = (undefined8 *)FName::ToString(plVar18,local_48);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar7;
      }
      plVar5 = (longlong *)FUN_1417894a0(0,puVar20);
      plVar6 = plVar5;
      if (local_48[0] != 0) {
        plVar6 = (longlong *)FMemory::Free();
      }
      if (plVar5 == (longlong *)0x0) goto LAB_14174909a;
    }
    if ((*(byte *)((longlong)plVar5 + 0x52) & 1) != 0) goto LAB_14174909a;
    uVar16 = uVar17 | 0x80;
    if (*(char *)((longlong)param_1 + 0x765) == '\0') {
      uVar16 = uVar17;
    }
    if (!bVar23) {
      plVar6 = (longlong *)FUN_141739590(plVar5,0,uVar16,0,0,0);
      plVar18[5] = (longlong)plVar6;
    }
LAB_1417495d5:
    if ((plVar5 == (longlong *)0x0) || ((*(byte *)(plVar5 + 10) & 0x11) == 0)) {
      bVar23 = false;
      if ((*(uint *)(param_1 + 0x52) & 0x4000) == 0) goto LAB_141749716;
      local_res20 = (longlong *)&DAT_ffffffffffffffff;
    }
    else {
      lVar9 = plVar18[2];
      local_res8 = (longlong *)0x21;
      bVar23 = true;
      uVar14 = (uint7)((ulonglong)lVar9 >> 8);
      if ((((lVar9 == 0x21) || (lVar9 == DAT_1468e2358)) ||
          (local_res8 = (longlong *)&DAT_0000001e, lVar9 == 0x1e)) || (lVar9 == DAT_1468e2350)) {
        plVar6 = (longlong *)CONCAT71(uVar14,1);
      }
      else {
        plVar6 = (longlong *)((ulonglong)uVar14 << 8);
      }
      local_res20 = plVar5;
      if ((char)plVar6 != '\0') {
        local_res8 = (longlong *)0xcf;
        plVar6 = (longlong *)0x0;
        if (((plVar18[3] == 0xcf) && (plVar5[4] == 0)) &&
           (plVar6 = (longlong *)plVar5[3], (longlong *)*plVar18 == plVar6)) {
          pcStack_90 = local_res10;
          plVar18[4] = (longlong)plVar5;
          local_res10[0] = '\0';
          local_98 = FUN_1406ddef0;
          local_58 = 0x406ddef0;
          uStack_54 = 1;
          pcStack_50 = pcStack_90;
          lVar9 = FUN_1415d8310(&local_58,&DAT_14622e6dc);
          *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
          local_res8 = param_1;
          lVar9 = FUN_1417555a0();
          BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          if (BVar3 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          }
          FUN_14058c5a0(lVar9 + 0x80,local_res10,&local_res8,0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          plVar6 = extraout_RAX;
          goto LAB_14174909a;
        }
      }
    }
  }
  else {
    FUN_141748b40(param_1,~*(uint *)(plVar18 + 1));
    lVar9 = (longlong)(-1 - (int)plVar18[1]) * 0x38 + param_1[1];
    plVar5 = plVar21;
    local_70[0] = lVar9;
    if ((*(longlong *)(lVar9 + 0x28) == 0) && (plVar5 = plVar4, *(longlong *)(lVar9 + 0x20) != 0)) {
      uVar17 = *(uint *)(lVar9 + 8);
      lVar15 = lVar9;
      while ((int)uVar17 < 0) {
        lVar15 = (longlong)(int)~uVar17 * 0x38 + param_1[1];
        uVar17 = *(uint *)(lVar15 + 8);
      }
      plVar6 = *(longlong **)(lVar15 + 0x20);
      plVar5 = plVar21;
      if (plVar6 != (longlong *)0x0) {
        lVar15 = UPackage::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
            != lVar15 + 0x88)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        plVar5 = plVar4;
        if ((bVar23) && ((*(byte *)(plVar6 + 10) & 0x11) != 0)) {
          plVar5 = plVar6;
        }
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x28);
    plVar18[5] = lVar9;
    plVar6 = (longlong *)0x0;
    if (lVar9 != 0) {
      uVar17 = *(uint *)(plVar18 + 1);
      plVar6 = plVar18;
      if ((int)uVar17 < 0) {
        do {
          plVar6 = (longlong *)((longlong)(int)~uVar17 * 0x38 + param_1[1]);
          uVar17 = *(uint *)(plVar6 + 1);
        } while ((int)uVar17 < 0);
      }
      puVar7 = (undefined8 *)FName::ToString(plVar6,&local_58);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar7;
      }
      local_res20 = (longlong *)FUN_1417894a0(0,puVar20);
      if (CONCAT44(uStack_54,local_58) != 0) {
        FMemory::Free();
      }
      local_80[0] = plVar18[2];
      lVar9 = *plVar18;
      lVar22 = plVar18[3];
      piVar8 = (int *)FPackageName::GetShortFName(&local_88,local_80);
      local_res10[0] = '\0';
      local_a8[0] = plVar18[2];
      lVar15 = plVar18[5];
      lVar9 = (ulonglong)((int)lVar22 * 7 + *piVar8 * 0x1f + (int)lVar9 & 0xff) * 4 + 0x328;
      for (iVar2 = *(int *)(lVar9 + lVar15); iVar2 != -1;
          iVar2 = *(int *)(*(longlong *)(lVar15 + 0x18) + 0x50 + (longlong)iVar2 * 0x88)) {
        if ((iVar2 < 0) || (*(int *)(lVar15 + 0x20) <= iVar2)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (!bVar23) break;
        if ((*(longlong *)((longlong)iVar2 * 0x88 + *(longlong *)(lVar15 + 0x18)) == *plVar18) &&
           (plVar6 = (longlong *)FLinker::GetExportClassName(lVar15,local_48,iVar2),
           *plVar6 == plVar18[3])) {
          lVar15 = plVar18[5];
          plVar6 = (longlong *)FLinkerLoad::GetExportClassPackage(lVar15,&local_98,iVar2);
          if (*plVar6 == plVar18[2]) {
            local_res10[0] = '\x01';
            goto LAB_1417493c5;
          }
        }
        lVar15 = plVar18[5];
      }
      plVar6 = (longlong *)FPackageName::GetShortFName(&local_98,local_a8);
      lVar15 = plVar18[5];
      local_a8[0] = *plVar6;
LAB_1417493c5:
      param_1 = local_res8;
      for (iVar2 = *(int *)(lVar9 + lVar15); local_res8 = param_1, iVar2 != -1;
          iVar2 = (int)plVar6[(longlong)iVar2 * 0x11 + 10]) {
        uVar14 = (uint7)((ulonglong)plVar6 >> 8);
        if ((iVar2 < 0) || (*(int *)(lVar15 + 0x20) <= iVar2)) {
          plVar6 = (longlong *)((ulonglong)uVar14 << 8);
        }
        else {
          plVar6 = (longlong *)CONCAT71(uVar14,1);
        }
        if ((char)plVar6 == '\0') break;
        lVar9 = *(longlong *)(lVar15 + 0x18);
        lVar22 = (longlong)iVar2 * 0x88;
        if ((*(longlong *)(lVar9 + lVar22) == *plVar18) &&
           (plVar6 = (longlong *)FLinker::GetExportClassName(lVar15,&local_98,iVar2),
           *plVar6 == plVar18[3])) {
          lVar15 = plVar18[5];
          uVar17 = *(uint *)(lVar22 + 0x10 + *(longlong *)(lVar15 + 0x18));
          if (local_res10[0] == '\0') {
            if ((int)uVar17 < 0) {
              iVar1 = *(int *)((longlong)(int)~uVar17 * 0x38 + 8 + *(longlong *)(lVar15 + 8));
              if (iVar1 < 0) {
                local_80[0] = *(longlong *)
                               ((longlong)-iVar1 * 0x38 + -0x38 + *(longlong *)(lVar15 + 8));
              }
              else {
                local_80[0] = *(longlong *)
                               (*(longlong *)(lVar15 + 0x18) + -0x88 + (longlong)iVar1 * 0x88);
              }
            }
            else {
              local_80[0] = DAT_1468e2358;
              if (uVar17 != 0) {
                local_80[0] = *(longlong *)(*(longlong *)(lVar15 + 0xa0) + 0x18);
              }
            }
            plVar6 = (longlong *)FPackageName::GetShortFName(local_48,local_80);
          }
          else if ((int)uVar17 < 0) {
            iVar1 = *(int *)((longlong)(int)~uVar17 * 0x38 + 8 + *(longlong *)(lVar15 + 8));
            if (iVar1 < 0) {
              local_88 = *(longlong *)((longlong)-iVar1 * 0x38 + -0x38 + *(longlong *)(lVar15 + 8));
              plVar6 = &local_88;
            }
            else {
              local_88 = *(longlong *)
                          (*(longlong *)(lVar15 + 0x18) + -0x88 + (longlong)iVar1 * 0x88);
              plVar6 = &local_88;
            }
          }
          else if (uVar17 == 0) {
            local_88 = DAT_1468e2358;
            plVar6 = &local_88;
          }
          else {
            plVar6 = &local_88;
            local_88 = *(longlong *)(*(longlong *)(lVar15 + 0xa0) + 0x18);
          }
          if (*plVar6 == local_a8[0]) {
            if (((int)plVar18[1] < 0) && (*(longlong *)(local_70[0] + 0x28) != 0)) {
              iVar1 = *(int *)(lVar9 + 8 + lVar22);
              if (*(int *)(local_70[0] + 0x30) == -1) {
                bVar23 = iVar1 == 0;
              }
              else {
                bVar23 = *(int *)(local_70[0] + 0x30) + 1 == iVar1;
              }
              if (!bVar23) goto LAB_14174956a;
            }
            plVar6 = (longlong *)0x0;
            if ((~*(byte *)(lVar9 + 0x20 + lVar22) & 1) != 0) {
              lVar9 = (longlong)(int)local_res8[0x20];
              plVar6 = local_res8;
              if (0 < lVar9) {
                plVar6 = (longlong *)(local_res8[3] + 0x10);
                do {
                  plVar6 = plVar6 + 0x11;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              goto LAB_14174909a;
            }
            *(int *)(plVar18 + 6) = iVar2;
            param_1 = local_res8;
            break;
          }
        }
LAB_14174956a:
        lVar15 = plVar18[5];
        plVar6 = *(longlong **)(lVar15 + 0x18);
        param_1 = local_res8;
      }
    }
    if (local_res20 == (longlong *)0x0) goto LAB_1417495d5;
LAB_141749716:
    bVar23 = false;
  }
  if (((int)plVar18[6] != -1) || (local_res20 == (longlong *)0x0)) goto LAB_14174909a;
  puVar7 = (undefined8 *)FName::ToString(plVar18 + 2,local_70);
  puVar20 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar19 = &DAT_143f3eda8;
  }
  else {
    puVar19 = (undefined2 *)*puVar7;
  }
  uVar10 = UPackage::GetPrivateStaticClass();
  uVar11 = FUN_141799410(uVar10,0,puVar19,0);
  uVar12 = uVar11;
  if (local_70[0] != 0) {
    uVar12 = FMemory::Free();
  }
  if (uVar11 == 0) {
LAB_1417499ea:
    plVar6 = (longlong *)(uVar12 & 0xffffffffffffff00);
  }
  else {
    puVar7 = (undefined8 *)FName::ToString(plVar18 + 3,local_80);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar7;
    }
    uVar10 = FUN_14171bfe0();
    uVar11 = FUN_141799410(uVar10,uVar11,puVar19,0);
    uVar12 = uVar11;
    if (local_80[0] != 0) {
      uVar12 = FMemory::Free();
    }
    if (uVar11 != 0) {
      if (((int)*(uint *)(plVar18 + 1) < 0) &&
         (plVar6 = *(longlong **)((longlong)(int)~*(uint *)(plVar18 + 1) * 0x38 + param_1[1] + 0x20)
         , plVar6 != (longlong *)0x0)) {
        local_res20 = plVar6;
      }
      puVar7 = (undefined8 *)FName::ToString(plVar18,local_70);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar19 = &DAT_143f3eda8;
      }
      else {
        puVar19 = (undefined2 *)*puVar7;
      }
      uVar13 = FLinkerLoad::FindImport(param_1,uVar11,local_res20,puVar19);
      uVar12 = uVar13;
      if (local_70[0] != 0) {
        uVar12 = FMemory::Free();
      }
      if (bVar23) {
LAB_1417498dd:
        bVar23 = true;
      }
      else {
        if (uVar13 != 0) {
          iVar2 = *(int *)(uVar13 + 0xc);
          plVar6 = plVar21;
          if (iVar2 < (int)DAT_1469e91c4) {
            uVar16 = iVar2 >> 0x1f & 0xffff;
            uVar17 = iVar2 + uVar16;
            plVar6 = (longlong *)
                     (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                     (longlong)(int)((uVar17 & 0xffff) - uVar16) * 0x18);
          }
          if (((*(uint *)(plVar6 + 1) >> 0x19 & 1) != 0) &&
             (uVar12 = 0, ((byte)*(undefined4 *)(uVar13 + 8) & 0x41) == 0x41)) goto LAB_1417498dd;
          uVar17 = *(uint *)(uVar13 + 8) >> 4;
          uVar12 = (ulonglong)uVar17;
          if ((uVar17 & 1) != 0) {
            iVar2 = *(int *)(*(longlong *)(uVar13 + 0x10) + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar16 = iVar2 >> 0x1f & 0xffff;
              uVar17 = iVar2 + uVar16;
              plVar21 = (longlong *)
                        (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                        (longlong)(int)((uVar17 & 0xffff) - uVar16) * 0x18);
            }
            uVar12 = 0;
            if (((*(uint *)(plVar21 + 1) >> 0x19 & 1) != 0) &&
               (uVar12 = 0, ((byte)*(undefined4 *)(*(longlong *)(uVar13 + 0x10) + 8) & 0x41) == 0x41
               )) goto LAB_1417498dd;
          }
        }
        bVar23 = false;
      }
      if (uVar13 == 0) {
        if ((bVar23) && (uVar12 = FUN_14171c950(), uVar11 == uVar12)) {
          puVar7 = (undefined8 *)FName::ToString(plVar18,local_70);
          if (*(int *)(puVar7 + 1) != 0) {
            puVar20 = (undefined2 *)*puVar7;
          }
          uVar13 = FUN_141799410(uVar11,0xffffffffffffffff,puVar20,1);
          uVar12 = uVar13;
          if (local_70[0] != 0) {
            uVar12 = FMemory::Free();
          }
          if (uVar13 != 0) {
            uVar11 = UObjectBaseUtility::GetOutermost(uVar13);
            uVar12 = UObjectBaseUtility::GetOutermost(local_res20);
            if (uVar12 == uVar11) goto LAB_14174994c;
          }
        }
      }
      else {
LAB_14174994c:
        if (((*(uint *)(param_1 + 0x52) & 0x4000) != 0) || (bVar23)) {
          pcStack_90 = local_res10;
          plVar18[4] = uVar13;
          local_res10[0] = '\0';
          local_98 = FUN_1406ddef0;
          local_58 = 0x406ddef0;
          uStack_54 = 1;
          pcStack_50 = pcStack_90;
          lVar9 = FUN_1415d8310(&local_58,&DAT_14622e6dc);
          *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
          local_res8 = param_1;
          lVar9 = FUN_1417555a0();
          BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          if (BVar3 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          }
          FUN_14058c5a0(lVar9 + 0x80,local_res10,&local_res8,0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0xd0));
          uVar12 = extraout_RAX_00;
          goto LAB_1417499ea;
        }
      }
    }
    plVar6 = (longlong *)CONCAT71((int7)(uVar12 >> 8),1);
  }
  if ((plVar18[4] == 0) && ((char)plVar6 == '\0')) {
    return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
LAB_14174909a:
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 141749a10 Z_Construct_UClass_UEnum body=72 status=ok
// SIG undefined Z_Construct_UClass_UEnum(void)

longlong Z_Construct_UClass_UEnum(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e76a8;
  if (DAT_1469e76a8 == 0) {
    FUN_141727780();
    lVar1 = UEnum::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e76a8 = lVar1;
  return lVar1;
}



// FUNCTION 141749a60 Z_Construct_UClass_UEnumProperty body=219 status=ok
// SIG undefined Z_Construct_UClass_UEnumProperty(void)

longlong Z_Construct_UClass_UEnumProperty(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar3 = DAT_1469e76b8;
  if (DAT_1469e76b8 == 0) {
    Z_Construct_UClass_UProperty();
    lVar3 = UEnumProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar3);
    FName::FName(local_res8,L"Enum",1);
    plVar1 = (longlong *)(lVar3 + 0x1b0);
    iVar2 = *(int *)(lVar3 + 0x1b8);
    *(int *)(lVar3 + 0x1b8) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x78100;
    FName::FName(local_res10,L"UnderlyingProp",1);
    iVar2 = *(int *)(lVar3 + 0x1b8);
    *(int *)(lVar3 + 0x1b8) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x70100;
    FUN_141726e60(lVar3,0);
  }
  DAT_1469e76b8 = lVar3;
  return lVar3;
}



// FUNCTION 141749b40 Z_Construct_UClass_UPackage body=86 status=ok
// SIG undefined Z_Construct_UClass_UPackage(void)

longlong Z_Construct_UClass_UPackage(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7720;
  if (DAT_1469e7720 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = UPackage::StaticClass();
    UObjectForceRegistration(lVar1);
    *(code **)(lVar1 + 0xa8) = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7720 = lVar1;
  return lVar1;
}



// FUNCTION 141749bd0 FUN_141749bd0 body=38 status=ok
// SIG undefined FUN_141749bd0(void)

void FUN_141749bd0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  FCrc::MemCrc_DEPRECATED(param_2,0x10);
  return;
}



// FUNCTION 141749c10 FUN_141749c10 body=43 status=ok
// SIG undefined FUN_141749c10(void)

undefined8 * FUN_141749c10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f52ef0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141749c70 FUN_141749c70 body=38 status=ok
// SIG undefined FUN_141749c70(void)

void FUN_141749c70(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  FCrc::MemCrc_DEPRECATED(param_2,8);
  return;
}



// FUNCTION 141749cc0 FUN_141749cc0 body=20 status=ok
// SIG undefined FUN_141749cc0(void)

undefined8 FUN_141749cc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0xf8))();
  return 0;
}



// FUNCTION 141749d10 FUN_141749d10 body=38 status=ok
// SIG undefined FUN_141749d10(void)

void FUN_141749d10(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  FCrc::MemCrc_DEPRECATED(param_2,0xc);
  return;
}



// FUNCTION 141749d40 FUN_141749d40 body=163 status=ok
// SIG undefined FUN_141749d40(void)

uint FUN_141749d40(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0xf8))();
  uVar2 = param_2[1];
  uVar3 = *param_2 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}



// FUNCTION 141749df0 Serialize body=22 status=ok
// SIG undefined Serialize(void)

undefined1
UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>::Serialize
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1406da970(param_2,param_3);
  return 1;
}



// FUNCTION 141749f30 FUN_141749f30 body=48 status=ok
// SIG undefined FUN_141749f30(void)

void FUN_141749f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1417537b0(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141749f90 FUN_141749f90 body=31 status=ok
// SIG undefined FUN_141749f90(void)

void FUN_141749f90(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  GetTypeHash(param_2);
  return;
}



// FUNCTION 14174a010 FUN_14174a010 body=48 status=ok
// SIG undefined FUN_14174a010(void)

void FUN_14174a010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_141753a20(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a070 FUN_14174a070 body=36 status=ok
// SIG undefined FUN_14174a070(void)

int FUN_14174a070(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return (int)((ulonglong)*param_2 >> 0x20) + (int)*param_2;
}



// FUNCTION 14174a0d0 Copy body=98 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSoftClassPath>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    lVar1 = param_3 + 8;
    do {
      local_28 = *(undefined8 *)(lVar1 + -8);
      FString::FString(local_20,lVar1);
      FSoftObjectPath::operator=((param_2 - param_3) + -8 + lVar1,&local_28);
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14174a140 Identical body=29 status=ok
// SIG undefined Identical(void)

undefined1
UScriptStruct::TCppStructOps<FSoftClassPath>::Identical
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FSoftObjectPath::operator==(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14174a160 FUN_14174a160 body=48 status=ok
// SIG undefined FUN_14174a160(void)

void FUN_14174a160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14178a720(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a1c0 FUN_14174a1c0 body=300 status=ok
// SIG undefined FUN_14174a1c0(void)

uint FUN_14174a1c0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)(*param_1 + 0xf8))();
  uVar4 = (int)((ulonglong)*param_2 >> 0x20) + (int)*param_2;
  uVar5 = uVar4 >> 0xd ^ -uVar4;
  uVar2 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 10;
  if (*(int *)(param_2 + 2) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_2[1];
  }
  uVar1 = FUN_140438070(puVar3);
  uVar4 = ((uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar5 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar5) - uVar4 ^ uVar5 >> 0xf;
}



// FUNCTION 14174a300 Copy body=98 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSoftObjectPath>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    lVar1 = param_2;
    do {
      local_28 = *(undefined8 *)((param_3 - param_2) + lVar1);
      FString::FString(local_20,(param_3 - param_2) + 8 + lVar1);
      FSoftObjectPath::operator=(lVar1,&local_28);
      param_4 = param_4 + -1;
      lVar1 = lVar1 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14174a3d0 FUN_14174a3d0 body=26 status=ok
// SIG undefined FUN_14174a3d0(void)

undefined4 FUN_14174a3d0(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return *param_2;
}



// FUNCTION 14174a400 FUN_14174a400 body=48 status=ok
// SIG undefined FUN_14174a400(void)

void FUN_14174a400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14168d0e0(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a450 FUN_14174a450 body=31 status=ok
// SIG undefined FUN_14174a450(void)

void FUN_14174a450(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  FUN_14168ed80(param_2);
  return;
}



// FUNCTION 14174a480 FUN_14174a480 body=48 status=ok
// SIG undefined FUN_14174a480(void)

void FUN_14174a480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1416478b0(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a4d0 FUN_14174a4d0 body=39 status=ok
// SIG undefined FUN_14174a4d0(void)

int FUN_14174a4d0(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
}



// FUNCTION 14174a500 FUN_14174a500 body=48 status=ok
// SIG undefined FUN_14174a500(void)

void FUN_14174a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_141629ae0(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a570 Serialize body=70 status=ok
// SIG undefined Serialize(void)

undefined8
UScriptStruct::TCppStructOps<FGuid>::Serialize
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_3);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return 1;
}



// FUNCTION 14174a5c0 FUN_14174a5c0 body=48 status=ok
// SIG undefined FUN_14174a5c0(void)

void FUN_14174a5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14166e480(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 14174a610 Serialize body=40 status=ok
// SIG undefined Serialize(void)

undefined1
UScriptStruct::TCppStructOps<FTwoVectors>::Serialize
          (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406da970(param_2,param_3);
  FUN_1406da970(uVar1,param_3 + 0xc);
  return 1;
}



// FUNCTION 14174a6f0 FUN_14174a6f0 body=41 status=ok
// SIG undefined FUN_14174a6f0(void)

undefined8 FUN_14174a6f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (0x1d1 < *(int *)(param_2 + 0x40)) {
    FUN_1408bd530(param_2,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 14174a7f0 operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_> body=255 status=ok
// SIG undefined operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined4 *)*param_1;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar2 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
    lVar2 = local_38;
  }
  *(longlong *)(param_2 + 0x12) = lVar2;
  param_2[0x14] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 14174a8f0 FUN_14174a8f0 body=118 status=ok
// SIG undefined FUN_14174a8f0(void)

void FUN_14174a8f0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = local_res8[0];
  return;
}



// FUNCTION 14174a970 FUN_14174a970 body=158 status=ok
// SIG undefined FUN_14174a970(void)

void FUN_14174a970(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,2);
    }
  }
  else {
    local_res8[0] = (undefined1)*(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = local_res8[0];
  return;
}



// FUNCTION 14174aa10 FUN_14174aa10 body=156 status=ok
// SIG undefined FUN_14174aa10(void)

void FUN_14174aa10(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = (undefined1)*(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = local_res8[0];
  return;
}



// FUNCTION 14174aab0 FUN_14174aab0 body=157 status=ok
// SIG undefined FUN_14174aab0(void)

void FUN_14174aab0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,8);
    }
  }
  else {
    local_res8[0] = (undefined1)*(undefined8 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = local_res8[0];
  return;
}



// FUNCTION 14174ab50 FUN_14174ab50 body=763 status=ok
// SIG undefined FUN_14174ab50(void)

int * FUN_14174ab50(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong *_Src;
  bool bVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x10);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
  uVar2 = *param_3;
  *_Src = uVar2;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      iVar9 = (int)(uVar2 >> 4);
      uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
      uVar5 = -(iVar9 + uVar8) ^ uVar8 >> 0xd;
      uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
      uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
      uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
      uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
      uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar4 +
                      (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar9 * 0x10) == uVar2) goto LAB_14174ad0a;
          iVar9 = *(int *)(*param_1 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_14174ad0a:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar9;
      goto LAB_14174ae22;
    }
  }
  cVar3 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,iVar7,0);
  if (cVar3 == '\0') {
    iVar6 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar10 = -(iVar6 + uVar8) ^ uVar8 >> 0xd;
    uVar5 = (iVar6 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar5) - uVar10 ^ uVar5 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar8 >> 5;
    uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar5) - uVar10 ^ uVar5 << 10;
    uVar5 = ((uVar10 - uVar8) - uVar5 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14174ae22:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14174ae50 FUN_14174ae50 body=823 status=ok
// SIG undefined FUN_14174ae50(void)

int * FUN_14174ae50(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar12 = (longlong *)(*param_1 + (longlong)iVar10 * 0x18);
  FEnvironComp::FEnvironComp(plVar12,param_3);
  *(undefined4 *)(plVar12 + 2) = 0xffffffff;
  bVar16 = false;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar10 = iVar15;
    if (uVar14 != 0) {
      plVar7 = (longlong *)param_1[8];
      iVar4 = GetTypeHash(plVar12);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar7 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
          iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x18);
          if (iVar2 == (int)plVar12[1]) {
            iVar10 = iVar4;
            if (iVar2 < 1) break;
            plVar6 = (longlong *)*plVar12;
            lVar13 = *plVar7 - (longlong)plVar6;
            lVar9 = 0;
            while (*(longlong *)(lVar13 + (longlong)plVar6) == *plVar6) {
              lVar9 = lVar9 + 1;
              plVar6 = plVar6 + 1;
              if (iVar2 <= lVar9) goto LAB_14174afe3;
            }
          }
          iVar4 = (int)plVar7[2];
          iVar10 = iVar15;
        } while (iVar4 != -1);
      }
    }
LAB_14174afe3:
    bVar16 = iVar10 != -1;
    if (bVar16) {
      lVar9 = *param_1;
      if (*(longlong *)(lVar9 + (longlong)iVar10 * 0x18) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 + (longlong)iVar10 * 0x18),plVar12,0x10);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar8;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)iVar8 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar9 + 4 + (longlong)iVar8 * 0x18) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14174b162;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar14 = GetTypeHash(plVar12);
    uVar14 = uVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14174b162:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 14174b190 FUN_14174b190 body=631 status=ok
// SIG undefined FUN_14174b190(void)

int * FUN_14174b190(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar8 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar8 & 0x1f);
  puVar11 = (uint *)((longlong)iVar8 * 0x60 + *param_1);
  TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>::
  operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
            (local_res18,puVar11);
  puVar11[0x16] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar11[1];
    local_res10 = *puVar11;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    iVar8 = local_res8[0];
    lVar9 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar9 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x58);
      iVar1 = *param_2;
      bVar2 = (byte)iVar1 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar1;
      }
      puVar5 = (undefined4 *)((longlong)iVar1 * 0x60 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar1;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar6 +
                        (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      uVar7 = (undefined1)local_res8[0];
      goto LAB_14174b3eb;
    }
  }
  uVar7 = 0;
  cVar3 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res20 = param_4;
  if (cVar3 == '\0') {
    uVar10 = (puVar11[1] ^ *puVar11) & (int)param_1[9] - 1U;
    puVar11[0x17] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar11[0x16] =
         *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14174b3eb:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = uVar7;
  }
  return param_2;
}



// FUNCTION 14174b410 FUN_14174b410 body=713 status=ok
// SIG undefined FUN_14174b410(void)

int * FUN_14174b410(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *_Src;
  bool bVar15;
  int local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar12 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar12 * 0x60 + *param_1);
  TKeyInitializer<void_*_const_&>::
  operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    iVar2 = local_res8[0];
    lVar11 = (longlong)local_res8[0];
    bVar15 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar11 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar12;
      }
      puVar6 = (undefined4 *)((longlong)iVar12 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar10 = (undefined1)local_res8[0];
      goto LAB_14174b6b5;
    }
  }
  uVar10 = 0;
  cVar4 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    iVar12 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar13 = -(iVar12 + uVar9) ^ uVar9 >> 0xd;
    uVar8 = (iVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar13 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 10;
    uVar8 = ((uVar13 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_14174b6b5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar10;
  }
  return param_2;
}



// FUNCTION 14174b6e0 FUN_14174b6e0 body=845 status=ok
// SIG undefined FUN_14174b6e0(void)

void FUN_14174b6e0(undefined8 *param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_res10;
  int local_res18;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  local_res18 = CONCAT31(local_res18._1_3_,param_3);
  iVar3 = (param_2 + -2) / 2;
  if (-1 < iVar3) {
    local_res18 = iVar3 * 2 + 1;
    iVar9 = local_res18;
    iVar6 = iVar3;
joined_r0x00014174b726:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar3 * 2;
        iVar9 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          lVar10 = param_1[(longlong)iVar5 + 2];
          local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
          FName::ToString(&local_res10,&local_70);
          local_88 = *(undefined8 *)(lVar10 + 0x18);
          FName::ToString(&local_88,&local_80);
          puVar8 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar8 = local_70;
          }
          puVar7 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar7 = local_80;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_70 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (iVar4 < 0) {
            iVar9 = iVar5;
          }
          iVar9 = iVar9 + 1;
        }
        lVar10 = param_1[iVar3];
        local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
        FName::ToString(&local_res10,&local_50);
        local_88 = *(undefined8 *)(lVar10 + 0x18);
        FName::ToString(&local_88,&local_60);
        puVar8 = &DAT_143f3eda8;
        if (local_48 != 0) {
          puVar8 = local_50;
        }
        puVar7 = &DAT_143f3eda8;
        if (local_58 != 0) {
          puVar7 = local_60;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_50 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar5 < 0) {
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar9];
          param_1[iVar9] = uVar1;
          iVar3 = iVar9;
          iVar9 = iVar9 * 2 + 1;
          goto joined_r0x00014174b726;
        }
      }
      local_res18 = local_res18 + -2;
      iVar3 = iVar6 + -1;
      iVar9 = local_res18;
      iVar6 = iVar3;
    } while (-1 < iVar3);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar1;
      iVar3 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar3 * 2;
          iVar9 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar2 = param_1[(longlong)iVar6 + 2];
            local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
            FName::ToString(&local_res10,&local_60);
            local_88 = *(undefined8 *)(lVar2 + 0x18);
            FName::ToString(&local_88,&local_50);
            puVar8 = &DAT_143f3eda8;
            if (local_58 != 0) {
              puVar8 = local_60;
            }
            puVar7 = &DAT_143f3eda8;
            if (local_48 != 0) {
              puVar7 = local_50;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
            if (local_50 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_60 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (iVar5 < 0) {
              iVar9 = iVar6;
            }
            iVar9 = iVar9 + 1;
          }
          lVar2 = param_1[iVar3];
          local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
          FName::ToString(&local_res10,&local_80);
          local_88 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_88,&local_70);
          puVar8 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          puVar7 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar7 = local_70;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (local_70 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (-1 < iVar6) break;
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar9];
          param_1[iVar9] = uVar1;
          iVar3 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 14174ba30 FUN_14174ba30 body=61 status=ok
// SIG undefined FUN_14174ba30(void)

void FUN_14174ba30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d1ba40;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
  }
  return;
}



// FUNCTION 14174ba70 InternalConstructor<UBoolProperty> body=145 status=ok
// SIG undefined InternalConstructor<UBoolProperty>(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014174bae3 */
/* WARNING: Removing unreachable block (ram,0x00014174baef) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void InternalConstructor<UBoolProperty>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 1;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0x1010000;
    *puVar1 = &PTR__scalar_deleting_destructor__144d1b2e0;
    puVar1[7] = puVar1[7] & 0xffffffffbffffdff | 0x1000000000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined2 *)(puVar1 + 0xe) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x72) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x73) = 1;
  }
  return;
}



// FUNCTION 14174bb10 FUN_14174bb10 body=61 status=ok
// SIG undefined FUN_14174bb10(void)

void FUN_14174bb10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d1af00;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 14174bb50 InternalConstructor<ULinkerPlaceholderClass> body=77 status=ok
// SIG undefined InternalConstructor<ULinkerPlaceholderClass>(void)

void InternalConstructor<ULinkerPlaceholderClass>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417142f0(puVar1,param_1);
    TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>(puVar1 + 0x40);
    *puVar1 = &PTR__scalar_deleting_destructor__144d1c3b8;
    puVar1[0x40] = &PTR_LAB_144d1c728;
  }
  return;
}



// FUNCTION 14174bba0 InternalConstructor<ULinkerPlaceholderExportObject> body=171 status=ok
// SIG undefined InternalConstructor<ULinkerPlaceholderExportObject>(void)

void InternalConstructor<ULinkerPlaceholderExportObject>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d1cce8;
    puVar1[5] = &PTR_LAB_144d1cf60;
  }
  return;
}



// FUNCTION 14174bc50 __DefaultConstructor body=108 status=ok
// SIG undefined __DefaultConstructor(void)

void ULinkerPlaceholderFunction::__DefaultConstructor(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d04f28;
    TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>(puVar1 + 0x17);
    *puVar1 = &PTR__scalar_deleting_destructor__144d1c9c0;
    puVar1[0x17] = &PTR_LAB_144d1ccb8;
  }
  return;
}



// FUNCTION 14174bcc0 FUN_14174bcc0 body=191 status=ok
// SIG undefined FUN_14174bcc0(void)

void FUN_14174bcc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d1c748;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
  }
  return;
}



// FUNCTION 14174bd80 FUN_14174bd80 body=54 status=ok
// SIG undefined FUN_14174bd80(void)

void FUN_14174bd80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d1b650;
  }
  return;
}



// FUNCTION 14174bdc0 FUN_14174bdc0 body=41 status=ok
// SIG undefined FUN_14174bdc0(void)

void FUN_14174bdc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d1c028;
  }
  return;
}



// FUNCTION 14174bdf0 InternalConstructor<UPackage> body=78 status=ok
// SIG undefined InternalConstructor<UPackage>(void)

void InternalConstructor<UPackage>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d1bdb0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x11] = 0;
  }
  return;
}



// FUNCTION 14174be40 InternalConstructor<UProperty> body=54 status=ok
// SIG undefined InternalConstructor<UProperty>(void)

void InternalConstructor<UProperty>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 1;
    *puVar1 = &PTR_FUN_144d10180;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 14174be80 InternalVTableHelperCtorCaller<UArrayProperty> body=135 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UArrayProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UArrayProperty>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UArrayProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d1ba40;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174bf10 InternalVTableHelperCtorCaller<UBoolProperty> body=135 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UBoolProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UBoolProperty>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UBoolProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d1b2e0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174bfa0 InternalVTableHelperCtorCaller<UByteProperty> body=135 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UByteProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UByteProperty>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UByteProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d1af00;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c040 InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject> body=260 status=ok
// SIG undefined InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>(void)

undefined8 * InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x34) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xbc) = 0;
    puVar3[0x19] = 0;
    *(undefined4 *)(puVar3 + 0x1a) = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d1cce8;
    puVar3[5] = &PTR_LAB_144d1cf60;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c150 InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction> body=201 status=ok
// SIG undefined InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>(void)

undefined8 * InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d04f28;
    TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>(puVar3 + 0x17);
    *puVar3 = &PTR__scalar_deleting_destructor__144d1c9c0;
    puVar3[0x17] = &PTR_LAB_144d1ccb8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c220 FUN_14174c220 body=279 status=ok
// SIG undefined FUN_14174c220(void)

undefined8 * FUN_14174c220(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = FUN_141758000();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *puVar3 = &PTR_FUN_144d1c748;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
    puVar3[0xd] = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xac) = 0;
    puVar3[0x17] = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    *(undefined4 *)(puVar3 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xfc) = 0;
    puVar3[0x21] = 0;
    *(undefined4 *)(puVar3 + 0x22) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c340 InternalVTableHelperCtorCaller<UObjectPropertyBase> body=135 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UObjectPropertyBase>(void)

undefined8 * InternalVTableHelperCtorCaller<UObjectPropertyBase>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UObjectPropertyBase::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d1b650;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c3d0 InternalVTableHelperCtorCaller<UObjectRedirector> body=131 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UObjectRedirector>(void)

undefined8 * InternalVTableHelperCtorCaller<UObjectRedirector>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UObjectRedirector::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *puVar3 = &PTR_FUN_144d1c028;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c460 InternalVTableHelperCtorCaller<UPackage> body=166 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UPackage>(void)

undefined8 * InternalVTableHelperCtorCaller<UPackage>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UPackage::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *puVar3 = &PTR__scalar_deleting_destructor__144d1bdb0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c510 InternalVTableHelperCtorCaller<UProperty> body=135 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UProperty>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = UProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *puVar3 = &PTR_FUN_144d10180;
    puVar3[9] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174c5a0 FUN_14174c5a0 body=1098 status=ok
// SIG undefined FUN_14174c5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14174c5a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  int local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined2 *local_3c0;
  int local_3b8;
  undefined2 *local_3b0;
  int local_3a8;
  undefined2 *local_3a0;
  int local_398;
  undefined2 *local_390;
  int local_388;
  undefined2 *local_380;
  int local_378;
  undefined2 *local_370;
  int local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_3c8 = param_4;
    local_348 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_3e8 = &local_348;
    do {
      plVar7 = (longlong *)*local_3e8;
      plVar8 = (longlong *)local_3e8[1];
      local_350 = local_3e8[2];
      local_3e0 = (int)local_350;
      lVar4 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
      plVar6 = plVar7;
      if ((int)local_350 != 0) {
LAB_14174c680:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          plVar9 = plVar8 + 1;
          lVar1 = plVar6[lVar4 >> 1];
          plVar6[lVar4 >> 1] = *plVar6;
          *plVar6 = lVar1;
          plVar7 = plVar6;
LAB_14174c6b0:
          plVar7 = plVar7 + 1;
          if (plVar7 <= plVar8) goto code_r0x00014174c6bd;
          goto LAB_14174c750;
        }
        for (; plVar9 = plVar6, plVar7 = plVar6, plVar6 < plVar8; plVar8 = plVar8 + -1) {
          while (plVar10 = plVar9, plVar7 = plVar7 + 1, plVar7 <= plVar8) {
            lVar4 = *plVar10;
            local_3d0 = *(undefined8 *)(*plVar7 + 0x18);
            FName::ToString(&local_3d0,&local_370);
            local_3d8 = *(undefined8 *)(lVar4 + 0x18);
            FName::ToString(&local_3d8,&local_380);
            puVar5 = &DAT_143f3eda8;
            if (local_368 != 0) {
              puVar5 = local_370;
            }
            puVar3 = &DAT_143f3eda8;
            if (local_378 != 0) {
              puVar3 = local_380;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
            if (local_380 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_370 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            plVar9 = plVar7;
            if (-1 < iVar2) {
              plVar9 = plVar10;
            }
          }
          lVar4 = *plVar10;
          *plVar10 = *plVar8;
          *plVar8 = lVar4;
          param_4 = local_3c8;
        }
        goto LAB_14174c8bb;
      }
LAB_14174c8a7:
      FUN_14174b6e0(plVar7,lVar4,param_3,param_4);
LAB_14174c8bb:
      local_3e8 = local_3e8 + -3;
    } while (&local_348 <= local_3e8);
  }
  return;
code_r0x00014174c6bd:
  lVar4 = *plVar6;
  local_3d8 = *(undefined8 *)(*plVar7 + 0x18);
  FName::ToString(&local_3d8,&local_3b0);
  local_3d0 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_3d0,&local_3c0);
  puVar5 = &DAT_143f3eda8;
  if (local_3a8 != 0) {
    puVar5 = local_3b0;
  }
  puVar3 = &DAT_143f3eda8;
  if (local_3b8 != 0) {
    puVar3 = local_3c0;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
  if (local_3c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_3b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (-1 < iVar2) goto LAB_14174c6b0;
LAB_14174c750:
  do {
    plVar10 = plVar9;
    plVar9 = plVar10 + -1;
    if (plVar9 <= plVar6) break;
    lVar4 = *plVar9;
    local_3d0 = *(undefined8 *)(*plVar6 + 0x18);
    FName::ToString(&local_3d0,&local_390);
    local_3d8 = *(undefined8 *)(lVar4 + 0x18);
    FName::ToString(&local_3d8,&local_3a0);
    puVar5 = &DAT_143f3eda8;
    if (local_388 != 0) {
      puVar5 = local_390;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_398 != 0) {
      puVar3 = local_3a0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
    if (local_3a0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_390 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  } while (-1 < iVar2);
  if (plVar7 <= plVar9) {
    lVar4 = *plVar7;
    *plVar7 = *plVar9;
    *plVar9 = lVar4;
    goto LAB_14174c6b0;
  }
  lVar4 = *plVar6;
  *plVar6 = *plVar9;
  local_3e0 = local_3e0 + -1;
  *plVar9 = lVar4;
  if ((longlong)((longlong)plVar9 + (-8 - (longlong)plVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar8 - (longlong)plVar7 & 0xfffffffffffffff8U)) {
    if (plVar7 < plVar8) {
      *local_3e8 = (longlong)plVar7;
      local_3e8[1] = (longlong)plVar8;
      *(int *)(local_3e8 + 2) = local_3e0;
      local_3e8 = local_3e8 + 3;
    }
    if (plVar9 <= plVar6 + 1) goto LAB_14174c8bb;
    plVar8 = plVar10 + -2;
    plVar7 = plVar6;
  }
  else {
    if (plVar6 + 1 < plVar9) {
      *local_3e8 = (longlong)plVar6;
      local_3e8[1] = (longlong)(plVar10 + -2);
      *(int *)(local_3e8 + 2) = local_3e0;
      local_3e8 = local_3e8 + 3;
    }
    if (plVar8 <= plVar7) goto LAB_14174c8bb;
  }
  lVar4 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
  plVar6 = plVar7;
  if (local_3e0 == 0) goto LAB_14174c8a7;
  goto LAB_14174c680;
}



// FUNCTION 14174c9f0 IsA<UArrayProperty> body=69 status=ok
// SIG undefined IsA<UArrayProperty>(void)

ulonglong UObjectBaseUtility::IsA<UArrayProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UArrayProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14174ca40 IsA<UProperty> body=69 status=ok
// SIG undefined IsA<UProperty>(void)

ulonglong UObjectBaseUtility::IsA<UProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UProperty::StaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14174ca90 TLinkerImportPlaceholder<UClass> body=291 status=ok
// SIG undefined TLinkerImportPlaceholder<UClass>(void)

undefined8 * TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d1c378;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14174cbc0 TLinkerImportPlaceholder<UFunction> body=291 status=ok
// SIG undefined TLinkerImportPlaceholder<UFunction>(void)

undefined8 *
TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d1c398;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14174ccf0 FUN_14174ccf0 body=146 status=ok
// SIG undefined FUN_14174ccf0(void)

longlong * FUN_14174ccf0(longlong *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar2 = FUN_14171bfe0();
  FUN_1417a5560(uVar2,param_1,param_3,param_2,param_4);
  iVar1 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 < (int)param_1[1]) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar1 * 8) != 0) {
        return param_1;
      }
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 2) = iVar1;
    } while (iVar1 < (int)param_1[1]);
  }
  return param_1;
}



// FUNCTION 14174cd90 FClassExclusionData body=251 status=ok
// SIG undefined FClassExclusionData(void)

undefined8 * FClassExclusionData::FClassExclusionData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  return param_1;
}



// FUNCTION 14174ce90 FLinkerManager body=288 status=ok
// SIG undefined FLinkerManager(void)

undefined8 * FLinkerManager::FLinkerManager(undefined8 *param_1)

{
  FSelfRegisteringExec::FSelfRegisteringExec();
  *param_1 = &PTR__scalar_deleting_destructor__144d1ccd8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x29),4000);
  return param_1;
}



// FUNCTION 14174cfb0 FObjectExport body=84 status=ok
// SIG undefined FObjectExport(void)

undefined8 * FObjectExport::FObjectExport(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x1000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  return param_1;
}



// FUNCTION 14174d010 FObjectImport body=115 status=ok
// SIG undefined FObjectImport(void)

undefined8 * FObjectImport::FObjectImport(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = uVar2;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = uVar2;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) + 0x18);
  }
  param_1[2] = uVar1;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
  }
  param_1[3] = uVar2;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14174d090 FObjectImport body=27 status=ok
// SIG undefined FObjectImport(void)

undefined8 * FObjectImport::FObjectImport(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14174d0b0 FPackageFileSummary body=125 status=ok
// SIG undefined FPackageFileSummary(void)

void * FPackageFileSummary::FPackageFileSummary(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  FEngineVersion::FEngineVersion((longlong)param_1 + 0xa0);
  FEngineVersion::FEngineVersion((longlong)param_1 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  ::_guard_xfg_dispatch_icall_nop(param_1,0,0x118);
  return param_1;
}



// FUNCTION 14174d130 FEnvironComp body=106 status=ok
// SIG undefined FEnvironComp(void)

undefined8 * FEnvironComp::FEnvironComp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
  return param_1;
}



// FUNCTION 14174d1a0 FUN_14174d1a0 body=447 status=ok
// SIG undefined FUN_14174d1a0(void)

longlong * FUN_14174d1a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 *local_28;
  undefined1 *puStack_20;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,0);
  local_res8[0] = 0;
  *(longlong *)*param_1 = param_2;
  puStack_20 = local_res8;
  lVar6 = *(longlong *)(param_2 + 0x20);
  local_28 = &LAB_141750680;
  lVar3 = FUN_1415d8310(&local_28,&DAT_1464b5310);
  if (lVar6 == 0) {
    return param_1;
  }
  lVar7 = (longlong)(*(int *)(lVar3 + 0x40) + -1);
  do {
    lVar5 = *(longlong *)(lVar6 + 0x10);
    lVar4 = FUN_14171bfe0();
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        return param_1;
      }
    }
    lVar5 = UProperty::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar5 = lVar6;
    if (bVar2) {
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar6;
    }
    else {
      lVar4 = FUN_14171c950();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (lVar7 == -1) {
          return param_1;
        }
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar7 * 8);
        lVar4 = *(longlong *)(lVar5 + 0x70);
        while( true ) {
          if (lVar4 == 0) {
            return param_1;
          }
          if (lVar4 == lVar6) break;
          lVar4 = *(longlong *)(lVar4 + 0x30);
        }
        iVar1 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
        }
        lVar7 = lVar7 + -1;
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar5;
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x20);
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 14174d360 FPrimaryAssetId body=290 status=ok
// SIG undefined FPrimaryAssetId(void)

undefined8 * FPrimaryAssetId::FPrimaryAssetId(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  longlong local_38 [2];
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_38[1] = 2;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  lVar1 = local_38[0];
  FGenericPlatformString::Memcpy(local_38[0],&DAT_144ca0610,4);
  cVar4 = FUN_1404e14f0(param_2,local_38,local_38 + 2,&local_18,0,0);
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  puVar3 = local_18;
  puVar2 = local_28;
  if (cVar4 != '\0') {
    puVar5 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar5 = local_28;
    }
    FName::FName(&local_res8,puVar5,1);
    puVar5 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar5 = puVar3;
    }
    *param_1 = local_res8;
    FName::FName(&local_res8,puVar5,1);
    param_1[1] = local_res8;
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return param_1;
}



// FUNCTION 14174d490 FUN_14174d490 body=143 status=ok
// SIG undefined FUN_14174d490(void)

undefined8 * FUN_14174d490(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  *param_1 = param_2;
  local_res8[0] = 0;
  local_18 = &LAB_141750680;
  lVar2 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  iVar1 = *(int *)(lVar2 + 0x20);
  *(int *)(lVar2 + 0x20) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8) = param_2;
  return param_1;
}



// FUNCTION 14174d520 FUN_14174d520 body=163 status=ok
// SIG undefined FUN_14174d520(void)

undefined8 * FUN_14174d520(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  *param_1 = 0;
  local_res8[0] = 0;
  local_18 = &LAB_141750680;
  lVar2 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  if ((0 < *(int *)(lVar2 + 0x20)) || (0 < *(int *)(lVar2 + 0x30))) {
    *param_1 = param_2;
    iVar1 = *(int *)(lVar2 + 0x40);
    *(int *)(lVar2 + 0x40) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x44) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar2 + 0x38),iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar1 * 8) = param_2;
  }
  return param_1;
}



// FUNCTION 14174d5d0 FUN_14174d5d0 body=143 status=ok
// SIG undefined FUN_14174d5d0(void)

undefined8 * FUN_14174d5d0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  *param_1 = param_2;
  local_res8[0] = 0;
  local_18 = &LAB_141750680;
  lVar2 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x28,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 8) = param_2;
  return param_1;
}



// FUNCTION 14174d660 FUN_14174d660 body=149 status=ok
// SIG undefined FUN_14174d660(void)

undefined8 *
FUN_14174d660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             ulonglong param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong *plVar1;
  
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_144d10180;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  param_1[7] = param_5 | 0x8000000000000;
  plVar1 = (longlong *)0x0;
  param_1[9] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar1 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar1 + 0x278))(plVar1,param_1);
  *param_1 = &PTR__scalar_deleting_destructor__144d1b2e0;
  *(undefined4 *)(param_1 + 0xe) = 0x1010000;
  UBoolProperty::SetBoolSize(param_1,param_7,param_8,param_6);
  return param_1;
}



// FUNCTION 14174d700 UObject body=40 status=ok
// SIG undefined UObject(void)

undefined8 * UObject::UObject(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f3f648;
  FUN_141647440(L"UObject(FVTableHelper& Helper)");
  return param_1;
}



// FUNCTION 14174d730 UObject body=121 status=ok
// SIG undefined UObject(void)

undefined8 * UObject::UObject(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  UObjectBase::UObjectBase
            (param_1,-(uint)((~((byte)(param_3 >> 0x1a) & 0x3f) & 1) != 0) & 0x84 | (uint)param_3);
  *param_1 = &PTR_FUN_143f3f648;
  if (DAT_1468c21ac != '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x61,
               L"We are currently retrieving VTable ptr. Please use FVTableHelper constructor instead."
              );
    FDebug::AssertFailed
              (&DAT_144d11cf2,"Unknown",0x61,
               L"We are currently retrieving VTable ptr. Please use FVTableHelper constructor instead."
              );
  }
  return param_1;
}



// FUNCTION 14174d7b0 UProperty body=46 status=ok
// SIG undefined UProperty(void)

undefined8 * UProperty::UProperty(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_144d10180;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14174d7e0 FUN_14174d7e0 body=96 status=ok
// SIG undefined FUN_14174d7e0(void)

undefined8 *
FUN_14174d7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_144d10180;
  plVar1 = (longlong *)0x0;
  param_1[7] = param_5;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  param_1[9] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar1 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar1 + 0x278))(plVar1,param_1);
  return param_1;
}



// FUNCTION 14174d840 ~TLinkerImportPlaceholder<UClass> body=148 status=ok
// SIG undefined ~TLinkerImportPlaceholder<UClass>(void)

void TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 200);
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase(param_1);
  return;
}



// FUNCTION 14174d8e0 ~FClassExclusionData body=175 status=ok
// SIG undefined ~FClassExclusionData(void)

void FClassExclusionData::~FClassExclusionData(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 14174d990 ~FLinkerPlaceholderBase body=180 status=ok
// SIG undefined ~FLinkerPlaceholderBase(void)

void FLinkerPlaceholderBase::~FLinkerPlaceholderBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d1c2a0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc,0);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14174da50 FUN_14174da50 body=76 status=ok
// SIG undefined FUN_14174da50(void)

void FUN_14174da50(void)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = &LAB_141750680;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x18);
  return;
}



// FUNCTION 14174daa0 FUN_14174daa0 body=88 status=ok
// SIG undefined FUN_14174daa0(void)

void FUN_14174daa0(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &LAB_141750680;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  if (*param_1 != 0) {
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x38);
  }
  return;
}



// FUNCTION 14174db00 FUN_14174db00 body=76 status=ok
// SIG undefined FUN_14174db00(void)

void FUN_14174db00(void)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = &LAB_141750680;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b5310);
  *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x28);
  return;
}



// FUNCTION 14174db50 operator= body=369 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_14174dc2d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_14174dc2d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_14058c5a0(param_1,local_res8,(longlong)iStack_3c * 0x10 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 14174dcd0 operator<< body=86 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_14174e690(&local_18,param_2);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 14174dd30 FUN_14174dd30 body=171 status=ok
// SIG undefined FUN_14174dd30(void)

undefined8 FUN_14174dd30(undefined8 param_1,longlong param_2)

{
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  (**(code **)(*local_20 + 0x40))(local_20,param_2 + 0x10);
  (**(code **)(**(longlong **)(local_18 + 8) + 0x40))(*(longlong **)(local_18 + 8),param_2 + 0x18);
  FUN_1415d6020(local_18,param_2 + 8);
  (**(code **)(**(longlong **)(local_18 + 8) + 0x40))(*(longlong **)(local_18 + 8),param_2);
  if ((*(byte *)(*(longlong *)(local_18 + 8) + 0x28) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 14174dde0 operator<< body=86 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_14174e8e0(&local_18,param_2);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 14174de40 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_14174e290();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      FUN_14175e490(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14174df10 FUN_14174df10 body=883 status=ok
// SIG undefined FUN_14174df10(void)

longlong * FUN_14174df10(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar10 = (longlong)local_2c * 0x60 + *local_48;
        (**(code **)(*param_1 + 0x10))(param_1,lVar10);
        FUN_1415f7820(param_1,lVar10 + 8);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(lVar10 + 0x48) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(lVar10 + 0x48),0,0);
            *(undefined8 *)(lVar10 + 0x48) = uVar7;
          }
          *(undefined4 *)(lVar10 + 0x50) = 0;
          TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(lVar10 + 8,*(int *)(lVar10 + 0x10) - *(int *)(lVar10 + 0x3c));
        }
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  TSparseArray<TSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0x60 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x60 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
      puVar9 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x60);
      puVar1 = (undefined8 *)(puVar9 + 2);
      *puVar9 = 0xffffffff;
      puVar9[1] = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 0xc) = 0;
      *(undefined8 *)(puVar9 + 0xe) = 0;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      *(undefined8 *)(puVar9 + 0x12) = 0;
      *(undefined8 *)(puVar9 + 0x14) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 0xc) = 0;
      puVar9[0xe] = 0xffffffff;
      puVar9[0xf] = 0;
      *(undefined8 *)(puVar9 + 0x12) = 0;
      puVar9[0x14] = 0;
      puVar9[0x16] = 0xffffffff;
      (**(code **)(*param_1 + 0x10))(param_1);
      FUN_1415f7820(param_1,puVar1);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(puVar9 + 0x12) != 0) {
          uVar7 = FMemory::Realloc(*(longlong *)(puVar9 + 0x12),0,0);
          *(undefined8 *)(puVar9 + 0x12) = uVar7;
        }
        puVar9[0x14] = 0;
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(puVar1,puVar9[4] - puVar9[0xf],0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 14174e290 FUN_14174e290 body=1015 status=ok
// SIG undefined FUN_14174e290(void)

longlong * FUN_14174e290(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  plVar1 = param_2 + 2;
  iVar6 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar7 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar11 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar4 = *local_58 + (longlong)local_3c * 0x28;
        (**(code **)(*param_1 + 0x40))(param_1,lVar4);
        (**(code **)(*param_1 + 0x40))(param_1,lVar4 + 8);
        (**(code **)(*param_1 + 0x40))(param_1,lVar4 + 0x10);
        puVar2 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,lVar4 + 0x18,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,lVar4 + 0x18,4);
          }
        }
        else {
          *(undefined4 *)(lVar4 + 0x18) = *puVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar6 = 0;
  local_res8[0] = 0;
  if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar11;
    *plVar11 = *plVar11 + 4;
  }
  iVar7 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar8 = iVar7 + 0x1f + (iVar7 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar7 = (int)param_2[6];
        iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar10 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0x28);
        *(int *)(param_2 + 6) = iVar10;
        *(int *)((longlong)param_2 + 0x34) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar10 * 0x28) = 0xffffffff;
        }
      }
      plVar11 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar11 = plVar1;
      }
      iVar10 = iVar7;
      if (iVar7 < 0) {
        iVar10 = iVar7 + 0x1f;
      }
      puVar3 = (uint *)((longlong)plVar11 + (longlong)(iVar10 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)iVar7 & 0x1f);
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar7 * 0x28) = 0;
      lVar4 = lVar4 + (longlong)iVar7 * 0x28;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      puVar2 = (undefined4 *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*param_1 + 0x40))(param_1,lVar4 + 8);
      (**(code **)(*param_1 + 0x40))(param_1,lVar4 + 0x10);
      puVar5 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar2,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar2,4);
        }
      }
      else {
        *puVar2 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 14174e690 FUN_14174e690 body=450 status=ok
// SIG undefined FUN_14174e690(void)

void FUN_14174e690(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  
  lVar1 = *(longlong *)(*param_1 + 8);
  FUN_1415d6020(*param_1,param_2 + 0x10);
  FUN_1415d6020(*param_1,param_2 + 0x18);
  if (0x1fb < *(int *)(lVar1 + 0x40)) {
    FUN_1415d6020(*param_1,param_2 + 0x1c);
  }
  FUN_1415d6020(*param_1,param_2 + 8);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))(*(longlong **)(*param_1 + 8),param_2);
  local_res8[0] = *(uint *)(param_2 + 0x20) & 0x22d4003b;
  FUN_1415d6020(*param_1,local_res8);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = local_res8[0] & 0x22d4003b;
  }
  if (*(int *)(lVar1 + 0x40) < 0x1ff) {
    local_res10[0] = *(int *)(param_2 + 0x28);
    FUN_1415d6020(*param_1,local_res10);
    *(longlong *)(param_2 + 0x28) = (longlong)local_res10[0];
    local_res18[0] = *(int *)(param_2 + 0x30);
    FUN_1415d6020(*param_1,local_res18);
    *(longlong *)(param_2 + 0x30) = (longlong)local_res18[0];
  }
  else {
    FUN_1404c11e0(*(undefined8 *)(*param_1 + 8),param_2 + 0x28);
    FUN_1404c11e0(*(undefined8 *)(*param_1 + 8),param_2 + 0x30);
  }
  (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),param_2 + 0x54);
  (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),param_2 + 0x55);
  (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),param_2 + 0x56);
  FUN_141661f40(param_1,param_2 + 0x5c);
  FUN_1415d6020(*param_1,param_2 + 0x6c);
  iVar2 = *(int *)(lVar1 + 0x40);
  if (0x16c < iVar2) {
    (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),param_2 + 0x57);
    iVar2 = *(int *)(lVar1 + 0x40);
  }
  if (0x1e4 < iVar2) {
    (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),param_2 + 0x58);
    iVar2 = *(int *)(lVar1 + 0x40);
  }
  if (0x1fa < iVar2) {
    FUN_1415d6020(*param_1,param_2 + 0x70);
    FUN_1415d6020(*param_1,param_2 + 0x74);
    FUN_1415d6020(*param_1,param_2 + 0x78);
    FUN_1415d6020(*param_1,param_2 + 0x7c);
    FUN_1415d6020(*param_1,param_2 + 0x80);
  }
  return;
}



// FUNCTION 14174e860 FUN_14174e860 body=119 status=ok
// SIG undefined FUN_14174e860(void)

void FUN_14174e860(longlong *param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))(*(longlong **)(*param_1 + 8),param_2 + 0x10);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))(*(longlong **)(*param_1 + 8),param_2 + 0x18);
  FUN_1415d6020(*param_1,param_2 + 8);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))(*(longlong **)(*param_1 + 8),param_2);
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14174e8e0 FUN_14174e8e0 body=2332 status=ok
// SIG undefined FUN_14174e8e0(void)

void FUN_14174e8e0(longlong *param_1,int *param_2)

{
  void *_Src;
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  
  plVar8 = *(longlong **)(*param_1 + 8);
  if (((*(byte *)(plVar8 + 5) & 1) == 0) ||
     (lVar5 = (**(code **)(*plVar8 + 0x98))(plVar8), 0x1f < lVar5)) {
    FUN_1415d6020(*param_1,param_2);
  }
  if (*param_2 != -0x61d57c3f) {
    if (*param_2 != -0x3e7cd562) {
      return;
    }
    *param_2 = -0x61d57c3f;
    bVar3 = *(byte *)((longlong)plVar8 + 0x29);
    if ((bVar3 & 0x10) == 0) {
      bVar3 = bVar3 | 0x10;
    }
    else {
      bVar3 = bVar3 & 0xef;
    }
    *(byte *)((longlong)plVar8 + 0x29) = bVar3;
  }
  local_res18[0] = -7;
  FUN_1415d6020(*param_1,local_res18);
  iVar10 = 0;
  if ((*(byte *)(plVar8 + 5) & 1) == 0) {
    if ((char)param_2[0x3a] == '\0') {
      local_res8[0] = 0x360;
      FUN_1415d6020(*param_1,local_res8);
      FUN_1415d6020(*param_1,param_2 + 1);
      FUN_1415d6020(*param_1,param_2 + 2);
      FUN_141693a20(param_2 + 4,param_1,3);
    }
    else {
      local_res8[0] = 0;
      FUN_1415d6020(*param_1,local_res8);
      FUN_1415d6020(*param_1,local_res8);
      FUN_1415d6020(*param_1,local_res8);
      local_58 = 0;
      local_50 = 0;
      FUN_141693a20(&local_58,param_1,3);
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  else if (local_res18[0] < 0) {
    if (local_res18[0] < -7) {
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    if (local_res18[0] != -4) {
      local_res8[0] = 0;
      FUN_1415d6020(*param_1,local_res8);
    }
    FUN_1415d6020(*param_1,param_2 + 1);
    FUN_1415d6020(*param_1,param_2 + 2);
    if (local_res18[0] < -1) {
      if (local_res18[0] == -2) {
        iVar9 = 2;
      }
      else if (local_res18[0] < -2) {
        if (local_res18[0] < -5) {
LAB_14174e9fa:
          iVar9 = 3;
        }
        else {
          iVar9 = 1;
        }
      }
      else {
        iVar9 = iVar10;
        if (local_res18[0] < -5) goto LAB_14174e9fa;
      }
      FUN_141693a20(param_2 + 4,param_1,iVar9);
    }
    if ((param_2[1] == 0) && (param_2[2] == 0)) {
      *(undefined1 *)(param_2 + 0x3a) = 1;
      param_2[1] = 0x204;
      param_2[2] = 0x1a;
      piVar6 = (int *)FCustomVersionContainer::GetRegistered();
      piVar2 = param_2 + 4;
      if (piVar2 != piVar6) {
        iVar9 = piVar6[2];
        _Src = *(void **)piVar6;
        param_2[6] = iVar9;
        if ((iVar9 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(piVar2,iVar9);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar2,_Src,(longlong)iVar9 << 5);
        }
      }
    }
  }
  else {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  FUN_1415d6020(*param_1,param_2 + 8);
  FUN_14158ce90(*(undefined8 *)(*param_1 + 8),param_2 + 10);
  FUN_1415d6020(*param_1,param_2 + 9);
  if (param_2[9] < 0) {
    (**(code **)(*plVar8 + 0x138))(plVar8,1);
  }
  FUN_1415d6020(*param_1,param_2 + 0xe);
  FUN_1415d6020(*param_1,param_2 + 0xf);
  if ((-1 < *(char *)((longlong)plVar8 + 0x2a)) &&
     (((*(byte *)(plVar8 + 5) & 2) != 0 || (0x203 < param_2[1])))) {
    FUN_14158ce90(*(undefined8 *)(*param_1 + 8),param_2 + 0x10);
  }
  if (0x1ca < param_2[1]) {
    FUN_1415d6020(*param_1,param_2 + 0x14);
    FUN_1415d6020(*param_1,param_2 + 0x15);
  }
  FUN_1415d6020(*param_1,param_2 + 0x16);
  FUN_1415d6020(*param_1,param_2 + 0x17);
  FUN_1415d6020(*param_1,param_2 + 0x18);
  FUN_1415d6020(*param_1,param_2 + 0x19);
  FUN_1415d6020(*param_1,param_2 + 0x1a);
  bVar3 = *(byte *)(plVar8 + 5);
  if ((bVar3 & 1) != 0) {
    if (param_2[1] < 0xd6) {
      return;
    }
    if (0x204 < param_2[1]) {
      return;
    }
  }
  if (((bVar3 & 2) != 0) || (0x17f < param_2[1])) {
    FUN_1415d6020(*param_1,param_2 + 0x1b);
    FUN_1415d6020(*param_1,param_2 + 0x1c);
    bVar3 = *(byte *)(plVar8 + 5);
  }
  if (((bVar3 & 2) != 0) || (0x1fd < param_2[1])) {
    FUN_1415d6020(*param_1,param_2 + 0x1d);
  }
  FUN_1415d6020(*param_1,param_2 + 0x1e);
  local_res10[0] = param_2[0x26];
  FUN_141661f40(param_1,param_2 + 0x1f);
  FUN_1415d6020(*param_1,local_res10);
  if (((*(byte *)(plVar8 + 5) & 1) != 0) && (0 < local_res10[0])) {
    param_2[0x26] = 0;
    iVar9 = iVar10;
    if (param_2[0x27] != 1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x24,1);
      iVar9 = param_2[0x26];
    }
    param_2[0x26] = local_res10[0] + iVar9;
    if (param_2[0x27] < local_res10[0] + iVar9) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x24);
    }
  }
  iVar9 = iVar10;
  if (0 < local_res10[0]) {
    do {
      FGenerationInfo::Serialize
                (*(longlong *)(param_2 + 0x24) + (longlong)iVar9 * 8,param_1,param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_res10[0]);
  }
  if (param_2[1] < 0x150) {
    local_res8[0] = 0;
    FUN_1415d6020(*param_1,local_res8);
    if (((*(byte *)(plVar8 + 5) & 1) != 0) && (local_res8[0] != 0)) {
      local_58 = 0;
      local_50 = 0;
      FEngineVersion::Set(param_2 + 0x28,4,0,0,local_res8[0],&local_58);
      lVar5 = local_58;
      goto LAB_14174edb0;
    }
  }
  else if (plVar8[0xe] == 0) {
    if ((*(byte *)(plVar8 + 5) & 2) != 0) {
      uVar7 = FEngineVersion::Current();
      cVar4 = FEngineVersionBase::HasChangelist(uVar7);
      if (cVar4 == '\0') goto LAB_14174ed48;
    }
    operator<<(param_1,param_2 + 0x28);
  }
  else {
LAB_14174ed48:
    FEngineVersion::FEngineVersion(&local_58);
    operator<<(param_1,&local_58);
    lVar5 = local_48;
LAB_14174edb0:
    if (lVar5 != 0) {
      FMemory::Free();
    }
  }
  if (param_2[1] < 0x1bc) {
    if ((*(byte *)(plVar8 + 5) & 1) != 0) {
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
      param_2[0x32] = param_2[0x2a];
      FString::operator=(param_2 + 0x34,param_2 + 0x2c);
    }
    goto LAB_14174ee4d;
  }
  if (plVar8[0xe] == 0) {
    if ((*(byte *)(plVar8 + 5) & 2) != 0) {
      uVar7 = FEngineVersion::Current();
      cVar4 = FEngineVersionBase::HasChangelist(uVar7);
      if (cVar4 == '\0') goto LAB_14174edf2;
    }
    operator<<(param_1,param_2 + 0x30);
  }
  else {
LAB_14174edf2:
    FEngineVersion::FEngineVersion(&local_58);
    operator<<(param_1,&local_58);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
LAB_14174ee4d:
  FUN_1415d6020(*param_1,param_2 + 0x38);
  cVar4 = FCompression::VerifyCompressionFlagsValid(param_2[0x38]);
  if (cVar4 == '\0') {
    param_2[1] = 0xd5;
  }
  else {
    local_68 = 0;
    local_60 = 0;
    local_res8[0] = 0;
    plVar1 = *(longlong **)(*param_1 + 8);
    piVar2 = *(int **)plVar1[1];
    if ((int *)((undefined8 *)plVar1[1])[1] < piVar2 + 1) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
      if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *piVar2;
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    }
    if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
      TArray<FCompressedChunk,FDefaultAllocator>::SetNum(&local_68,local_res8[0],1);
    }
    iVar9 = iVar10;
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,(longlong)iVar9 * 0x10 + local_68);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_res8[0]);
    }
    if ((int)local_60 == 0) {
      FUN_1415d6020(*param_1,param_2 + 0x39);
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_res8[0] = 0;
      plVar1 = *(longlong **)(*param_1 + 8);
      piVar2 = *(int **)plVar1[1];
      if ((int *)((undefined8 *)plVar1[1])[1] < piVar2 + 1) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
        if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar1,local_res8,4);
        }
      }
      else {
        local_res8[0] = *piVar2;
        *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
      }
      lVar5 = *param_1;
      if ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x28) & 1) != 0) {
        FUN_141764a30(&local_78,local_res8[0],1);
        lVar5 = *param_1;
      }
      iVar9 = iVar10;
      if (0 < local_res8[0]) {
        do {
          FUN_14158ce90(*(undefined8 *)(*param_1 + 8),local_78 + (longlong)iVar9 * 2);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_res8[0]);
        lVar5 = *param_1;
      }
      if (-7 < local_res18[0]) {
        local_res8[0] = 0;
        FUN_1415d6020(lVar5,local_res8);
        lVar5 = *param_1;
      }
      FUN_1415d6020(lVar5,param_2 + 0x3b);
      FUN_1404c11e0(*(undefined8 *)(*param_1 + 8),param_2 + 0x3c);
      iVar9 = param_2[1];
      if (0xdf < iVar9) {
        FUN_1415d6020(*param_1,param_2 + 0x3e);
        iVar9 = param_2[1];
      }
      if (iVar9 < 0x146) {
        if ((0x115 < iVar9) && ((*(byte *)(plVar8 + 5) & 1) != 0)) {
          local_res8[0] = -1;
          FUN_1415d6020(*param_1,local_res8);
          if (-1 < local_res8[0]) {
            iVar10 = param_2[0x42];
            param_2[0x42] = iVar10 + 1;
            if (param_2[0x43] < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x40,iVar10);
            }
            *(int *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar10 * 4) = local_res8[0];
          }
        }
      }
      else {
        local_res8[0] = param_2[0x42];
        plVar1 = *(longlong **)(*param_1 + 8);
        piVar2 = *(int **)plVar1[1];
        if ((int *)((undefined8 *)plVar1[1])[1] < piVar2 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,local_res8,4);
          }
        }
        else {
          local_res8[0] = *piVar2;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
          TArray<int,FDefaultAllocator>::SetNum(param_2 + 0x40,local_res8[0],1);
        }
        if (0 < local_res8[0]) {
          do {
            FUN_1415d6020(*param_1,*(longlong *)(param_2 + 0x40) + (longlong)iVar10 * 4);
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_res8[0]);
        }
      }
      if (((*(byte *)(plVar8 + 5) & 2) == 0) && (param_2[1] < 0x1fb)) {
        param_2[0x44] = -1;
        param_2[0x45] = 0;
      }
      else {
        FUN_1415d6020(*param_1,param_2 + 0x44);
        FUN_1415d6020(*param_1,param_2 + 0x45);
      }
      plVar8 = local_78;
      for (iVar10 = (int)local_70; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else {
      param_2[1] = 0xd5;
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14174f200 operator++ body=191 status=ok
// SIG undefined operator++(void)

void TObjectIterator<UObject>::operator++(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  do {
    do {
      param_1[2] = 0;
      uVar3 = *(uint *)(param_1 + 1);
      do {
        uVar2 = uVar3 + 1;
        *(uint *)(param_1 + 1) = uVar2;
        if (*(int *)(*param_1 + 0x24) <= (int)uVar2) {
          return;
        }
        uVar6 = uVar2 & 0xffff;
        uVar5 = uVar2;
        if ((int)uVar2 < 0) {
          uVar5 = uVar3 + 0x10000;
          uVar6 = uVar6 - 0x10000;
        }
        lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (longlong)((int)uVar5 >> 0x10) * 8);
        plVar1 = (longlong *)(lVar4 + (longlong)(int)uVar6 * 0x18);
        uVar3 = uVar2;
      } while (*(longlong *)(lVar4 + (longlong)(int)uVar6 * 0x18) == 0);
      param_1[2] = (longlong)plVar1;
      lVar4 = *plVar1;
    } while ((*(uint *)(param_1 + 4) & *(uint *)(lVar4 + 8)) != 0);
    uVar3 = *(uint *)(lVar4 + 0xc);
    lVar4 = 0;
    if ((int)uVar3 < (int)DAT_1469e91c4) {
      uVar2 = uVar3 & 0xffff;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0xffff;
        uVar2 = uVar2 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)uVar2 * 0x18;
    }
  } while ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar4 + 8)) != 0);
  return;
}



// FUNCTION 14174f2c0 operator++ body=308 status=ok
// SIG undefined operator++(void)

void FObjectIterator::operator++(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
LAB_14174f2e0:
  do {
    do {
      lVar6 = *param_1;
      iVar8 = (int)param_1[1] + 1;
      *(int *)(param_1 + 1) = iVar8;
      param_1[2] = 0;
      if (*(int *)(lVar6 + 0x24) <= iVar8) {
        return;
      }
      while (uVar7 = iVar8 >> 0x1f & 0xffff, uVar4 = iVar8 + uVar7,
            lVar5 = (longlong)(int)((uVar4 & 0xffff) - uVar7),
            lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)((int)uVar4 >> 0x10) * 8),
            plVar1 = (longlong *)(lVar2 + lVar5 * 0x18), *(longlong *)(lVar2 + lVar5 * 0x18) == 0) {
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 1) = iVar8;
        if (*(int *)(lVar6 + 0x24) <= iVar8) {
          return;
        }
      }
      param_1[2] = (longlong)plVar1;
      lVar6 = *plVar1;
    } while ((*(uint *)(param_1 + 4) & *(uint *)(lVar6 + 8)) != 0);
    lVar5 = UObject::GetPrivateStaticClass();
    lVar2 = param_1[3];
    if (lVar2 != lVar5) {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14174f2e0;
    }
    uVar4 = *(uint *)(lVar6 + 0xc);
    lVar6 = 0;
    if ((int)uVar4 < (int)DAT_1469e91c4) {
      uVar7 = uVar4 & 0xffff;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)uVar7 * 0x18;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar6 + 8)) == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 14174f400 FUN_14174f400 body=549 status=ok
// SIG undefined FUN_14174f400(void)

void FUN_14174f400(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong **pplVar9;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  uint in_stack_ffffffffffffff78;
  ulonglong in_stack_ffffffffffffff80;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  longlong **local_48;
  longlong *local_40;
  undefined2 *local_38;
  int local_30;
  
  local_res10 = param_2;
  piVar3 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(*param_1,&local_res8,param_2);
  if (*piVar3 == -1) {
    local_res8 = param_2[3];
    FName::ToString(&local_res8,&local_38);
    lVar6 = local_res10[2];
    if (*(longlong *)(lVar6 + 200) != 0) {
      lVar1 = *(longlong *)param_1[1];
      lVar4 = UObjectBaseUtility::GetOutermost();
      if (lVar4 == lVar1) {
        UObjectBaseUtility::GetPathName(lVar6,&local_68,lVar1);
        puVar8 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar8 = local_68;
        }
        local_res8 = *(longlong *)(*(longlong *)param_1[2] + 0x18);
        FName::ToString(&local_res8,&local_48);
        pplVar9 = (longlong **)&DAT_143f3eda8;
        if ((int)local_40 != 0) {
          pplVar9 = local_48;
        }
        FString::PrintfImpl(&local_58,L"%s.%s",pplVar9,puVar8);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_68 = local_58;
        local_58 = (undefined2 *)0x0;
        local_60 = (int)local_50;
        local_5c = local_50._4_4_;
        local_50 = 0;
        if (local_48 != (longlong **)0x0) {
          FMemory::Free();
        }
        puVar8 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar8 = local_68;
        }
        uVar2 = *(undefined8 *)param_1[2];
        uVar5 = FUN_14171bfe0();
        in_stack_ffffffffffffff80 = 0;
        in_stack_ffffffffffffff78 = 0;
        lVar6 = FUN_141799c90(uVar5,uVar2,puVar8,0,0,0,1);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    puVar8 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar8 = local_38;
    }
    puVar7 = (undefined8 *)FName::FName(&local_res8,puVar8,1);
    local_res18 = FUN_141799680(lVar6,*(undefined8 *)param_1[3],*puVar7,0,
                                in_stack_ffffffffffffff78 & 0xffffff00,
                                in_stack_ffffffffffffff80 & 0xffffffff00000000,0);
    local_48 = &local_res10;
    local_40 = &local_res18;
    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(*param_1,&local_res8,&local_48,0)
    ;
    if (local_res18 != 0) {
      (**(code **)(*local_res10 + 0x1f8))(local_res10,local_res18,*param_1);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14174f630 FUN_14174f630 body=143 status=ok
// SIG undefined FUN_14174f630(void)

undefined8 * FUN_14174f630(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144d1cf80;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14174f6c0 operator+= body=159 status=ok
// SIG undefined operator+=(void)

longlong * FStringOutputDevice::operator+=(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *_Dst;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  _Src = (void *)*param_2;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = (uint)(iVar2 == 0) + iVar4 + iVar2;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    _Dst = (void *)(*plVar1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  return plVar1;
}



// FUNCTION 14174f790 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TLinkerImportPlaceholder<UClass>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TLinkerImportPlaceholder<UClass>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14174f7d0 `scalar_deleting_destructor' body=210 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FLinkerManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 14174f8b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FLinkerPlaceholderBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FLinkerPlaceholderBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14174f8f0 FUN_14174f8f0 body=100 status=ok
// SIG undefined FUN_14174f8f0(void)

undefined8 * FUN_14174f8f0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14174f960 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FStringOutputDevice::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14174f9a0 FUN_14174f9a0 body=52 status=ok
// SIG undefined FUN_14174f9a0(void)

undefined8 FUN_14174f9a0(undefined8 param_1,ulonglong param_2)

{
  FReferenceCollector::~FReferenceCollector();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14174f9e0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULinkerPlaceholderClass::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>(param_1 + 0x200);
  UClass::~UClass(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b8);
  }
  return param_1;
}



// FUNCTION 14174fa30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULinkerPlaceholderExportObject::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14174fa70 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULinkerPlaceholderFunction::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 14174fad0 FUN_14174fad0 body=234 status=ok
// SIG undefined FUN_14174fad0(void)

longlong FUN_14174fad0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 200);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14174fbc0 `scalar_deleting_destructor' body=161 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPackage::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x90);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14174fc70 FUN_14174fc70 body=5 status=ok
// SIG undefined FUN_14174fc70(void)

void FUN_14174fc70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 14174fc80 AddReferencedObjects body=56 status=ok
// SIG undefined AddReferencedObjects(void)

void UArrayProperty::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x70,param_1,0);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14174fcc0 FUN_14174fcc0 body=662 status=ok
// SIG undefined FUN_14174fcc0(void)

bool FUN_14174fcc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  uint local_res20 [2];
  undefined8 **local_48 [2];
  undefined8 **local_38;
  uint *puStack_30;
  longlong local_28;
  int local_20;
  
  FUN_14174d1a0(&local_28);
  puStack_30 = local_res20;
  local_res20[0] = local_res20[0] & 0xffffff00;
  local_38 = (undefined8 **)&LAB_141750680;
  lVar3 = FUN_1415d8310(&local_38,&DAT_1464b5310);
  lVar6 = local_28;
  if ((0 < local_20) &&
     (lVar2 = *(longlong *)(*(longlong *)(local_28 + (longlong)(local_20 + -1) * 8) + 0x20),
     lVar2 != 0)) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      iVar1 = *(int *)(lVar3 + 0x20);
      if (0 < iVar1) {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + -8 + (longlong)iVar1 * 8);
        for (lVar5 = *(longlong *)(lVar4 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar2) goto LAB_14174fec6;
        }
        if (-1 < iVar1 + -2) {
          lVar5 = (longlong)iVar1 + -2;
          plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x18) + lVar5 * 8);
          do {
            lVar4 = *plVar7;
            for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar3 != 0;
                lVar3 = *(longlong *)(lVar3 + 0x30)) {
              if (lVar3 == lVar2) goto LAB_14174fec6;
            }
            plVar7 = plVar7 + -1;
            bVar8 = 0 < lVar5;
            lVar5 = lVar5 + -1;
          } while (bVar8);
        }
      }
    }
  }
LAB_14174fdee:
  puStack_30 = local_res20;
  local_38 = (undefined8 **)&LAB_141750680;
  local_res20[0] = local_res20[0] & 0xffffff00;
  lVar3 = FUN_1415d8310(&local_38,&DAT_1464b5310);
  local_48[0] = (undefined8 **)**(undefined8 **)(lVar3 + 0x28);
  bVar8 = (undefined8 ***)local_48[0] == (undefined8 ***)0x0;
  if (!bVar8) {
    plVar7 = (longlong *)(param_1 + 0x60);
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res20,local_48[0]);
    if ((local_res20[0] == 0xffffffff) ||
       (lVar6 = (longlong)(int)local_res20[0] * 0x60 + *plVar7, lVar6 == 0)) {
      local_38 = local_48;
      FUN_14174b410(plVar7,local_res20,&local_38,0);
      lVar6 = (longlong)(int)local_res20[0] * 0x60 + *plVar7;
    }
    FUN_14174ae50(lVar6 + 8,local_res20,&local_28,0);
    bVar8 = (undefined8 ***)local_48[0] == (undefined8 ***)0x0;
    lVar6 = local_28;
  }
  local_28 = lVar6;
  bVar8 = !bVar8;
LAB_14174fe9c:
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  return bVar8;
LAB_14174fec6:
  if (lVar4 != 0) {
    FWeakObjectPtr::operator=(local_48,lVar4);
    plVar7 = (longlong *)(param_1 + 0x10);
    local_38 = local_48[0];
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res20,&local_38);
    if ((local_res20[0] == 0xffffffff) ||
       (lVar6 = (longlong)(int)local_res20[0] * 0x60 + *plVar7, lVar6 == 0)) {
      local_38 = local_48;
      FUN_14174b190(plVar7,local_res20,&local_38,0);
      lVar6 = (longlong)(int)local_res20[0] * 0x60 + *plVar7;
    }
    FUN_14174ae50(lVar6 + 8,local_res20,&local_28,0);
    bVar8 = true;
    goto LAB_14174fe9c;
  }
  goto LAB_14174fdee;
}



// FUNCTION 14174ff60 FUN_14174ff60 body=213 status=ok
// SIG undefined FUN_14174ff60(void)

int FUN_14174ff60(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  
  lVar4 = param_1[2];
  lVar2 = param_1[1];
  uVar5 = (ulonglong)param_2;
  iVar1 = *(int *)(lVar2 + 8);
  *(uint *)(lVar2 + 8) = iVar1 + param_2;
  if (*(int *)(lVar2 + 0xc) < (int)(iVar1 + param_2)) {
    FScriptArray::ResizeGrow(lVar2,iVar1,(int)lVar4);
  }
  if ((int)((longlong *)param_1[1])[1] == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)((longlong)(iVar1 * (int)param_1[2]) + *(longlong *)param_1[1]);
  }
  if ((*(uint *)(*param_1 + 0x38) >> 9 & 1) == 0) {
    if (0 < (int)param_2) {
      do {
        plVar3 = (longlong *)*param_1;
        if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar3 + 0x330))();
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,0,(longlong)(*(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6]));
        }
        _Dst = (void *)((longlong)_Dst + (longlong)(int)param_1[2]);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)(param_2 * (int)param_1[2]));
  }
  return iVar1;
}



// FUNCTION 141750040 FUN_141750040 body=596 status=ok
// SIG undefined FUN_141750040(void)

longlong * FUN_141750040(longlong *param_1,longlong param_2,ulonglong param_3)

{
  DWORD dwTlsIndex;
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  dwTlsIndex = DAT_1464b56e4;
  plVar8 = (longlong *)0x1;
  lpTlsValue = TlsGetValue(DAT_1464b56e4);
  plVar11 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0xd0);
    lpTlsValue = plVar11;
    if (plVar4 != (longlong *)0x0) {
      plVar4[0x18] = 0;
      plVar4[0x19] = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  iVar3 = (int)lpTlsValue[0x19];
  lVar9 = (longlong)iVar3;
  plVar4 = (longlong *)lpTlsValue[0x18];
  if ((longlong *)lpTlsValue[0x18] == (longlong *)0x0) {
    plVar4 = lpTlsValue;
  }
  plVar7 = plVar4 + lVar9 * 3;
  for (; plVar4 != plVar7; plVar4 = plVar4 + 3) {
    if ((((longlong *)*plVar4 == param_1) && (plVar4[1] == param_2)) && (plVar4[2] == param_3)) {
      return (longlong *)0x1;
    }
  }
  *(int *)(lpTlsValue + 0x19) = iVar3 + 1;
  if (*(int *)((longlong)lpTlsValue + 0xcc) < iVar3 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lpTlsValue,iVar3);
  }
  local_48 = SUB84(param_1,0);
  uStack_44 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  plVar4 = (longlong *)lpTlsValue[0x18];
  if ((longlong *)lpTlsValue[0x18] == (longlong *)0x0) {
    plVar4 = lpTlsValue;
  }
  plVar7 = plVar4 + lVar9 * 3;
  *(undefined4 *)plVar7 = local_48;
  *(undefined4 *)((longlong)plVar7 + 4) = uStack_44;
  *(undefined4 *)(plVar7 + 1) = uStack_40;
  *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_3c;
  plVar4[lVar9 * 3 + 2] = param_3;
  plVar4 = *(longlong **)(param_1[2] + 0x58);
  if (plVar4 != (longlong *)0x0) {
    do {
      if ((char)plVar8 == '\0') goto LAB_14175025a;
      if ((((int)plVar4[6] * *(int *)((longlong)plVar4 + 0x34) < 1) ||
          (((ulonglong)plVar4[7] >> 0xd & 1) != 0)) || ((plVar4[7] & 0x800000000000U) != 0)) {
LAB_1417501b2:
        bVar1 = 0;
      }
      else {
        lVar9 = UObject::GetPrivateStaticClass();
        lVar5 = UField::GetOwnerClass(plVar4);
        if (lVar5 == lVar9) goto LAB_1417501b2;
        bVar1 = 1;
      }
      if ((param_3 >> 0xb & 1) != 0) {
        bVar1 = *(byte *)(plVar4 + 7) & 1;
      }
      if ((param_3 >> 0x13 & 1) != 0) {
        bVar1 = *(byte *)(plVar4 + 7) & 1;
      }
      if ((bVar1 != 0) && (plVar7 = plVar11, 0 < (int)plVar4[6])) {
        do {
          if ((char)plVar8 == '\0') break;
          iVar3 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar7;
          plVar10 = plVar11;
          if (param_2 != 0) {
            plVar10 = (longlong *)(iVar3 + param_2 + (longlong)*(int *)((longlong)plVar4 + 0x44));
          }
          cVar2 = (**(code **)(*plVar4 + 0x2b8))
                            (plVar4,(longlong)param_1 +
                                    (longlong)*(int *)((longlong)plVar4 + 0x44) + (longlong)iVar3,
                             plVar10,param_3);
          if (cVar2 == '\0') {
            plVar8 = plVar11;
          }
          uVar6 = (int)plVar7 + 1;
          plVar7 = (longlong *)(ulonglong)uVar6;
        } while ((int)uVar6 < (int)plVar4[6]);
      }
      plVar4 = (longlong *)plVar4[10];
    } while (plVar4 != (longlong *)0x0);
    if ((char)plVar8 == '\0') goto LAB_14175025a;
  }
  bVar1 = (**(code **)(*param_1 + 0x170))(param_1,param_2);
  plVar8 = (longlong *)(ulonglong)bVar1;
LAB_14175025a:
  *(int *)(lpTlsValue + 0x19) = (int)lpTlsValue[0x19] + -1;
  TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeShrink
            (lpTlsValue);
  return plVar8;
}



// FUNCTION 1417502a0 FUN_1417502a0 body=44 status=ok
// SIG undefined FUN_1417502a0(void)

void FUN_1417502a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UObject::GetPrivateStaticClass();
  (**(code **)(*(longlong *)(param_1 + 0x200) + 0x10))((longlong *)(param_1 + 0x200),uVar1);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1417502d0 FUN_1417502d0 body=246 status=ok
// SIG undefined FUN_1417502d0(void)

void FUN_1417502d0(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    LowLevelFatalErrorHandler("Unknown",0x2ee,&DAT_144d116a0,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    FDebug::AssertFailed
              (&DAT_144d11066,"Unknown",0x2ee,
               L"Trying to call UObject::BeginDestroy from outside of UObject::ConditionalBeginDestroy on object %s. Please fix up the calling code."
               ,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  local_res8 = 0;
  UObjectBase::LowLevelRename(param_1,0,0);
  FUN_1417a7660(param_1,0,0xffffffff,1);
  return;
}



// FUNCTION 1417503d0 FUN_1417503d0 body=109 status=ok
// SIG undefined FUN_1417503d0(void)

void FUN_1417503d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (lVar1 + 0x2c8,param_1);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 141750440 FUN_141750440 body=215 status=ok
// SIG undefined FUN_141750440(void)

void FUN_141750440(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_141733120(lVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469e7a90) {
      _Init_thread_header(&DAT_1469e7a90);
      if (DAT_1469e7a90 == -1) {
        _Dst = (void *)operator_new(0x170);
        uVar2 = 0;
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x170);
          uVar2 = FLinkerManager::FLinkerManager(_Dst);
        }
        DAT_1469e7a88 = uVar2;
        atexit((_func_5014 *)&LAB_143e7cb30);
        _Init_thread_footer(&DAT_1469e7a90);
      }
    }
    FLinkerManager::RemoveLinker(DAT_1469e7a88,lVar1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 141750520 Bind body=62 status=ok
// SIG undefined Bind(void)

void ULinkerPlaceholderClass::Bind(longlong param_1)

{
  *(code **)(param_1 + 0x98) = InternalConstructor<ULinkerPlaceholderClass>;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_14174c030;
  FUN_1417171c0();
  *(code **)(param_1 + 0xa8) = FUN_1417169e0;
  return;
}



// FUNCTION 141750560 BuildSubobjectMapping body=164 status=ok
// SIG undefined BuildSubobjectMapping(void)

void UObject::BuildSubobjectMapping(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_res10 = param_2;
  local_res18 = UObjectBaseUtility::GetOutermost();
  local_res20 = UObjectBaseUtility::GetOutermost(local_res10);
  local_20 = &local_res18;
  local_18 = &local_res20;
  local_10 = &local_res10;
  puStack_30 = &local_28;
  local_38 = &LAB_141750610;
  local_28 = param_3;
  FUN_1417a4830(param_1,&local_38,0,0,0x20000000);
  return;
}



// FUNCTION 141750620 FUN_141750620 body=84 status=ok
// SIG undefined FUN_141750620(void)

void FUN_141750620(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar2 = *param_2;
  cVar3 = FUN_141790310(uVar2);
  if (cVar3 != '\0') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 141750690 CanCreateInCurrentContext body=52 status=ok
// SIG undefined CanCreateInCurrentContext(void)

undefined1 UObject::CanCreateInCurrentContext(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xd8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1417506f0 FUN_1417506f0 body=85 status=ok
// SIG undefined FUN_1417506f0(void)

undefined1 FUN_1417506f0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f7,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldDoubleValueInternal");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f7,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldDoubleValueInternal");
  return 0;
}



// FUNCTION 141750760 FUN_141750760 body=85 status=ok
// SIG undefined FUN_141750760(void)

undefined1 FUN_141750760(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f8,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldSignedValueInternal");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f8,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldSignedValueInternal");
  return 0;
}



// FUNCTION 1417507c0 FUN_1417507c0 body=85 status=ok
// SIG undefined FUN_1417507c0(void)

undefined1 FUN_1417507c0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f9,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldUnsignedValueInternal");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x4f9,L"Pure virtual not implemented (%s)",
             L"UNumericProperty::CanHoldUnsignedValueInternal");
  return 0;
}



// FUNCTION 141750820 CanModify body=117 status=ok
// SIG undefined CanModify(void)

ulonglong UObject::CanModify(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 8) >> 9;
  uVar3 = (ulonglong)uVar2;
  if ((uVar2 & 1) == 0) {
    uVar3 = IsGarbageCollecting();
    if (((char)uVar3 == '\0') && (DAT_1468c2185 == '\0')) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1417508a0 FUN_1417508a0 body=118 status=ok
// SIG undefined FUN_1417508a0(void)

undefined8 FUN_1417508a0(longlong *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 1) & 0x3400) == 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((((*(uint *)(lVar3 + 8) & 0x30000000) == 0) && (DAT_1468c2177 == '\0')) && (param_2 != '\0')
       ) {
                    /* WARNING: Could not recover jumptable at 0x00014175090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x238))(param_1);
      return uVar4;
    }
  }
  return 1;
}



// FUNCTION 141750920 FUN_141750920 body=714 status=ok
// SIG undefined FUN_141750920(void)

bool FUN_141750920(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  wint_t wVar6;
  wint_t wVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  wint_t *pwVar13;
  undefined2 *puVar14;
  longlong lVar15;
  bool bVar16;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined **local_68;
  longlong local_60;
  undefined2 **local_50;
  longlong local_48;
  
  bVar12 = false;
  bVar16 = param_1 != 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar15 = *(longlong *)(param_1 + 0x10);
  local_res10 = lVar15;
  lVar8 = FUN_14171c5d0();
  if (lVar15 != lVar8) {
    local_res8 = *(ulonglong *)(lVar15 + 0x18);
    FName::ToString(&local_res8,&local_78);
    pwVar13 = &DAT_144d12208;
    puVar14 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar14 = local_78;
    }
    do {
      wVar6 = *(wint_t *)((longlong)pwVar13 + (longlong)(puVar14 + -0xa2689104));
      if ((wVar6 == 0) && (*pwVar13 == 0)) {
        iVar11 = 0;
        goto LAB_1417509d6;
      }
      if (wVar6 != *pwVar13) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar13);
        if (wVar6 != wVar7) goto LAB_1417509cc;
      }
      pwVar13 = pwVar13 + 1;
    } while( true );
  }
LAB_1417509e4:
  bVar5 = false;
LAB_1417509e7:
  if ((bVar12) && (local_78 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (bVar5) {
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    FReferenceCollector::FReferenceCollector(&local_68);
    local_68 = &PTR_FUN_144d1cf98;
    local_50 = &local_78;
    local_48 = param_1;
    lVar9 = FUN_14171bfe0();
    for (lVar8 = *(longlong *)(local_48 + 0x10); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar9) goto LAB_141750ae0;
    }
    if (local_60 == 0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_68);
    }
    uVar1 = *(undefined8 *)(local_60 + 0x90);
    uVar2 = *(undefined8 *)(local_60 + 0x78);
    uVar3 = *(undefined8 *)(local_60 + 0x98);
    uVar4 = *(undefined8 *)(local_60 + 0xa0);
    *(longlong *)(local_60 + 0x90) = local_48;
    *(undefined8 *)(local_60 + 0x78) = 0;
    *(undefined8 *)(local_60 + 0x98) = 0;
    *(undefined8 *)(local_60 + 0xa0) = 0;
    FUN_1417645f0(local_48,local_60);
    *(undefined8 *)(local_60 + 0x90) = uVar1;
    *(undefined8 *)(local_60 + 0x78) = uVar2;
    *(undefined8 *)(local_60 + 0x98) = uVar3;
    *(undefined8 *)(local_60 + 0xa0) = uVar4;
    lVar15 = local_res10;
LAB_141750ae0:
    UObject::CallAddReferencedObjects(local_48,&local_68);
    bVar16 = (int)local_70 == 0 && bVar16;
    FReferenceCollector::~FReferenceCollector(&local_68);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (((*(uint *)(param_1 + 8) >> 4 & 1) != 0) &&
     (lVar8 = *(longlong *)(param_1 + 0x18),
     plVar10 = (longlong *)UClass::GetDefaultObjectName(lVar15,&local_res8), lVar8 != *plVar10)) {
    bVar16 = false;
  }
  local_88 = 0;
  local_80 = 0;
  UObject::CollectDefaultSubobjects(param_1,&local_88,1);
  local_98 = 0;
  local_90 = 0;
  UObject::CollectDefaultSubobjects(param_1,&local_98,0);
  FUN_14174c5a0(local_88,(longlong)(int)local_80,local_res8 & 0xff,&local_res8);
  FUN_14174c5a0(local_98,(longlong)(int)local_90,local_res8 & 0xff,&local_res8);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return bVar16;
LAB_1417509cc:
  iVar11 = (uint)wVar6 - (uint)wVar7;
LAB_1417509d6:
  bVar12 = true;
  if (iVar11 != 0) {
    bVar5 = true;
    goto LAB_1417509e7;
  }
  goto LAB_1417509e4;
}



// FUNCTION 141750bf0 FUN_141750bf0 body=324 status=ok
// SIG undefined FUN_141750bf0(void)

void FUN_141750bf0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x378))();
  if (lVar4 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar4 + 0x10);
  if ((param_1[0xe] == 0) ||
     ((byte)((uint)*(undefined4 *)(param_1[0xe] + 0xb4) >> 0x1f) ==
      (byte)((uint)*(undefined4 *)(lVar1 + 0xb4) >> 0x1f))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar5 = FUN_1417a53c0();
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x290) & 0x100000) != 0)) {
    lVar5 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar5 = ULinkerPlaceholderClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141750cd5;
    }
    bVar2 = true;
  }
  else {
LAB_141750cd5:
    bVar2 = false;
  }
  if (param_1[0xe] != 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == param_1[0xe]) {
        return;
      }
    }
    if ((!bVar3) && (!bVar2)) {
      (**(code **)(*param_1 + 0x380))(param_1,param_2,0);
    }
  }
  return;
}



// FUNCTION 141750d50 FUN_141750d50 body=181 status=ok
// SIG undefined FUN_141750d50(void)

void FUN_141750d50(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  if (uVar1 != 0) {
    if ((plVar3[7] & 0x1040000000U) == 0) {
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_2;
      }
      if (0 < (int)uVar1) {
        do {
          if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar3 + 0x328))(plVar3,lVar4);
          }
          lVar4 = lVar4 + iVar2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141750e20 CollectDefaultSubobjects body=216 status=ok
// SIG undefined CollectDefaultSubobjects(void)

void UObject::CollectDefaultSubobjects(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  FUN_1417a5b30(param_1,param_2,param_3,0,0);
  uVar6 = uVar5;
  if (0 < (int)param_2[1]) {
    do {
      iVar4 = (int)uVar5;
      cVar2 = FUN_141790310(*(undefined8 *)(uVar6 + *param_2));
      if (cVar2 == '\0') {
        iVar1 = (int)param_2[1];
        iVar3 = (iVar1 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar4 * 8),
                     (void *)(*param_2 + (longlong)(iVar1 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar1 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar1 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
        iVar4 = iVar4 + -1;
        uVar6 = uVar6 - 8;
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
      uVar6 = uVar6 + 8;
    } while ((int)(iVar4 + 1U) < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141750f00 FUN_141750f00 body=252 status=ok
// SIG undefined FUN_141750f00(void)

int FUN_141750f00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Buf2;
  void *_Buf1;
  int iVar1;
  void *_Buf2_00;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *_Buf1_00;
  
  iVar4 = *(int *)(param_3 + 1);
  if (*(int *)(param_2 + 1) == iVar4) {
    if (iVar4 != 0) {
      iVar5 = 0;
      _Buf2_00 = (void *)*param_3;
      _Buf1_00 = (void *)0x0;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x34);
      if (*(int *)(param_2 + 1) != 0) {
        _Buf1_00 = (void *)*param_2;
      }
      if ((~(byte)((uint)*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x38) >> 0x1e) & 1) == 0) {
        iVar4 = _guard_xfg_dispatch_icall_nop(_Buf1_00,_Buf2_00,(longlong)(iVar1 * iVar4));
        return iVar4;
      }
      if (0 < iVar4) {
        iVar6 = 0;
        do {
          plVar2 = *(longlong **)(param_1 + 0x70);
          _Buf2 = (void *)((longlong)iVar6 + (longlong)_Buf2_00);
          _Buf1 = (void *)((longlong)iVar6 + (longlong)_Buf1_00);
          if (_Buf1 != _Buf2) {
            if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
              iVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,_Buf1,_Buf2,(int)plVar2[6]);
            }
            else {
              iVar3 = _guard_xfg_dispatch_icall_nop
                                (_Buf1,_Buf2,
                                 (longlong)(*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6]));
            }
            if (iVar3 != 0) goto LAB_141750fd8;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + iVar1;
        } while (iVar5 < iVar4);
      }
    }
    iVar4 = 0;
  }
  else {
LAB_141750fd8:
    iVar4 = -1;
  }
  return iVar4;
}



// FUNCTION 141751000 FUN_141751000 body=114 status=ok
// SIG undefined FUN_141751000(void)

undefined8 FUN_141751000(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < param_4) {
    iVar3 = 0;
    do {
      lVar2 = (longlong)iVar3 + (ulonglong)*(byte *)(param_1 + 0x71);
      if ((*(byte *)(lVar2 + param_2) & *(byte *)(param_1 + 0x73)) !=
          (*(byte *)(lVar2 + param_3) & *(byte *)(param_1 + 0x73))) {
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + *(int *)(param_1 + 0x34);
    } while (iVar1 < param_4);
  }
  return 0;
}



// FUNCTION 141751080 ConditionalBeginDestroy body=46 status=ok
// SIG undefined ConditionalBeginDestroy(void)

undefined4 UObject::ConditionalBeginDestroy(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x8000;
    (**(code **)(*param_1 + 0x88))();
    return 1;
  }
  return 0;
}



// FUNCTION 1417510b0 ConditionalFinishDestroy body=46 status=ok
// SIG undefined ConditionalFinishDestroy(void)

undefined4 UObject::ConditionalFinishDestroy(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 0x10 & 1) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x10000;
    (**(code **)(*param_1 + 0x98))();
    return 1;
  }
  return 0;
}



// FUNCTION 1417510e0 FUN_1417510e0 body=129 status=ok
// SIG undefined FUN_1417510e0(void)

void FUN_1417510e0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 1) >> 0xc & 1) == 0) {
    return;
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffffefff;
  lVar1 = FUN_14178ca30(param_1);
  if (lVar1 != 0) {
    FUN_1417510e0(lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 >> 0xd & 1) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,0);
    uVar2 = *(uint *)(param_1 + 1);
  }
  if ((uVar2 >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141751145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x330))((longlong *)param_1[2],param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141751157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 141751170 ConditionalPostLoadSubobjects body=21 status=ok
// SIG undefined ConditionalPostLoadSubobjects(void)

void UObject::ConditionalPostLoadSubobjects(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 0xd & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014175117d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))();
    return;
  }
  return;
}



// FUNCTION 141751190 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141751240 FUN_141751240 body=670 status=ok
// SIG undefined FUN_141751240(void)

undefined8
FUN_141751240(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong local_res10;
  longlong *local_c0;
  longlong *local_b8;
  uint local_b0;
  longlong local_a8 [7];
  undefined4 local_6c;
  
  if (((*param_2 != 9) || (local_res10 = 0, param_2[5] == 0)) ||
     (plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x70) + 0x338))
                         (*(longlong **)(param_1 + 0x70),&local_res10), param_2[5] == *plVar4)) {
    return 0;
  }
  plVar4 = (longlong *)param_3[1];
  uVar7 = local_res10 >> 0x20;
  local_res10 = local_res10 & 0xffffffff00000000;
  plVar5 = (longlong *)(*(int *)(param_1 + 0x44) + param_4);
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_res10,4);
    }
  }
  else {
    local_res10 = CONCAT44((int)uVar7,*(undefined4 *)*plVar4);
    *plVar4 = *plVar4 + 4;
  }
  uVar7 = local_res10;
  plVar4 = *(longlong **)(param_1 + 0x70);
  uVar1 = *(uint *)(plVar5 + 1);
  uVar6 = (ulonglong)uVar1;
  iVar3 = (int)local_res10;
  uVar2 = *(uint *)((longlong)plVar4 + 0x34);
  uVar9 = (ulonglong)(int)uVar2;
  local_c0 = plVar4;
  local_b8 = plVar5;
  local_b0 = uVar2;
  if (uVar1 == 0) {
    if ((int)local_res10 == 0) goto LAB_1417513e7;
  }
  else if ((plVar4[7] & 0x1040000000U) == 0) {
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar5;
    }
    if (0 < (int)uVar1) {
      do {
        if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar4 + 0x328))(plVar4,lVar8);
        }
        lVar8 = lVar8 + uVar9;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar9 = (ulonglong)uVar2;
    }
  }
  *(undefined4 *)(plVar5 + 1) = 0;
  if (iVar3 != *(int *)((longlong)plVar5 + 0xc)) {
    FScriptArray::ResizeTo(plVar5,uVar7 & 0xffffffff,uVar9 & 0xffffffff);
  }
  if (iVar3 != 0) {
    FUN_14174ff60(&local_c0,uVar7 & 0xffffffff);
  }
LAB_1417513e7:
  if (0 < (int)local_res10) {
    FPropertyTag::FPropertyTag(local_a8);
    local_a8[0] = param_2[5];
    local_6c = 0;
    if ((int)plVar5[1] == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar5;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                      (*(longlong **)(param_1 + 0x70),local_a8,param_3,lVar8,param_5);
    if (iVar3 != 2) {
      return 1;
    }
    iVar3 = 1;
    if (1 < (int)local_res10) {
      uVar7 = uVar9 & 0xffffffff;
      do {
        if ((int)plVar5[1] == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)(int)uVar7 + *plVar5;
        }
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                  (*(longlong **)(param_1 + 0x70),local_a8,param_3,lVar8,param_5);
        iVar3 = iVar3 + 1;
        uVar7 = (ulonglong)(uint)((int)uVar7 + (int)uVar9);
      } while (iVar3 < (int)local_res10);
    }
  }
  return 2;
}



// FUNCTION 1417514e0 FUN_1417514e0 body=1255 status=ok
// SIG undefined FUN_1417514e0(void)

undefined8 FUN_1417514e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulonglong local_res10;
  char local_38 [4];
  short local_34 [2];
  short local_30 [2];
  int local_2c;
  int local_28 [2];
  longlong local_20;
  
  lVar1 = *param_2;
  uVar5 = 0;
  local_res10 = 2;
  if (lVar1 == 2) {
    plVar2 = (longlong *)param_3[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_2c,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_2c,4);
      }
    }
    else {
      local_2c = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                     (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                     (longlong)(*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
    bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
    if (local_2c != 0) {
      *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
      return 2;
    }
  }
  else {
    local_res10 = 0x1a;
    if (lVar1 == 0x1a) {
      plVar2 = (longlong *)param_3[1];
      if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,1);
      }
      else {
        local_res10 = (ulonglong)*(byte *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                       (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                       (longlong)(*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
      bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
      if ((char)local_res10 != '\0') {
        *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
        return 2;
      }
    }
    else {
      local_res10 = 0x19;
      if (lVar1 == 0x19) {
        plVar2 = (longlong *)param_3[1];
        if ((short *)plVar2[1] < (short *)*plVar2 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,local_34,2);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,local_34,2);
          }
        }
        else {
          local_34[0] = *(short *)*plVar2;
          *plVar2 = *plVar2 + 2;
        }
        pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                         (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                         (longlong)(*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
        bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
        if (local_34[0] != 0) {
          *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
          return 2;
        }
      }
      else {
        local_res10 = 0x17;
        if (lVar1 == 0x17) {
          plVar2 = (longlong *)param_3[1];
          if ((longlong *)plVar2[1] < (longlong *)*plVar2 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,&local_20,8);
            if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_3,&local_20,8);
            }
          }
          else {
            local_20 = *(longlong *)*plVar2;
            *plVar2 = *plVar2 + 8;
          }
          pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                           (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                           (longlong)(*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34))
                           );
          bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
          if (local_20 != 0) {
            *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
            return 2;
          }
        }
        else {
          if (lVar1 == 1) {
            local_res10 = 0;
            if (param_2[4] == 0) {
              if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
                uVar5 = *(undefined8 *)(param_1 + 0x20);
              }
              cVar4 = UObjectBaseUtility::IsA<UProperty>(uVar5);
              if (cVar4 == '\0') {
                plVar2 = (longlong *)param_3[1];
                if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,local_38,1);
                }
                else {
                  local_38[0] = *(char *)*plVar2;
                  *plVar2 = *plVar2 + 1;
                }
                pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                                 (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                                 (longlong)
                                 (*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
                bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
                if (local_38[0] != '\0') {
                  *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
                  return 2;
                }
                goto LAB_141751906;
              }
            }
            return 0;
          }
          local_res10 = 0x16;
          if (lVar1 == 0x16) {
            plVar2 = (longlong *)param_3[1];
            if ((short *)plVar2[1] < (short *)*plVar2 + 1) {
              (**(code **)(*param_3 + 0x50))(param_3,local_30,2);
              if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_3,local_30,2);
              }
            }
            else {
              local_30[0] = *(short *)*plVar2;
              *plVar2 = *plVar2 + 2;
            }
            pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                             (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                             (longlong)
                             (*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
            bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
            if (local_30[0] != 0) {
              *pbVar6 = bVar3 | *(byte *)(param_1 + 0x72);
              return 2;
            }
          }
          else {
            local_res10 = 0x15;
            if (lVar1 != 0x15) {
              local_res10 = 0x14;
              if (lVar1 != 0x14) {
                return 0;
              }
              plVar2 = (longlong *)param_3[1];
              if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,8);
                }
              }
              else {
                local_res10 = *(ulonglong *)*plVar2;
                *plVar2 = *plVar2 + 8;
              }
              pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                               (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                               (longlong)
                               (*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
              if (local_res10 == 0) {
                *pbVar6 = *pbVar6 & ~*(byte *)(param_1 + 0x73);
                return 2;
              }
              *pbVar6 = ~*(byte *)(param_1 + 0x73) & *pbVar6 | *(byte *)(param_1 + 0x72);
              return 2;
            }
            plVar2 = (longlong *)param_3[1];
            if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
              (**(code **)(*param_3 + 0x50))(param_3,local_28,4);
              if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_3,local_28,4);
              }
            }
            else {
              local_28[0] = *(int *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
            pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x44) +
                             (ulonglong)*(byte *)(param_1 + 0x71) + param_4 +
                             (longlong)
                             (*(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34)));
            bVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar6;
            if (local_28[0] != 0) {
              bVar3 = bVar3 | *(byte *)(param_1 + 0x72);
            }
          }
        }
      }
    }
  }
LAB_141751906:
  *pbVar6 = bVar3;
  return 2;
}



// FUNCTION 1417519d0 FUN_1417519d0 body=1472 status=ok
// SIG undefined FUN_1417519d0(void)

undefined8
FUN_1417519d0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  ulonglong local_res10;
  
  lVar9 = *param_2;
  if ((lVar9 == 1) && ((param_2[4] == 0) != (*(longlong *)(param_1 + 0x70) == 0))) {
    local_res10 = 0;
    if (param_2[4] == 0) {
      if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
         (lVar9 = *(longlong *)(param_1 + 0x20), lVar9 != 0)) {
        lVar7 = UProperty::StaticClass();
        lVar9 = *(longlong *)(lVar9 + 0x10);
        if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          return 0;
        }
      }
      plVar3 = (longlong *)param_3[1];
      if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,1);
      }
      else {
        local_res10._0_1_ = *(undefined1 *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      goto LAB_141751afa;
    }
  }
  else {
    local_res10 = 0x22;
    if ((lVar9 != 0x22) ||
       ((*(longlong *)(param_1 + 0x70) != 0 &&
        (param_2[4] != *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18))))) {
      local_res10 = 0x1a;
      if (lVar9 == 0x1a) {
        lVar9 = *(longlong *)(param_1 + 0x70);
        if (lVar9 == 0) {
          FUN_14174a8f0(param_1,param_3,param_4,param_2);
          return 2;
        }
        plVar3 = (longlong *)param_3[1];
        if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,1);
        }
        else {
          local_res10 = (ulonglong)*(byte *)*plVar3;
          *plVar3 = *plVar3 + 1;
        }
        bVar5 = (byte)local_res10;
        if (((byte)local_res10 < 0x80) ||
           (cVar4 = UEnum::IsValidEnumValue(lVar9,local_res10 & 0xff), cVar4 == '\0')) {
          bVar5 = UEnum::GetMaxEnumValue(lVar9);
        }
        *(byte *)((longlong)*(int *)(param_1 + 0x44) +
                 *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = bVar5;
        return 2;
      }
      local_res10 = 0x19;
      if (lVar9 == 0x19) {
        lVar9 = *(longlong *)(param_1 + 0x70);
        if (lVar9 == 0) {
          FUN_14174a970(param_1,param_3,param_4,param_2);
          return 2;
        }
        plVar3 = (longlong *)param_3[1];
        if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res10,2);
          }
        }
        else {
          local_res10 = (ulonglong)*(ushort *)*plVar3;
          *plVar3 = *plVar3 + 2;
        }
        uVar8 = local_res10 & 0xffff;
        if ((short)(ushort)local_res10 < 0x100) goto LAB_141751f29;
      }
      else {
        local_res10 = 2;
        if (lVar9 == 2) {
          lVar9 = *(longlong *)(param_1 + 0x70);
          if (lVar9 == 0) {
            FUN_14174aa10(param_1,param_3,param_4,param_2);
            return 2;
          }
          plVar3 = (longlong *)param_3[1];
          if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
            if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_3,&local_res10,4);
            }
          }
          else {
            local_res10 = (ulonglong)*(uint *)*plVar3;
            *plVar3 = *plVar3 + 4;
          }
          uVar8 = local_res10 & 0xffffffff;
          if ((int)(uint)local_res10 < 0x100) goto LAB_141751f29;
        }
        else {
          local_res10 = 0x17;
          if (lVar9 == 0x17) {
            lVar9 = *(longlong *)(param_1 + 0x70);
            if (lVar9 == 0) {
              FUN_14174aab0(param_1,param_3,param_4,param_2);
              return 2;
            }
            plVar3 = (longlong *)param_3[1];
            if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
              (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
              if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_3,&local_res10,8);
              }
            }
            else {
              local_res10 = *(ulonglong *)*plVar3;
              *plVar3 = *plVar3 + 8;
            }
            uVar8 = local_res10;
            if ((longlong)local_res10 < 0x100) goto LAB_141751f29;
          }
          else {
            local_res10 = 0x16;
            if (lVar9 == 0x16) {
              lVar9 = *(longlong *)(param_1 + 0x70);
              if (lVar9 == 0) {
                FUN_14174a970(param_1,param_3,param_4,param_2);
                return 2;
              }
              plVar3 = (longlong *)param_3[1];
              if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,2);
                }
                bVar10 = (ushort)local_res10 < 0xff;
                bVar11 = (ushort)local_res10 == 0xff;
                uVar8 = local_res10 & 0xffff;
              }
              else {
                uVar1 = *(ushort *)*plVar3;
                local_res10 = (ulonglong)uVar1;
                *plVar3 = *plVar3 + 2;
                bVar10 = uVar1 < 0xff;
                bVar11 = uVar1 == 0xff;
                uVar8 = local_res10;
              }
            }
            else {
              local_res10 = 0x15;
              if (lVar9 == 0x15) {
                lVar9 = *(longlong *)(param_1 + 0x70);
                if (lVar9 == 0) {
                  FUN_14174aa10(param_1,param_3,param_4,param_2);
                  return 2;
                }
                plVar3 = (longlong *)param_3[1];
                if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_3,&local_res10,4);
                  }
                  bVar10 = (uint)local_res10 < 0xff;
                  bVar11 = (uint)local_res10 == 0xff;
                  uVar8 = local_res10 & 0xffffffff;
                }
                else {
                  uVar2 = *(uint *)*plVar3;
                  local_res10 = (ulonglong)uVar2;
                  *plVar3 = *plVar3 + 4;
                  bVar10 = uVar2 < 0xff;
                  bVar11 = uVar2 == 0xff;
                  uVar8 = local_res10;
                }
              }
              else {
                local_res10 = 0x14;
                if (lVar9 != 0x14) {
                  return 0;
                }
                lVar9 = *(longlong *)(param_1 + 0x70);
                if (lVar9 == 0) {
                  FUN_14174aab0(param_1,param_3,param_4,param_2);
                  return 2;
                }
                plVar3 = (longlong *)param_3[1];
                if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_3,&local_res10,8);
                  }
                }
                else {
                  local_res10 = *(ulonglong *)*plVar3;
                  *plVar3 = *plVar3 + 8;
                }
                bVar10 = local_res10 < 0xff;
                bVar11 = local_res10 == 0xff;
                uVar8 = local_res10;
              }
            }
            if (bVar10 || bVar11) {
LAB_141751f29:
              uVar6 = (undefined1)uVar8;
              cVar4 = UEnum::IsValidEnumValue(lVar9,uVar8 & 0xff);
              if (cVar4 != '\0') goto LAB_141751f43;
            }
          }
        }
      }
      uVar6 = UEnum::GetMaxEnumValue(lVar9);
LAB_141751f43:
      *(undefined1 *)
       ((longlong)*(int *)(param_1 + 0x44) +
       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar6;
      return 2;
    }
  }
  local_res10._0_1_ = FUN_14177b480(param_3,param_5,param_2);
LAB_141751afa:
  *(byte *)((longlong)*(int *)(param_1 + 0x44) +
           *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
       (byte)local_res10;
  return 2;
}



// FUNCTION 141751f90 FUN_141751f90 body=108 status=ok
// SIG undefined FUN_141751f90(void)

void FUN_141751f90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)param_1[6]) {
    do {
      (**(code **)(*param_1 + 0x380))
                (param_1,*(int *)((longlong)param_1 + 0x34) * iVar1 + param_2,*param_3);
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 1;
    } while (iVar1 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 141752040 FUN_141752040 body=108 status=ok
// SIG undefined FUN_141752040(void)

void FUN_141752040(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1[6]) {
    do {
      uVar1 = (**(code **)(*param_1 + 0x378))
                        (param_1,*(int *)((longlong)param_1 + 0x34) * iVar2 + param_3);
      *param_2 = uVar1;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 141752100 FUN_141752100 body=30 status=ok
// SIG undefined FUN_141752100(void)

void FUN_141752100(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 141752150 FUN_141752150 body=594 status=ok
// SIG undefined FUN_141752150(void)

void FUN_141752150(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *local_58;
  longlong *local_50;
  int local_48;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  uVar1 = *(uint *)(param_3 + 1);
  uVar8 = (ulonglong)uVar1;
  _Dst = (void *)0x0;
  uVar9 = plVar4[7];
  iVar2 = *(int *)((longlong)plVar4 + 0x34);
  uVar3 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)uVar3;
  local_58 = plVar4;
  local_50 = param_2;
  local_48 = iVar2;
  if ((~(byte)(uVar9 >> 0x1e) & 1) == 0) {
    if (uVar3 == 0) {
      if (uVar1 == 0) {
        return;
      }
    }
    else if ((((uVar9 & 0x1040000000) == 0) && (uVar3 != 0)) && (lVar6 = *param_2, 0 < (int)uVar3))
    {
      do {
        if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar4 + 0x328))(plVar4,lVar6);
        }
        lVar6 = lVar6 + iVar2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (uVar1 != *(uint *)((longlong)param_2 + 0xc)) {
      FScriptArray::ResizeTo(param_2,uVar8,iVar2);
    }
    if (uVar1 == 0) {
      return;
    }
    lVar6 = param_2[1];
    iVar5 = (int)lVar6 + uVar1;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      FScriptArray::ResizeGrow(param_2,(int)lVar6,iVar2);
    }
  }
  else {
    if (uVar3 == 0) {
      if (uVar1 == 0) {
        return;
      }
    }
    else if ((((uVar9 & 0x1040000000) == 0) && (uVar3 != 0)) && (lVar6 = *param_2, 0 < (int)uVar3))
    {
      uVar9 = (ulonglong)uVar3;
      do {
        if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar4 + 0x328))(plVar4,lVar6);
        }
        lVar6 = lVar6 + iVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (uVar1 != *(uint *)((longlong)param_2 + 0xc)) {
      FScriptArray::ResizeTo(param_2,uVar1,iVar2);
    }
    if (uVar1 == 0) {
      return;
    }
    FUN_14174ff60(&local_58,uVar8);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x34);
  pvVar7 = _Dst;
  if (*(int *)(param_3 + 1) != 0) {
    pvVar7 = (void *)*param_3;
  }
  if ((int)param_2[1] != 0) {
    _Dst = (void *)*param_2;
  }
  if ((~(byte)((uint)*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x38) >> 0x1e) & 1) == 0) {
    _guard_xfg_dispatch_icall_nop(_Dst,pvVar7,(longlong)(int)(iVar2 * uVar1));
  }
  else if (0 < (int)uVar1) {
    lVar6 = (longlong)pvVar7 - (longlong)_Dst;
    do {
      plVar4 = *(longlong **)(param_1 + 0x70);
      pvVar7 = (void *)(lVar6 + (longlong)_Dst);
      if (_Dst != pvVar7) {
        if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar4 + 0x2e8))(plVar4,_Dst,pvVar7,(int)plVar4[6]);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,pvVar7,(longlong)(*(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]));
        }
      }
      _Dst = (void *)((longlong)_Dst + (longlong)iVar2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1417523b0 CopyValuesInternal body=87 status=ok
// SIG undefined CopyValuesInternal(void)

void UBoolProperty::CopyValuesInternal
               (longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar1 = *(int *)(param_1 + 0x34) * iVar3;
      iVar3 = iVar3 + 1;
      lVar2 = (longlong)iVar1 + (ulonglong)*(byte *)(param_1 + 0x71);
      *(byte *)(lVar2 + param_2) =
           *(byte *)(lVar2 + param_3) & *(byte *)(param_1 + 0x73) |
           ~*(byte *)(param_1 + 0x73) & *(byte *)(lVar2 + param_2);
    } while (iVar3 < param_4);
  }
  return;
}



// FUNCTION 141752410 FUN_141752410 body=310 status=ok
// SIG undefined FUN_141752410(void)

void FUN_141752410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
  if (*(int *)(lVar1 + 0x20) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x18) + -8 + (longlong)*(int *)(lVar1 + 0x20) * 8)
    ;
    if (plVar2 != (longlong *)0x0) goto LAB_1417524b9;
  }
  LowLevelFatalErrorHandler("Unknown",0x67,L"No object initializer found during construction.");
  FDebug::AssertFailed
            (&DAT_144d11cf3,"Unknown",0x67,L"No object initializer found during construction.");
LAB_1417524b9:
  if (*plVar2 != param_1) {
    LowLevelFatalErrorHandler("Unknown",0x68,L"Using incorrect object initializer.");
    FDebug::AssertFailed(&DAT_144d11d1a,"Unknown",0x68,L"Using incorrect object initializer.");
  }
  FUN_141789050(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141752550 FUN_141752550 body=147 status=ok
// SIG undefined FUN_141752550(void)

void FUN_141752550(void)

{
  longlong lVar1;
  long lVar2;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_28;
  local_28[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(int *)(lVar1 + 0x20) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (long)*(undefined8 *)
                   (*(longlong *)(lVar1 + 0x18) + -8 + (longlong)*(int *)(lVar1 + 0x20) * 8);
  }
  AK::MemoryMgr::GetPoolName(lVar2);
  return;
}



// FUNCTION 1417525f0 FUN_1417525f0 body=687 status=ok
// SIG undefined FUN_1417525f0(void)

void FUN_1417525f0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  code *pcVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  code *pcVar16;
  longlong *local_res8;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined4 uStack_54;
  longlong *local_50;
  uint uStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x148);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar9 = 0;
  plVar15 = (longlong *)(param_1 + 0xf8);
  local_88 = (code *)0x0;
  uStack_80 = (longlong **)0x0;
  uVar11 = uVar9;
  local_res8 = plVar15;
  if (0 < *(int *)(param_1 + 0x100) - *(int *)(param_1 + 300)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_88);
    uVar11 = (ulonglong)uStack_80 & 0xffffffff;
  }
  uVar10 = (uint)uVar11;
  iVar1 = *(int *)(param_1 + 0x120);
  puStack_40 = (uint *)(param_1 + 0x108);
  local_78._0_4_ = 0;
  local_78._4_4_ = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar14 = *(uint **)(param_1 + 0x118);
    if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
      puVar14 = puStack_40;
    }
    uVar2 = *puVar14;
    uVar8 = uVar9;
    uVar13 = uVar9;
    while (uVar2 == 0) {
      iVar6 = (int)uVar8;
      uStack_60 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_60;
      local_78._0_4_ = iVar6 + 1;
      uVar8 = (ulonglong)(uint)local_78;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14175270f;
      uVar2 = puVar14[(longlong)iVar6 + 1];
    }
    local_78._4_4_ = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_14175270f:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  uStack_30 = uStack_60;
  uStack_2c = iStack_5c;
  uStack_48 = (uint)local_78;
  uStack_44 = local_78._4_4_;
  uStack_70 = (uint)local_78;
  uStack_6c = local_78._4_4_;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar4 = local_68._4_4_ < iVar1;
  pcVar16 = local_88;
  local_78 = plVar15;
  local_50 = plVar15;
  local_68 = puStack_40;
  if (bVar4) {
    do {
      iVar1 = iStack_5c;
      iVar6 = (int)uVar11;
      lVar7 = *local_78;
      uVar10 = iVar6 + 1;
      uStack_80 = (longlong **)CONCAT44(uStack_80._4_4_,uVar10);
      if (uStack_80._4_4_ < (int)uVar10) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,uVar11);
        pcVar16 = local_88;
        uVar10 = (uint)uStack_80;
      }
      uVar11 = (ulonglong)uVar10;
      *(undefined8 *)(pcVar16 + (longlong)iVar6 * 8) =
           *(undefined8 *)(lVar7 + (longlong)iVar1 * 0x10);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      plVar15 = local_res8;
    } while (iStack_5c < (int)local_68[6]);
  }
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar15,0);
  LeaveCriticalSection(lpCriticalSection);
  uStack_80 = &local_res8;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_88 = FUN_1406ddef0;
  lVar7 = FUN_1415d8310(&local_88,&DAT_14622e6dc);
  *(undefined1 *)(lVar7 + 0x59) = 1;
  uVar11 = (ulonglong)(pcVar16 + (longlong)(int)uVar10 * 8 + (7 - (longlong)pcVar16)) >> 3;
  if (pcVar16 + (longlong)(int)uVar10 * 8 < pcVar16) {
    uVar11 = uVar9;
  }
  pcVar12 = pcVar16;
  if (uVar11 != 0) {
    do {
      lVar3 = *(longlong *)pcVar12;
      if (lVar3 != 0) {
        FUN_14172a4f0(lVar3);
        FMemory::operator_delete(lVar3,0x7f0);
      }
      pcVar12 = pcVar12 + 8;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  *(undefined1 *)(lVar7 + 0x59) = 0;
  if (pcVar16 != (code *)0x0) {
    FMemory::Free(pcVar16);
  }
  return;
}



// FUNCTION 1417528a0 FUN_1417528a0 body=214 status=ok
// SIG undefined FUN_1417528a0(void)

void FUN_1417528a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  plVar3 = *(longlong **)(param_1 + 0x70);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  if (uVar1 != 0) {
    if ((plVar3[7] & 0x1040000000U) == 0) {
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_2;
      }
      if (0 < (int)uVar1) {
        do {
          if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar3 + 0x328))(plVar3,lVar4);
          }
          lVar4 = lVar4 + iVar2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,iVar2);
    }
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141752980 FUN_141752980 body=138 status=ok
// SIG undefined FUN_141752980(void)

void FUN_141752980(longlong *param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0) {
    if ((int)((longlong *)param_1[1])[1] == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)((int)param_1[2] * param_2) + *(longlong *)param_1[1];
    }
    if (0 < (int)param_3) {
      uVar3 = (ulonglong)param_3;
      do {
        plVar1 = (longlong *)*param_1;
        if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar1 + 0x328))(plVar1,lVar2);
        }
        lVar2 = lVar2 + (int)param_1[2];
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 141752a10 FUN_141752a10 body=1453 status=ok
// SIG undefined FUN_141752a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141752a10(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  uint *puStack_f0;
  int local_e8;
  int iStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puStack_f0 = (uint *)local_108;
  local_108[0] = 0;
  local_f8 = FUN_1406ddef0;
  lVar6 = FUN_1415d8310(&local_f8,&DAT_14622e6dc);
  if (*(int *)(lVar6 + 0x28) != 0) {
    local_88 = 0;
    local_80 = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
    }
    if (&local_88 != (longlong *)(param_1 + 0x80)) {
      TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::operator=(&local_88,(longlong *)(param_1 + 0x80));
      lVar11 = *(longlong *)(param_1 + 0xc0);
      if (lVar11 == 0) {
        _guard_xfg_dispatch_icall_nop(local_50,(void *)(param_1 + 0xb8),4);
      }
      if (local_48 != 0) {
        FMemory::Free();
        lVar11 = *(longlong *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
      local_40 = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 200) = 0;
      local_48 = lVar11;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
    uVar10 = 0;
    if ((int)local_80 != local_54) {
      iVar2 = (int)local_60;
      puStack_f0 = local_78;
      local_f8 = (code *)0x100000000;
      iStack_e4 = 0;
      uStack_e0 = 0;
      if ((int)local_60 != 0) {
        puVar14 = local_78;
        if (local_68 != (uint *)0x0) {
          puVar14 = local_68;
        }
        uVar4 = *puVar14;
        uVar8 = uVar10;
        uVar12 = uVar10;
        while (uVar4 == 0) {
          iVar5 = (int)uVar8;
          uStack_e0 = (int)uVar12 + 0x20;
          uVar12 = (ulonglong)uStack_e0;
          uVar8 = (ulonglong)(iVar5 + 1U);
          local_f8._4_4_ = (uint)((ulonglong)local_f8 >> 0x20);
          local_f8 = (code *)CONCAT44(local_f8._4_4_,iVar5 + 1U);
          if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) {
            iStack_e4 = (int)local_60;
            goto LAB_141752c08;
          }
          uVar4 = puVar14[(longlong)iVar5 + 1];
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_f8 = (code *)CONCAT44(uVar4,(int)local_f8);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_e4 = (uStack_e0 - iVar5) + 0x1f;
        if ((int)local_60 < iStack_e4) {
          iStack_e4 = (int)local_60;
        }
      }
LAB_141752c08:
      uStack_c0 = CONCAT44(iStack_e4,0xffffffff);
      local_b8 = CONCAT44(uStack_dc,uStack_e0);
      local_b0 = &local_88;
      iStack_e4 = (int)local_60;
      uStack_a8 = local_f8;
      pcVar1 = uStack_a8;
      local_e8 = -1 << ((byte)local_60 & 0x1f);
      uStack_a8._0_4_ = (int)local_f8;
      uStack_a8._4_4_ = (uint)((ulonglong)local_f8 >> 0x20);
      iStack_d0 = (int)uStack_a8;
      uStack_cc = uStack_a8._4_4_;
      local_c8 = puStack_f0;
      uStack_a8 = pcVar1;
      puStack_a0 = puStack_f0;
      uStack_98 = uStack_c0;
      uStack_90 = local_b8;
      local_d8 = local_b0;
      while( true ) {
        if (((uStack_c0._4_4_ == iVar2) && (local_c8 == local_78)) && (local_d8 == &local_88))
        break;
        lVar11 = *(longlong *)(*local_d8 + (longlong)uStack_c0._4_4_ * 0x10);
        uVar8 = uVar10;
        uVar12 = uVar10;
        if (0 < *(int *)(lVar11 + 0x10)) {
          do {
            lVar13 = *(longlong *)(lVar11 + 8) + uVar8;
            if (*(longlong *)(lVar13 + 0x20) != 0) {
              uVar4 = *(uint *)(*(longlong *)(lVar13 + 0x20) + 0xc);
              uVar7 = uVar10;
              if ((int)uVar4 < (int)DAT_1469e91c4) {
                uVar9 = uVar4 & 0xffff;
                if ((int)uVar4 < 0) {
                  uVar4 = uVar4 + 0xffff;
                  uVar9 = uVar9 - 0x10000;
                }
                uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                        (longlong)(int)uVar9 * 0x18;
              }
              if ((*(uint *)(uVar7 + 8) >> 0x19 & 1) == 0) {
                *(undefined8 *)(lVar13 + 0x20) = 0;
              }
            }
            uVar4 = (int)uVar12 + 1;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
            uVar8 = uVar8 + 0x38;
            uVar12 = (ulonglong)uVar4;
          } while ((int)uVar4 < *(int *)(lVar11 + 0x10));
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_cc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
      }
    }
    *(int *)(lVar6 + 0x28) = 0;
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  puStack_f0 = (uint *)local_108;
  local_f8 = FUN_1406ddef0;
  local_108[0] = 0;
  lVar6 = FUN_1415d8310(&local_f8,&DAT_14622e6dc);
  if (*(int *)(lVar6 + 0x2c) != 0) {
    local_88 = 0;
    local_80 = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              (&local_88,param_1 + 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    iVar2 = (int)local_60;
    puStack_f0 = local_78;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 1;
    iStack_e4 = 0;
    uStack_e0 = 0;
    if ((int)local_60 != 0) {
      puVar14 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar14 = local_68;
      }
      uVar4 = *puVar14;
      while (uVar4 == 0) {
        uStack_e0 = uStack_e0 + 0x20;
        if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_f8)
        {
          iStack_e4 = (int)local_60;
          local_f8._0_4_ = (int)local_f8 + 1;
          goto LAB_141752e97;
        }
        uVar4 = puVar14[(longlong)(int)local_f8 + 1];
        local_f8._0_4_ = (int)local_f8 + 1;
      }
      local_f8._4_4_ = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (local_f8._4_4_ != 0) {
        for (; local_f8._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (local_f8._4_4_ == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_e4 = (uStack_e0 - iVar5) + 0x1f;
      if ((int)local_60 < iStack_e4) {
        iStack_e4 = (int)local_60;
      }
    }
LAB_141752e97:
    uStack_c0._0_4_ = 0xffffffff;
    uStack_c0._4_4_ = iStack_e4;
    local_b8 = CONCAT44(uStack_dc,uStack_e0);
    local_b0 = &local_88;
    local_e8 = -1 << ((byte)local_60 & 0x1f);
    uStack_a8._0_4_ = (int)local_f8;
    uStack_a8._4_4_ = local_f8._4_4_;
    iStack_e4 = (int)local_60;
    iStack_d0 = (int)local_f8;
    uStack_cc = local_f8._4_4_;
    local_c8 = puStack_f0;
    puStack_a0 = puStack_f0;
    uStack_90 = local_b8;
    local_d8 = local_b0;
    uStack_98._0_4_ = (uint)uStack_c0;
    uStack_98._4_4_ = uStack_c0._4_4_;
    while (((uStack_c0._4_4_ != iVar2 || (local_c8 != local_78)) || (local_d8 != &local_88))) {
      lVar11 = *(longlong *)(*local_d8 + (longlong)uStack_c0._4_4_ * 0x10);
      lVar13 = *(longlong *)(lVar11 + 0x18);
      lVar11 = (longlong)*(int *)(lVar11 + 0x20) * 0x88 + lVar13;
      for (; lVar13 != lVar11; lVar13 = lVar13 + 0x88) {
        if ((*(longlong *)(lVar13 + 0x48) != 0) && (*(char *)(lVar13 + 0x54) != '\0')) {
          FUN_1417a7660(*(longlong *)(lVar13 + 0x48),0,0xffffffff,1);
          *(undefined8 *)(lVar13 + 0x48) = 0;
        }
      }
      uStack_c0._0_4_ = (uint)uStack_c0 & ~uStack_cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    }
    *(undefined4 *)(lVar6 + 0x2c) = 0;
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  return;
}



// FUNCTION 141752fc0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
               (longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141753080 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141753100 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141753180 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


