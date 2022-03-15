# libQGLviewer

## 설치

1. [github]: https://github.com/GillesDebunne/libQGLViewer

2. [홈페이지]: http://libqglviewer.com/

3. 상업용 버전과 opengsource 버전이 존재

### windows

#### QGLViewer

```makefile
cd path/libQGLViewer-xx.x/QGLViewer
# 해당 폴더의 프로젝트를 gmake를 이용하여 빌드
# 구동이 가능한 qt cmd를 구동
qmake
mingw32-make
# windows의 cmd 등으로 동작시에는 오류가 발생함
```

![qt cmd](image\libqglviewer\qt_cmd.PNG)

- 빌드가 완료되면 release 폴더에서 Qt의 올바른 디버거 폴더에 파일을 이동
- 옮길 파일 : 
  - QGLViewerd2.dll
  - QGLViewer2.dll
- 별도의 파일 경로 없이 컴파일하고자 한다면, QGLViewer 폴더를 Qt/버전/디버거/include로 복사
  - Qt/5.12.xx/mingw73_64/include

#### QGLViewerWidget

```makefile
cd path/libQGLViewer-xx.x/designerPlugin
# 해당 폴더의 프로젝트를 gmake를 이용하여 빌드
# 구동이 가능한 qt cmd를 구동
qmake
mingw32-make
# windows의 cmd 등으로 동작시에는 오류가 발생함
```

- 빌드가 완료되면 release 폴더에서 플러그인 파일을 Qt의 특정 디버거 폴더로 이동
  - qglviewerplugin.dll
  - Qt/5.12.xx/mingw83_64/plugin/designer

![위젯 입력](image\libqglviewer\widget_01.PNG)

- Qt creator에서는 출력되지 않지만, Qt designer에서는 출력되는 것을 확인
