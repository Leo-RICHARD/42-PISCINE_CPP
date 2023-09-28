#!/bin/bash

echo "
with no parameters :"
./sedisforlosers
echo "
with non-existing sourcefile :"
./sedisforlosers nonexistingfile "asdf" "asdf";
echo "
with s1 empty :"
./sedisforlosers nonexistingfile "" "asdf";
./sedisforlosers tests/file0in a b;
./sedisforlosers tests/file1in a b;
./sedisforlosers tests/file2in aa a;
./sedisforlosers tests/file3in "i like writing tests" "i don't";
./sedisforlosers tests/file4in " " "";
echo "
DIFF RESULTS :

|"
diff tests/file0out tests/file0in.replace
diff tests/file1out tests/file1in.replace
diff tests/file2out tests/file2in.replace
diff tests/file3out tests/file3in.replace
diff tests/file4out tests/file4in.replace
