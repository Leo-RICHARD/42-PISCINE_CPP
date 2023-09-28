#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("[target]", "[shrubbery creation form]", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target, std::string const &name) : Form(target, name, 145, 37)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &model) : Form(model)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkPrerequisites(executor, getGradeToExec());
    std::string sourcefile = getTarget() + "_shrubbery";
    std::ofstream file(sourcefile.c_str(), std::ios_base::app);
    if (!file.is_open())
	throw(NoShrubberyException());
    file << "                                                                      ...                           ....                            ....                            ....                            ....                           ...                                                                      " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                    ...                             ..                              ...                             ..                              ..                                                                                     " << std::endl;
     file << "                                                                                    ....                           ....                  ....   ..'....';..  ....                  ....                            ...                                                                                     " << std::endl;
     file << "                                                                                    ....                           ....            .,.  ..';c:;::;;'....,cl::c:'..  .,.            ....                            ...                                                                                     " << std::endl;
     file << "                                                                                                                           ..    .;l;.,c;. .oOd;..:'..,;..'ckd. .,c;';l:.    ..                                                                                                                            " << std::endl;
     file << "                                                                                                                          .;c.  .lx:;od;. .:kd,..o:....lc..,:xc. .,od::xo.  .::.                                                                                                                           " << std::endl;
     file << "                                                                                                                       .. .cd,  ;kdokl';,.ckl::.ck,':,.ck,,c'lOl',:'cxddk;  'dc. ..                                                                                                                        " << std::endl;
     file << "                                                                                                                ...    ;c..lOxc,cO0Oc..ckkxl.;o,oOc:;..cOxdc.'okkkc..:k0Ol,cxOl..c:.   ...                                                                                                                 " << std::endl;
     file << "                                                                                                                .:,..;cl,.':coxkkOOd. .oxll:..oxx0kc. .l00o. .cooxo' .oOOOkxoc;'.,ll:'.,:.                                                                                                                 " << std::endl;
     file << "                                                                      .                             ...       . .:dlxOkl:,'....:dkkc.;oc,od;..'lk0x'  .d0d...';do;co:.ckkd:....';:lxOkodc.          ..                             .                                                                       " << std::endl;
     file << "                                                                     ...                           ....   .''... ;kOxlc;...  ....lkoox:.cOxc;..';dx'  'xk,',',:dOl.;xookl'.... ...:clxOO: .'.''.   ....                           ...                                                                      " << std::endl;
     file << "                                                                     ...                           .....   .lo,. :Od'.cd'.,::,;:..dOkc.cdl,. .cc.'d:  'kd.'o;  .:lc':kOd'.::,:c,.,dc.'dO: .,oo'   .....                           ...                                                                      " << std::endl;
     file << "                                                                                                      ':.  .cd' .lk; .:Oxddc.,d: .lOl,lko,. .lx, 'xo. .dx..dx. ..;do,cOo. ;x;.cddkOc. ,xl. 'xl.  .c,                                                                                                       " << std::endl;
     file << "                                                                                                      .od:..:d' .dd.  ;OOl,ccdx' .cOddo;..  'xd..lOc,:,ck:'xx'   .'codOl. .xxlc,cOO;  .dx. 'xc..:dd'                                                                                                       " << std::endl;
     file << "                                                                                                      .:kOklokl.'ko. .:Ol..cO0x' .c00o.     .ok:lOl..:lcoOkOc.  ....:k0l. .d0Ol..cOc. .ok,.lOdlkOkc..                                                                                                      " << std::endl;
     file << "                                                                                                   .,ccllodxO0OllOd. .od'','c0O: .c0k;;'.'.  ,k0Oc.   'cx0Kx'  .c,';'o0c. ;O0l','.dd. .oOllO0Oxdlllcc;.                                                                                                    " << std::endl;
     file << "                                                                                                  .;:'..,:ldk000O0d' 'dl:o, .o0x' :0k';l:d: .:Ok;.     .,ckOc. ,dll;.o0c 'x0d. 'o:cd' .d0000Okdl:,'.':;.                                                                                                   " << std::endl;
     file << "                                                                                    ...           ....':c:;;;;;cdkkc.'dxx:.,oO00x,'x0:.cO0c.cko,..,'...;;.:dOc.,O0c.;Ok''d00Oo;.;dxd,.:xkdc;;:;;:c:'. ....         ...                                                                                     " << std::endl;
     file << "                                                                                   .....        .;'   ..;:,.,c. .'lxc'lOl':olcld0OllOk,.l0lc0d.::.ol...ll;l;ckccOl.;k0l:kOdlccoc'lOo,cko,. .c;.,:;..   .c,.        ...                                                                                     " << std::endl;
     file << "                                                                                    ...   ... .,do'...  .'lookxc'..;docdl....'':OK0O0KO:,xOO0;.lxdx:. .oxcxo.cO0x,:OK0O0KO:',....lxcox:..'cxkool'.  ....lx:. ...   ...                                                                                     " << std::endl;
     file << "                                                                                          .,l:ckd'';,:cloodO0OkkkdolxOkkk;. ,olxklclox00dx0Kk' c0Oc.  .c000o.,O0dd00xolclkxlo; .;kOkOxoodkkkkOOdlllc:;;..ox;,:'.                                                                                           " << std::endl;
     file << "                                                                                           .,okOc;c' .'ck0xc,.';,.,:cldk0O:.;xc;..;;.,lok00Kk'.x0c';'..,o00l.;OK0kol,.;;..;cx:.;k0kdlc:,.,;'.':d0k:.. 'c,:kxc'.                                                                                            " << std::endl;
     file << "                                                                                         .'. .:xxxc..,cddc.   .:c..c; ..;okooOl. ;x;.;ooox0K0:;Od.:d' ;dx00c.oK0xood:.,x: .cOdoko;.. ;l..c:.   .:ddc,..cdxk:. .'.                                                                                          " << std::endl;
     file << "                                                                                         .:l,..:kOc.';;'..,;.  .:lcdx'   ..ck0k,.lx' 'lkKKKKKkcxdcOd. .,d0Kxx0K00KOo' .xo.'k0kc'.   'xxloc.  .;;..';;'.;Okc.':lc.                                                                                          " << std::endl;
     file << "                                                                                          .,clclxOx:....',ckx:.  .cxOx:.    .:dxldk:. .:o::lO0kOK00c.;::,dKKKOl;,lo. .;kdlxd:.   ..:xOxc'  .:xkc,'.. .;dOkoooc,.                                                                                           " << std::endl;
     file << "                                                                     ..                   .....,,,;col:;,,,,:dxl;,',lO0koc:,'..;lxOkl..'..'..o0KKX0;..;k00K0o..'..'..ckOxo;'.',;cok0Oo,',:lxd:;,,,,:looc:;'.. ..                   .                                                                       " << std::endl;
     file << "                                                                     ...                  .:;.     ..;:::cdxxkOOxdoooddodddxkkkkdxO00k:. :l. .c0KK0c  .oKK0l. .l:..:x00OxxkOkkxxddooooooxOOOkxkkdlcc;'.     .;;.                  ...                                                                      " << std::endl;
     file << "                                                                     ..                 ..,lkdc;,''',,;;coxdoollddoc,..  .'''';:lldkO0OdoOx.  .oKKKx. 'kKKd.  .d0dxO0Oxolc:,''''.  ..;coxkdloodkdl:;;,''',;cdkl,'.                 ..                                                                      " << std::endl;
     file << "                                                                                       .,:::;,;;::coxkolll:'':cllllllcc;..':cc:;co;.';lkKK0l.  ;OKK0dlxKK0:  .c0KKkl;'.,ol:ccc:,.':lllccclll:'.collokxlc::;;,;;:;,.                                                                                        " << std::endl;
     file << "                                                                                        .;:'.,;;;cdko,...,clool::::cclk0Oxlcloooodko'. .:x00x:.'kXKKKXKKXO;.cx0Kx:. .,okxoloolllxO0koccc::clooll;...'lxdl:;;,.'::.                                                                                         " << std::endl;
     file << "                                                                                      ..';dx:..';dx:.   ..;oOOxolc::;:oOKK0OkxdolokK0d:'..:kKKOx0KKKKKKKK0kOKKOc..':d0KOdoodxkOO0K0d:;;:cloxkOo;..   .;xx:'..;xx:,..                                                                                       " << std::endl;
     file << "                                                                                      ..,cdOko;;::,',:coxxol;..   .':okxlc;:ol;..';coxOOxl,'oKKKKKKKKKKKKKKK0d,'cxOOxlc;'..,ll;;:cdkd:'.   ..;ldxxoc;,',cc;;okOxc,..                                                                                       " << std::endl;
     file << "                                                                                      .',;lk00Okxdxk0000d'.,cllcclodOOc..'ldk00kdlc:;:loxkOxlxKKK00000000KK0dcdOkdolc:ccldx0Kkdo' .:kOxoollloc,.'oO00OOkdxk000kl;,'..                                                                                      " << std::endl;
     file << "                                                                                    ....',::::;,':kOxk0l..;lx0K0x:,o0o..,:cc::lx0K00KKK0kk0KK0KK0O00KK00O0KK0KX0kk0KXK00K0xl::ccc;..lOo,:d0K0xl:'.cOkxOkc',;::::,.....                                                                                     " << std::endl;
     file << "                                                                                   .....      ..ckk;;kd;,clok0x;. ,kO;.;,...,ldoccoOOoc;,;lOKKKK0O0KKKK0O0KKKKOl,',:okkl:codo;. .,;.,kO; .;x0koll;,dk;;xkc..      .....                                                                                    " << std::endl;
     file << "                                                                                    ...   ..;cok0x,.lOc.,,;o0k,  .:Oo... .,dx:..'oxl,.';cdOKKKKK000000000KKKKKKOxl:'.,lxd,..:xd;. ...oOc.  'x0d;,,.:Oo.'d0kdc:'.   ...                                                                                     " << std::endl;
     file << "                                                                                        .;cc:cx0x;;okOc.,lox0o.  .dx,  .'oOo...lOd'.;oOKOdlox0KKKKK0000KKKKK0xoloOKOo:..oOo'..oOo,.  'xx.  .l0xol;.:Oko;,d0kc:cc;.                                                                                         " << std::endl;
     file << "                                                                                       ..'.. .xOcld;;d:;o;.cO:. .;l,..;oO0o';okKk'  .cxc..  .'o0KKKKKXKKKK0o'.   .cxl.  'xKOo;'l00d;..'c;.  ;Ol.,o;:o,;dlckk'  .'..                                                                                        " << std::endl;
     file << "                                                                                            .lOkoo, .;''. .oo.  .;clxOOk0d,:l;l0l. .;:.       .c0XKKKKKKK0:.       .:;. .l0o,lc,d0xkOxoc:.  .oo. ...;. 'lok0o.                                                                                             " << std::endl;
     file << "                                                                                          .'okxkx;.      .,:. .;loO0d:.:k:....ox'              .oKKKKKKKKl.              'dd....:k;.:oOOdl;. .:;.   .  .,xkdkd,.                                                                                           " << std::endl;
     file << "                                                                                        .'ldl,.cx;       ...  .,..:;. .lx' ..;;.                :0KKKKKK0:                .;;.. 'xl. .,:..,.  ...   .   ,xc.'ldl'.                                                                                         " << std::endl;
     file << "                                                                     ..                 ';,.   .l;  ...        ......'ckl. ...     ...          ;0KKKKKK0:.         ...     ... .lkc'.......       ...  ,l.   .,:'                 ..                                                                      " << std::endl;
     file << "                                                                     ...                .      ... ....       .,:cldkO0d.          ....         :0KKKKKKKl.        ....          .d0Okxoc:;..      .... ...      .                ...                                                                      " << std::endl;
     file << "                                                                      .                     ..      ...           'x0xc.           ...         .cKKKKKKKKo.         ...           .:xOx,           ...      ..                     .                                                                       " << std::endl;
     file << "                                                                                            ;c.                 .:oc,.                         .dKKKKKKKKx.                         .':o:.                 .c;.                                                                                            " << std::endl;
     file << "                                                                                            'o;   ...           ,:.                            ,kKKKKKKKKk,                            .;;.          ...   ,o,                                                                                             " << std::endl;
     file << "                                                                                            .cd;  ;o.          ...                            .l0KKKKKKKK0l.                            ...          .l:. ,dc.                                                                                             " << std::endl;
     file << "                                                                                             .lx:,xd.    ..                                   ,OKK000000KKk;                                   ...   .ox;;xl.                                                                                              " << std::endl;
     file << "                                                                                             ..cxkOx'   .:'                                 .,xK0OOOOOOOO0Kk;.                       .         .:.   'xOkxc..                                                                                              " << std::endl;
     file << "                                                                                    ...     .:,.,dOOl.  ;o.        ........      ...      .'lOK0OOO0000OOO0KOl'.      ...      ..'.....        .o:  .lOOd,.,:.     ...                                                                                     " << std::endl;
     file << "                                                                                   ....      ;dl''lOOc..ck;.;:;..  .....,:c;..   .cl:,'';cdO00K0OOO0000OkO000KOdc;'',:l:.    .;c:,.....  ..;::.;kl..ckOo''ld;      ....                                                                                    " << std::endl;
     file << "                                                                                    ...      .,okookOOl.;kd;,lkk:.  .:' .'lkko:,'.'lO000000000K0OdxOOOOOOxx0000KK0000Ol''',:lkxc'. .:.  .:kkl,,dO:'lkOkooxd,.       .                                                                                      " << std::endl;
     file << "                                                                                               .,:oxkOOdcdOo'':cdl,..oo.':;;cdoccokOOxxO0000kdkKd,o0OO00Kd;d000000OxxO0Odlcloc,;:'.lo..;odl:''oOdlxOOkdl:,.                                                                                                " << std::endl;
     file << "                                                                                                  ..':lxkOOOxcc:coxxdx0xc::;;oo:';lc;:oO0OdlcoOKo,dKOkkOKk;'d0OdoOOd:;cl:,:dxc;;;:dOxdxkdlcccdOOkkxl:'..                                                                                                   " << std::endl;
     file << "                                                                                                    .'.';lxOOkocccoxkOOOOxddooddoodxkOxl;;clod0O;:O0l.'o00k:,lkdc:lk0kxdodddoooodOOkkkxdlccokOOkl;'',.                                                                                                     " << std::endl;
     file << "                                                                                                    .;loloxOOO0Oxlcc::;;::cldxddxxOOd,. ':;;coo,'dKx'  :O000dc;:c;..;ldxxxxxxxoc:;;;:ccllxO0OOOxoool;.                                                                                                     " << std::endl;
     file << "                                                                                                      ..,;;;;;:clodkOkkkxxddk0Oxllxx;,;,'..,;;;cxOxxl..c000000OxoolccclllccdOOxdxxkOOOOxolc:;;,;;,...                                                                                                      " << std::endl;
     file << "                                                                     ...                           ....   .',;::ccoxOOOkdk0Oxc'. ,d:.':ldxxxkO000d.,l:oxO000Oo:oxkkOOOOxool:oO00koxOOOkoc:::;,'.   ....                           ...                                                                      " << std::endl;
     file << "                                                                     ...                           ....   ....';cdkxxOl'cOx:.,c;,::,,;:lxOOxk0000x'.,lc:x0kk0x,..cxOkxkxolc,,x0OOc'lkxdkdc;'....   ....                           ...                                                                      " << std::endl;
     file << "                                                                                                    ..        ..,,'.:d..oO:  .cOOxxddkklcdc,d0Odk0kl'..:O0o:x0kl,.,lo,,oOOk:.cOkOd..dc.',,..                                                                                                               " << std::endl;
     file << "                                                                                                                   .:c..lx'.,cdOOxccodc',lok00l.:Oooc.'oxll:o000Oxc;;'.lOodd,co;do..c:.                                                                                                                    " << std::endl;
     file << "                                                                                                                   ... .cc;odkOx:.,:;;cdkOooOOc..l:...':;':ok0OooO0Od;.:Odcl';c.,:. ...                                                                                                                    " << std::endl;
     file << "                                                                                                                       ..,::lxo'.';:okkxkO;.oOko:,. ..;lxOOkxOk;.dOlcdl',ll:.......                                                                                                                        " << std::endl;
     file << "                                                                                                                         ..;c;..cccdOo'.:kl.,kkoxk:..;;:d0k,.dO:.:x, .lc. .,.                                                                                                                              " << std::endl;
     file << "                                                                                     .                              ..     .   ....co.  .lc.'dl.;xdc'..,dlc:.'od,.,.  .'.           ..                              .                                                                                      " << std::endl;
     file << "                                                                                    ...                            ....            ..   ... .,. .l:,,'.,l' .. .,,.                 ....                            ...                                                                                     " << std::endl;
     file << "                                                                                   .....                           ....                          .........                         ....                           ....                                                                                     " << std::endl;
     file << "                                                                                                                                                    ..                                                                                                                                                     " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                                                                                                                                                                                                                           " << std::endl;
     file << "                                                                                                    ..                              ..                              ..                              ..                                                                                                     " << std::endl;
     file << "                                                                      ..                            ...                            ...                              ...                            ...                             ..                                                                      " << std::endl;
    return (true);
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (rhs.isSigned())
	beSigned(Bureaucrat("", 1));
    return (*this);
}

const char	*ShrubberyCreationForm::NoShrubberyException::what() const throw()
{
    return ("Error : no shrubbery there");
};
