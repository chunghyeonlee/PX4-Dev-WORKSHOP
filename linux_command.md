ls	리스트를 보여줌
ls -al	- a : 디렉토리 내의 모든 파일을 의미
	- l : 파일이나 디렉토리의 소유자, 권한, 크기, 날짜 등에 대해서도 보여줌
touch	파일을 생성하는 명령어
pwd	현재 디렉토리의 위치를 보여줌
cd	디렉토리를 바꾸어 준다
	ex) cd x  (x디렉토리로 가기)
	    cd .. 한 디렉토리 위로 가기
mkdir	디렉토리 생성(디렉토리를 생성하면 실행권한도 같이 생김)
mv	파일이나 디렉토리를 이동시키거나, 이름을 변경할 때 사용
	ex ) mv test1 test2 (test1을 test2로 이동시킴)
cp      파일 및 폴더 복사할 때 사용
	ex ) cp test1.txt text2.txt (test2.txt 파일을 복사해 생성)
	     cp/opt/copy1 /home/copy2 (copy1을 home의 copy2 폴더로 복사)
폴더 복사 ex ) cp -r/opt /home/opt (-r옵션을 붙여 디렉토리 이동,opt 디렉토리를 home 디렉토리 밑으로 이동)



stat	파일의 변경상황 확인 가능
cat	파일의 내용을 보여줌
	ex ) cat file |more : 파일의 내용이 너무 많아지면, |more 화면단위로 잘라
du	하드 사용량 체크
rm	파일 삭제 (백업이 존재하는지 확인하고 지우는 것이 좋다)
./x	x 프로그램 실행 ( 현재 디렉토리에 있는 것.)
↑/ ↓	이전에/ 다음에 입력했던 명령어
x [tap][tap]	x로 시작하는 모든 명령어 보기
adduser		시스템에 사용자 추가
df(or df x)	장치 x의 남은 공간 보여주기
top		메모리 상태 보여주기(q는 종료)
man x		명령어 x에 관한 매뉴얼 페이지 얻기
less x		텍스트 파일 x 보기
echo		어떤 것을 echo 화면에 인쇄
mount		장치 연결
		ex ) CR-ROM, 연결을 해제하려면 unmount
reboot
ctrl+alt+del	시스템 다시 시작하기
halt		시스템 종료

----<<<<Linux고급 명령어>>>>----- 
chmod <권한> <파일>	파일 권한 변경
ls -l x			파일 x의 자세한 상황을 보여줌
ln -s x y		x에서 y로 심볼릭 링크를 만들어 줌	
find x -name y -print	디렉토리 x 안에서 파일 y를 찾아서 화면에 보여줌
ps			지금 작동중인 모든 프로세스들을 보여줌
kill x			프로세스 x를 종료(x는 ps명령으로 알게 된 PID)
[alt] + F1 ~ F7		터미널 1~7까지 바꾸기
lilo			부트 디스크를 만듦

