#ifndef UTILS_H
#define UTILS_H

#include <QLabel>
#include <QString>
#include <QFile>
#include <QStack>
#include <QVector>
#include <QRandomGenerator>
#include <QGraphicsDropShadowEffect>

void Set_Image_On_Label(QLabel* label, QString path);
QGraphicsDropShadowEffect* red_shadow(QWidget* parent);
QGraphicsDropShadowEffect* none_shadow(QWidget* parent);
QVector<QString> Get_Random_Verification(void);
QString Set_Number_Split(QString);

#endif // UTILS_H
