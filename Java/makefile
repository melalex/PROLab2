JFLAGS = -g
JC = javac
JVM= java 

.SUFFIXES: .java .class

.java.class:
	$(JC) $(JFLAGS) $*.java

CLASSES = \
	Main\Main.java \
	Main\Coordinates.java \
	WorkWithMatrix\FindAFirstNegativeElementInTheColumns.java \
	WorkWithMatrix\MatrixOutput.java  
MAIN = Main\Main.java

default: classes run jar clean

classes: $(CLASSES:.java=.class)

run: $(MAIN).class
	$(JVM) $(MAIN)

jar: 
	jar -cvf Main.jar *.class

clean:
	$(RM) *.class
	$(RM) *.jar
