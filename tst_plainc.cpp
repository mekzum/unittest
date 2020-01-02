#include <QtTest>



extern "C" {
  // Get declaration for f(int i, char c, float x)
  #include "demo.h"
}
// add necessary includes here

class plainC : public QObject
{
    Q_OBJECT

public:
    plainC();
    ~plainC();

private slots:
    void test_case1_data();
    void test_case1();

};

plainC::plainC()
{

}

plainC::~plainC()
{

}

void plainC::test_case1_data()
{
    QTest::addColumn<int>("value_of_a");

    for (int i = 0; i < 100; i++) {
        QTest::newRow("a degeri aliniyor.") << get_value();
    }


}
void plainC::test_case1()
{

QFETCH(int, value_of_a);
QCOMPARE(value_of_a,5);
}

QTEST_APPLESS_MAIN(plainC)

#include "tst_plainc.moc"
