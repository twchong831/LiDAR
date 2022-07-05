# LiDAR ROS License 정리

## 국내 기관

* [OSS](https://www.oss.kr/pro_ability)
* [KOSSA](https://www.kossa.kr/)
* [한국저작권위원회-OpenSW라이선스 종합정보시스템](https://www.olis.or.kr/)

## License 종류

### 표기 방법

[표기방법 참조](https://oss.lge.com/guide-ko/process/osc_process/1-identification/copyright_license_rule.html)

### License 의무

| 의무 사항                             | 종류       |            |        |        |             |             |              |              |
| ------------------------------------- | ---------- | ---------- | ------ | ------ | ----------- | ----------- | ------------ | ------------ |
|                                       | APACHE 1.1 | APACHE 2.0 | MIT    | BSD    | GNU GPL 2.0 | GNU GPL 3.0 | GNU LGPL 2.0 | GNU LGPL 3.0 |
| 복제, 배포, 수정                      | ✅         | ✅         | ✅     | ✅     | ✅          | ✅          | ✅           | ✅           |
| 배포시 라이선스 사본 첨부             | -          | ✅         | ✅     | ✅     | ✅          | ✅          | ✅           | ✅           |
| 저작권 또는 attribution 고지사항 유지 | ✅         | ✅         | ✅     | ✅     | ✅          | ✅          | ✅           | ✅           |
| 배포 시 소스코드 제공의무와 범위      | -          | -          | -      | -      | 전체 코드   | 전체 코드   | 2차 저작물   | 2차 저작물   |
| 조합저작물 및 타 라이선스 배포 허용   | 조건부     | ✅         | 조건부 | 조건부 | 조건부      | -           | ✅           | ✅           |
| 수정 내용 고지                        | -          | -          | -      | -      | -           | ✅          | ✅           | ✅           |
| 명시적 특허 라이선스의 허용           | ✅         | ✅         | -      | -      | -           | ✅          | -            | ✅           |
| 특허 소송 시, 라이선스 종료           | ✅         | ✅         | -      | ✅     | -           | ✅          | -            | ✅           |
| 이름, 상표, 상호에 대한 사용 제한     | ✅         | ✅         | -      | ✅     | -           | -           | -            | -            |
| 보증의 부인                           | ✅         | ✅         | ✅     | ✅     | ✅          | ✅          | ✅           | ✅           |
| 책임의 제한                           | ✅         | ✅         | ✅     | ✅     | ✅          | ✅          | ✅           | ✅           |

### APACHE

* 아파치 소프트웨어 제단에서 만든 소프트웨어 라이선스 [^1]
* 소스 코드 공개의 의무가 없음
* 2차 라이선스와 변형물의 특허 출원이 가능
* 라이선스 적용 시 아파치 재단의 이름과 아리선스의 내용 명사
* 아파치 라이선스 2..0이 적용된 소스코드를 수정했을 경우 이를 외부에 그 사실을 밝혀야 함
* 소스코드의 사용자에게 특허의 무제한적 사용을 허가(특허를 이용한 사용 제한 불가?)

| Apache[^2]                            | 1.1    | 2.0 |
| ------------------------------------- | ------ | --- |
| 복제, 배포, 수정                      | ✅     | ✅  |
| 배포시 라이선스 사본 첨부             | -      | ✅  |
| 저작권 또는 attribution 고지사항 유지 | ✅     | ✅  |
| 배포 시 소스코드 제공의무와 범위      | -      | -   |
| 조합저작물 및 타 라이선스 배포 허용   | 조건부 | ✅  |
| 수정 내용 고지                        | -      | -   |
| 명시적 특허 라이선스의 허용           | ✅     | ✅  |
| 특허 소송 시, 라이선스 종료           | ✅     | ✅  |
| 이름, 상표, 상호에 대한 사용 제한     | ✅     | ✅  |
| 보증의 부인                           | ✅     | ✅  |
| 책임의 제한                           | ✅     | ✅  |

#### 라이선스 문

```
Copyright [yyyy] [name of copyright owner]


Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions andlimitations under the License.
```

### MIT

* 이 소프트웨어는 누구라도 무상으로 제한없이 가능
* 단, 저작권 표시 및 허가 표시를 소프트웨어의 모든 복제물 또는 중요한 부분에 기재해야 함
* 저자 또는 저작권자는 소프트웨어에 관해서 아무런 책임을 지지 않음

| MIT[^2]                               |        |
| ------------------------------------- | ------ |
| 복제, 배포, 수정                      | ✅     |
| 배포시 라이선스 사본 첨부             | ✅     |
| 저작권 또는 attribution 고지사항 유지 | ✅     |
| 배포 시 소스코드 제공의무와 범위      | -      |
| 조합저작물 및 타 라이선스 배포 허용   | 조건부 |
| 수정 내용 고지                        | -      |
| 명시적 특허 라이선스의 허용           | -      |
| 특허 소송 시, 라이선스 종료           | -      |
| 이름, 상표, 상호에 대한 사용 제한     | -      |
| 보증의 부인                           | ✅     |
| 책임의 제한                           | ✅     |

#### 라이선스 문

```
The MIT License

Copyright (c) <year> <copyright holders>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
```

### BSD

* 개작, 배포에 아무런 제한이 없음[^3]
* BSD 라이선스가 포함된 소프트웨어를 이용하는 경우, 해당 저작권자의 이름과 BSD 라이선스의 내용을 같이 배포해야만 함
* 해당 라이선스를 가지는 소프트웨어로 인한 법책 책임은 저작권자에게 없음
* 수정 부분에 대한 BSD 라이선스 적용이 불필요
* 소스코드 공개 의무, 상업적 이용에 제한을 받지 않음
* 3-clause 이상의 라이선스의 경우 저작권자의 이름을 광고에 사용할 수 없음
* 4-clause 라이선스의 경우 광고에서 저작권자를 표기해야 함

| BSD[^2]                               |        |
| ------------------------------------- | ------ |
| 복제, 배포, 수정                      | ✅     |
| 배포시 라이선스 사본 첨부             | ✅     |
| 저작권 또는 attribution 고지사항 유지 | ✅     |
| 배포 시 소스코드 제공의무와 범위      | -      |
| 조합저작물 및 타 라이선스 배포 허용   | 조건부 |
| 수정 내용 고지                        | -      |
| 명시적 특허 라이선스의 허용           | -      |
| 특허 소송 시, 라이선스 종료           | -      |
| 이름, 상표, 상호에 대한 사용 제한     | ✅     |
| 보증의 부인                           | ✅     |
| 책임의 제한                           | ✅     |

#### 라이선스 문

```
SPDX short identifier: BSD-3-Clause

Note: This license has also been called the "New BSD License" or "Modified BSD License". See also the 2-clause BSD License.

Copyright <YEAR> <COPYRIGHT HOLDER>

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

### GPL

* GNU GPL[^4]
* 자유로운 사용 및 수정이 가능
* 소스코드 배포 의무가 있음
* 변경된 SW에 대한 소스코드 배포 의무가 있음
* 변경된 SW에 대해서도 동일한 GPL 라이선스가 적용됨
* 배포하지 않는 경우에는 SW를 제공하지 않아도 됨
* GPL이 적용된 소스코드를 기반으로 특허를 출원할 경우 소스 코드 공개의무가 발생

| GNU GPL[^2]                           | 2.0       | 3.0       |
| ------------------------------------- | --------- | --------- |
| 복제, 배포, 수정                      | ✅        | ✅        |
| 배포시 라이선스 사본 첨부             | ✅        | ✅        |
| 저작권 또는 attribution 고지사항 유지 | ✅        | ✅        |
| 배포 시 소스코드 제공의무와 범위      | 전체 코드 | 전체 코드 |
| 조합저작물 및 타 라이선스 배포 허용   | 조건부    | -         |
| 수정 내용 고지                        | -         | ✅        |
| 명시적 특허 라이선스의 허용           | -         | ✅        |
| 특허 소송 시, 라이선스 종료           | -         | ✅        |
| 이름, 상표, 상호에 대한 사용 제한     | -         | -         |
| 보증의 부인                           | ✅        | ✅        |
| 책임의 제한                           | ✅        | ✅        |

#### 라이선스 문

```
The GNU General Public License (GPL)

Version 2, June 1991

Copyright (C) 1989, 1991 Free Software Foundation, Inc.
59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

Everyone is permitted to copy and distribute verbatim copies
of this license document, but changing it is not allowed.

Preamble

The licenses for most software are designed to take away your freedom to share and change it. By contrast, the GNU General Public License is intended to guarantee your freedom to share and change free software--to make sure the software is free for all its users. This General Public License applies to most of the Free Software Foundation's software and to any other program whose authors commit to using it. (Some other Free Software Foundation software is covered by the GNU Library General Public License instead.) You can apply it to your programs, too.

When we speak of free software, we are referring to freedom, not price. Our General Public Licenses are designed to make sure that you have the freedom to distribute copies of free software (and charge for this service if you wish), that you receive source code or can get it if you want it, that you can change the software or use pieces of it in new free programs; and that you know you can do these things.

To protect your rights, we need to make restrictions that forbid anyone to deny you these rights or to ask you to surrender the rights. These restrictions translate to certain responsibilities for you if you distribute copies of the software, or if you modify it.

For example, if you distribute copies of such a program, whether gratis or for a fee, you must give the recipients all the rights that you have. You must make sure that they, too, receive or can get the source code. And you must show them these terms so they know their rights.

We protect your rights with two steps: (1) copyright the software, and (2) offer you this license which gives you legal permission to copy, distribute and/or modify the software.

Also, for each author's protection and ours, we want to make certain that everyone understands that there is no warranty for this free software. If the software is modified by someone else and passed on, we want its recipients to know that what they have is not the original, so that any problems introduced by others will not reflect on the original authors' reputations.

Finally, any free program is threatened constantly by software patents. We wish to avoid the danger that redistributors of a free program will individually obtain patent licenses, in effect making the program proprietary. To prevent this, we have made it clear that any patent must be licensed for everyone's free use or not licensed at all.

The precise terms and conditions for copying, distribution and modification follow.

TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

0. This License applies to any program or other work which contains a notice placed by the copyright holder saying it may be distributed under the terms of this General Public License. The "Program", below, refers to any such program or work, and a "work based on the Program" means either the Program or any derivative work under copyright law: that is to say, a work containing the Program or a portion of it, either verbatim or with modifications and/or translated into another language. (Hereinafter, translation is included without limitation in the term "modification".) Each licensee is addressed as "you".

Activities other than copying, distribution and modification are not covered by this License; they are outside its scope. The act of running the Program is not restricted, and the output from the Program is covered only if its contents constitute a work based on the Program (independent of having been made by running the Program). Whether that is true depends on what the Program does.

1. You may copy and distribute verbatim copies of the Program's source code as you receive it, in any medium, provided that you conspicuously and appropriately publish on each copy an appropriate copyright notice and disclaimer of warranty; keep intact all the notices that refer to this License and to the absence of any warranty; and give any other recipients of the Program a copy of this License along with the Program.

You may charge a fee for the physical act of transferring a copy, and you may at your option offer warranty protection in exchange for a fee.

2. You may modify your copy or copies of the Program or any portion of it, thus forming a work based on the Program, and copy and distribute such modifications or work under the terms of Section 1 above, provided that you also meet all of these conditions:

a) You must cause the modified files to carry prominent notices stating that you changed the files and the date of any change.

b) You must cause any work that you distribute or publish, that in whole or in part contains or is derived from the Program or any part thereof, to be licensed as a whole at no charge to all third parties under the terms of this License.

c) If the modified program normally reads commands interactively when run, you must cause it, when started running for such interactive use in the most ordinary way, to print or display an announcement including an appropriate copyright notice and a notice that there is no warranty (or else, saying that you provide a warranty) and that users may redistribute the program under these conditions, and telling the user how to view a copy of this License. (Exception: if the Program itself is interactive but does not normally print such an announcement, your work based on the Program is not required to print an announcement.)

These requirements apply to the modified work as a whole. If identifiable sections of that work are not derived from the Program, and can be reasonably considered independent and separate works in themselves, then this License, and its terms, do not apply to those sections when you distribute them as separate works. But when you distribute the same sections as part of a whole which is a work based on the Program, the distribution of the whole must be on the terms of this License, whose permissions for other licensees extend to the entire whole, and thus to each and every part regardless of who wrote it.

Thus, it is not the intent of this section to claim rights or contest your rights to work written entirely by you; rather, the intent is to exercise the right to control the distribution of derivative or collective works based on the Program.

In addition, mere aggregation of another work not based on the Program with the Program (or with a work based on the Program) on a volume of a storage or distribution medium does not bring the other work under the scope of this License.

3. You may copy and distribute the Program (or a work based on it, under Section 2) in object code or executable form under the terms of Sections 1 and 2 above provided that you also do one of the following:

a) Accompany it with the complete corresponding machine-readable source code, which must be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange; or,

b) Accompany it with a written offer, valid for at least three years, to give any third party, for a charge no more than your cost of physically performing source distribution, a complete machine-readable copy of the corresponding source code, to be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange; or,

c) Accompany it with the information you received as to the offer to distribute corresponding source code. (This alternative is allowed only for noncommercial distribution and only if you received the program in object code or executable form with such an offer, in accord with Subsection b above.)

The source code for a work means the preferred form of the work for making modifications to it. For an executable work, complete source code means all the source code for all modules it contains, plus any associated interface definition files, plus the scripts used to control compilation and installation of the executable. However, as a special exception, the source code distributed need not include anything that is normally distributed (in either source or binary form) with the major components (compiler, kernel, and so on) of the operating system on which the executable runs, unless that component itself accompanies the executable.

If distribution of executable or object code is made by offering access to copy from a designated place, then offering equivalent access to copy the source code from the same place counts as distribution of the source code, even though third parties are not compelled to copy the source along with the object code.

4. You may not copy, modify, sublicense, or distribute the Program except as expressly provided under this License. Any attempt otherwise to copy, modify, sublicense or distribute the Program is void, and will automatically terminate your rights under this License. However, parties who have received copies, or rights, from you under this License will not have their licenses terminated so long as such parties remain in full compliance.

5. You are not required to accept this License, since you have not signed it. However, nothing else grants you permission to modify or distribute the Program or its derivative works. These actions are prohibited by law if you do not accept this License. Therefore, by modifying or distributing the Program (or any work based on the Program), you indicate your acceptance of this License to do so, and all its terms and conditions for copying, distributing or modifying the Program or works based on it.

6. Each time you redistribute the Program (or any work based on the Program), the recipient automatically receives a license from the original licensor to copy, distribute or modify the Program subject to these terms and conditions. You may not impose any further restrictions on the recipients' exercise of the rights granted herein. You are not responsible for enforcing compliance by third parties to this License.

7. If, as a consequence of a court judgment or allegation of patent infringement or for any other reason (not limited to patent issues), conditions are imposed on you (whether by court order, agreement or otherwise) that contradict the conditions of this License, they do not excuse you from the conditions of this License. If you cannot distribute so as to satisfy simultaneously your obligations under this License and any other pertinent obligations, then as a consequence you may not distribute the Program at all. For example, if a patent license would not permit royalty-free redistribution of the Program by all those who receive copies directly or indirectly through you, then the only way you could satisfy both it and this License would be to refrain entirely from distribution of the Program.

If any portion of this section is held invalid or unenforceable under any particular circumstance, the balance of the section is intended to apply and the section as a whole is intended to apply in other circumstances.

It is not the purpose of this section to induce you to infringe any patents or other property right claims or to contest validity of any such claims; this section has the sole purpose of protecting the integrity of the free software distribution system, which is implemented by public license practices. Many people have made generous contributions to the wide range of software distributed through that system in reliance on consistent application of that system; it is up to the author/donor to decide if he or she is willing to distribute software through any other system and a licensee cannot impose that choice.

This section is intended to make thoroughly clear what is believed to be a consequence of the rest of this License.

8. If the distribution and/or use of the Program is restricted in certain countries either by patents or by copyrighted interfaces, the original copyright holder who places the Program under this License may add an explicit geographical distribution limitation excluding those countries, so that distribution is permitted only in or among countries not thus excluded. In such case, this License incorporates the limitation as if written in the body of this License.

9. The Free Software Foundation may publish revised and/or new versions of the General Public License from time to time. Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns.

Each version is given a distinguishing version number. If the Program specifies a version number of this License which applies to it and "any later version", you have the option of following the terms and conditions either of that version or of any later version published by the Free Software Foundation. If the Program does not specify a version number of this License, you may choose any version ever published by the Free Software Foundation.

10. If you wish to incorporate parts of the Program into other free programs whose distribution conditions are different, write to the author to ask for permission. For software which is copyrighted by the Free Software Foundation, write to the Free Software Foundation; we sometimes make exceptions for this. Our decision will be guided by the two goals of preserving the free status of all derivatives of our free software and of promoting the sharing and reuse of software generally.

NO WARRANTY

11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW. EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU. SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

END OF TERMS AND CONDITIONS

How to Apply These Terms to Your New Programs

If you develop a new program, and you want it to be of the greatest possible use to the public, the best way to achieve this is to make it free software which everyone can redistribute and change under these terms.

To do so, attach the following notices to the program. It is safest to attach them to the start of each source file to most effectively convey the exclusion of warranty; and each file should have at least the "copyright" line and a pointer to where the full notice is found.

One line to give the program's name and a brief idea of what it does.
Copyright (C) <year> <name of author>

This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

Also add information on how to contact you by electronic and paper mail.

If the program is interactive, make it output a short notice like this when it starts in an interactive mode:

Gnomovision version 69, Copyright (C) year name of author Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'. This is free software, and you are welcome to redistribute it under certain conditions; type `show c' for details.

The hypothetical commands `show w' and `show c' should show the appropriate parts of the General Public License. Of course, the commands you use may be called something other than `show w' and `show c'; they could even be mouse-clicks or menu items--whatever suits your program.

You should also get your employer (if you work as a programmer) or your school, if any, to sign a "copyright disclaimer" for the program, if necessary. Here is a sample; alter the names:

Yoyodyne, Inc., hereby disclaims all copyright interest in the program `Gnomovision' (which makes passes at compilers) written by James Hacker.

signature of Ty Coon, 1 April 1989
Ty Coon, President of Vice

This General Public License does not permit incorporating your program into proprietary programs. If your program is a subroutine library, you may consider it more useful to permit linking proprietary applications with the library. If this is what you want to do, use the GNU Library General Public License instead of this License.
```

#### LGPL

* GNU GPL을 기반으로 하지만, 라이브러리로 사용 시 발생하는 문제점을 해결할 목적으로 한 라이선스[^5]
* 라이선스가 적용된 코드를 정적 또는 동적 라이브러리로 사용한 프로그램을 개발하여 판매/배포하는 경우
* 소스코드 공개 의무가 없음
* 단, LGPL을 단순 이용이 아닌 이를 수정 또는 파생된 라이브러리를 개발하여 배포하는 경우에는 전체 코드를 공개해야하는 의무가 있음

| GNU LGPL[^2]                          | 2.0        | 3.0        |
| ------------------------------------- | ---------- | ---------- |
| 복제, 배포, 수정                      | ✅         | ✅         |
| 배포시 라이선스 사본 첨부             | ✅         | ✅         |
| 저작권 또는 attribution 고지사항 유지 | ✅         | ✅         |
| 배포 시 소스코드 제공의무와 범위      | 2차 저작물 | 2차 저작물 |
| 조합저작물 및 타 라이선스 배포 허용   | ✅         | ✅         |
| 수정 내용 고지                        | ✅         | ✅         |
| 명시적 특허 라이선스의 허용           | -          | ✅         |
| 특허 소송 시, 라이선스 종료           | -          | ✅         |
| 이름, 상표, 상호에 대한 사용 제한     | -          | -          |
| 보증의 부인                           | ✅         | ✅         |
| 책임의 제한                           | ✅         | ✅         |

## velodyne

* BSD License

![벨로다인_라이센스](image/license/velodyne/2.PNG)

## robosense

* BSD License

![로보센스_라이센스](image/license/robosense/1.PNG)

## Sick

* Apache License 2.0

![sick_라이센스](image/license/sick/1.PNG)

## hokuyo

* BSD License 2.0
* 일부 소스코드에서 확인

![hokuyo_라이센스1](image/license/hokuyo/1.PNG)
![hokuyo_라이센스2](image/license/hokuyo/2.PNG)

## YDLiDAR

* 라이센스 확인 불가
* 일부 소스코드에서 MIT License 확인

![yd_라이센스](image/license/ydlidar/1.PNG)

## Point Cloud Library

* BSD License

## Qt framework OpenSource

* GNU (L)GPL 3.0 License
* 멸가지 GPL 라이센스 도메인을 제외하고 LGPL 라이센스 라이브러리를 응용프로그램에서 동적 또는 정적으로 링크시켜 사용하는 경우에는 프로그램의 소스코드 공개 의무가 발생하지 않음
* Qt 소스 코드를 수정하거나 Qt 소스코드와 SW 소스코드를 결합하여 컴파일하는 경우에도 공개 의무가 발생함[^6]

[^1]: https://namu.wiki/w/%EC%95%84%ED%8C%8C%EC%B9%98%20%EB%9D%BC%EC%9D%B4%EC%84%A0%EC%8A%A4
    
[^2]: https://www.olis.or.kr/license/compareGuide.do
    
[^3]: https://namu.wiki/w/BSD%20%EB%9D%BC%EC%9D%B4%EC%84%A0%EC%8A%A4
    
[^4]: https://namu.wiki/w/GNU%20%EC%9D%BC%EB%B0%98%20%EA%B3%B5%EC%A4%91%20%EC%82%AC%EC%9A%A9%20%ED%97%88%EA%B0%80%EC%84%9C
    
[^5]: https://darkpgmr.tistory.com/89
    
[^6]: https://makersweb.net/qt/17010
