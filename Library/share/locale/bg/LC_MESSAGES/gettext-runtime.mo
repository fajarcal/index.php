��    .      �  =   �      �  8   �  B   *  A   m  6   �  H   �  I   /  F   y  9   �  7   �  6   2  M   i  L   �  O     H   T  {   �       ,   5     b  .   �  '   �  (   �     	     "	  e   /	  :   �	    �	  �  �
  �  �     \     q  1   �  &   �     �     �  "   �  9   "  I   \  �   �     D     T     m     ~     �     �     �  �  �  Y   N  g   �  e     V   v  �   �  �   Q  �   �  X   b  V   �  W     t   j  �   �  j   `  �   �  �   O  ,     5   A  -   w  E   �  :   �  ;   &  )   b     �  �   �  G   4  �  |  r  o  �  �   /   �#     �#  e   $  B   t$     �$  2   �$  >   %  _   A%  t   �%    &     /'  %   L'  $   r'  #   �'     �'  *   �'     (                              &   %                     .                 -       !                             *   
                "                ,   	   $          +   #   )                (       '                 -E                        (ignored for compatibility)
   -V, --version               output version information and exit
   -V, --version             display version information and exit
   -c, --context=CONTEXT     specify context for MSGID
   -d, --domain=TEXTDOMAIN   retrieve translated message from TEXTDOMAIN
   -d, --domain=TEXTDOMAIN   retrieve translated messages from TEXTDOMAIN
   -e                        enable expansion of some escape sequences
   -h, --help                  display this help and exit
   -h, --help                display this help and exit
   -n                        suppress trailing newline
   -v, --variables             output the variables occurring in SHELL-FORMAT
   COUNT                     choose singular/plural form based on this value
   MSGID MSGID-PLURAL        translate MSGID (singular) / MSGID-PLURAL (plural)
   [TEXTDOMAIN]              retrieve translated message from TEXTDOMAIN
   [TEXTDOMAIN] MSGID        retrieve translated message corresponding
                            to MSGID from TEXTDOMAIN
 %s: invalid option -- '%c'
 %s: option '%s%s' doesn't allow an argument
 %s: option '%s%s' is ambiguous
 %s: option '%s%s' is ambiguous; possibilities: %s: option '%s%s' requires an argument
 %s: option requires an argument -- '%c'
 %s: unrecognized option '%s%s'
 Bruno Haible Display native language translation of a textual message whose grammatical
form depends on a number.
 Display native language translation of a textual message.
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
Standard search directory: %s
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
When used with the -s option the program behaves like the 'echo' command.
But it does not simply copy its arguments to stdout.  Instead those messages
found in the selected catalog are translated.
Standard search directory: %s
 In normal operation mode, standard input is copied to standard output,
with references to environment variables of the form $VARIABLE or ${VARIABLE}
being replaced with the corresponding values.  If a SHELL-FORMAT is given,
only those environment variables that are referenced in SHELL-FORMAT are
substituted; otherwise all environment variables references occurring in
standard input are substituted.
 Informative output:
 Operation mode:
 Substitutes the values of environment variables.
 Try '%s --help' for more information.
 Ulrich Drepper Unknown system error Usage: %s [OPTION] [SHELL-FORMAT]
 Usage: %s [OPTION] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Usage: %s [OPTION] [[TEXTDOMAIN] MSGID]
or:    %s [OPTION] -s [MSGID]...
 When --variables is used, standard input is ignored, and the output consists
of the environment variables that are referenced in SHELL-FORMAT, one per line.
 Written by %s.
 error while reading "%s" memory exhausted missing arguments standard input too many arguments write error Project-Id-Version: GNU gettext-runtime 0.20-rc1
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2019-04-16 21:12+0300
Last-Translator: Roumen Petrov <transl@roumenpetrov.info>
Language-Team: Bulgarian <dict@ludost.net>
Language: bg
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
   -E                        (пренебрегва се; за съвместимост)
   -V, --version               извеждане на сведение за версия и изход
   -V, --version             извеждане на сведение за версия и изход
   -c, --context=ОБКРЪЖЕНИЕ  задава обкръжение за КЛЮЧ
   -d, --domain=ОБЛАСТТЕКСТ  намиране на преведените съобщения от ОБЛАСТТЕКСТ
   -d, --domain=ОБЛАСТТЕКСТ  намиране на преведените съобщения от ОБЛАСТТЕКСТ
   -e                        разрешава разгъване на някой "заместващи последователности"
   -h, --help                  извеждане на тази помощ и изход
   -h, --help                извеждане на тази помощ и изход
   -n                        потискане на завършващ "нов ред"
   -v, --variables             извежда променливите намерени в ОБВИВКА-ФОРМА
   БРОЙ                      на базата на тази стойност избира формата за ед/мн.ч.
   КЛЮЧ КЛЮЧ-МН.Ч.           превежда КЛЮЧ (ед.ч.) / КЛЮЧ-МН.Ч (мн.ч.)
   [ОБЛАСТТЕКСТ]             намиране на преведените съобщения от ОБЛАСТТЕКСТ
   [ОБЛАСТТЕКСТ] КЛЮЧ        намиране на преведените съобщения съответни
                            на КЛЮЧ от ОБЛАСТТЕКСТ
 %s: неправилна опция -- '%c'
 %s: опцията '%s%s' е без аргумент
 %s: двусмислена опция '%s%s'
 %s: двусмислена опция '%s%s', възможности: %s: опцията '%s%s' изисква аргумент
 %s: опцията изисква аргумент -- '%c'
 %s: непозната опция '%s%s'
 Бруно Хаибле Извежда превода на текстово съобщение, чиято граматична форма зависи от броя.
 Извежда преведено текстово съобщение.
 Ако не е зададен параметър ОБЛАСТТЕКСТ, областта се определя от променливата
от обкръжението TEXTDOMAIN.  Ако каталога със съобщенията не е намерен в
обичайната директория, друго местоположение може да се зададе с променливата
от обкръжението TEXTDOMAINDIR.
Директория за търсене: %s
 Ако не е зададен параметър ОБЛАСТТЕКСТ, областта се определя от променливата
от обкръжението TEXTDOMAIN.  Ако каталога със съобщенията не е намерен в
обичайната директория, друго местоположение може да се зададе с променливата
от обкръжението TEXTDOMAINDIR.
Ако се използва заедно с опцията -s, програмата се държи като командата 'echo',
но не без просто да копира аргументите си на стандартния изход.  Вместо това, 
съобщенията, намерените в избрания каталог, се превеждат.
Директория за търсене: %s
 При нормален режим на работа, стандартния вход се копира на стандартния изход,
като указаните променливи от обкръжението в формат $ПРОМЕНЛИВА или ${ПРОМЕНЛИВА}
се заместват със съответните им стойности.  Ако е зададена ОБВИВКА-ФОРМА, се
заместват само променливите от обкръжението указани от ОБВИВКА-ФОРМА, иначе
се заместват всички указани променливите от обкръжението намерени в стандартния
вход.
 Осведомително извеждане:
 Режим на работа:
 Замества стойностите на променливите от обкръжението.
 За повече сведения, опитайте '%s --help'.
 Улрих Дрепер Неизвестна системна грешка Употреба: %s [ОПЦИЯ] [ОБВИВКА-ФОРМА]
 Употреба: %s [ОПЦИЯ] [ОБЛАСТТЕКСТ] КЛЮЧ КЛЮЧ-МН.Ч. БРОЙ
 Употреба: %s [ОПЦИЯ] [[ОБЛАСТТЕКСТ] КЛЮЧ]
или:      %s [ОПЦИЯ] -s [КЛЮЧ]...
 Ако се използва --variables, стандартния изход се пренебрегва и изведеното се
състои от променливите на обкръжението указани от ОБВИВКА-ФОРМА, по една на ред.
 Създадена от %s.
 грешка при четене "%s" паметта е изчерпана липсващи аргументи стандартен вход твърде много аргументи грешка при запис 