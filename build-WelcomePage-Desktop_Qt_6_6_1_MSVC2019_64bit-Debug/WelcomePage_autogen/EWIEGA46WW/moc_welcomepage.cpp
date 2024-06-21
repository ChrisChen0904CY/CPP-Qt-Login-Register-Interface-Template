/****************************************************************************
** Meta object code from reading C++ file 'welcomepage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WelcomePage/welcomepage.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWelcomePageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWelcomePageENDCLASS = QtMocHelpers::stringData(
    "WelcomePage",
    "passwordStatusFlipped",
    "",
    "sign_in",
    "register_asked",
    "warning_clear",
    "warning_account_clear",
    "warning_password_clear",
    "account_duplicated_check"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWelcomePageENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[15];
    char stringdata5[14];
    char stringdata6[22];
    char stringdata7[23];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWelcomePageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWelcomePageENDCLASS_t qt_meta_stringdata_CLASSWelcomePageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "WelcomePage"
        QT_MOC_LITERAL(12, 21),  // "passwordStatusFlipped"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 7),  // "sign_in"
        QT_MOC_LITERAL(43, 14),  // "register_asked"
        QT_MOC_LITERAL(58, 13),  // "warning_clear"
        QT_MOC_LITERAL(72, 21),  // "warning_account_clear"
        QT_MOC_LITERAL(94, 22),  // "warning_password_clear"
        QT_MOC_LITERAL(117, 24)   // "account_duplicated_check"
    },
    "WelcomePage",
    "passwordStatusFlipped",
    "",
    "sign_in",
    "register_asked",
    "warning_clear",
    "warning_account_clear",
    "warning_password_clear",
    "account_duplicated_check"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWelcomePageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    0,   60,    2, 0x0a,    5 /* Public */,
       7,    0,   61,    2, 0x0a,    6 /* Public */,
       8,    1,   62,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject WelcomePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWelcomePageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWelcomePageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWelcomePageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WelcomePage, std::true_type>,
        // method 'passwordStatusFlipped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sign_in'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'register_asked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_account_clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_password_clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'account_duplicated_check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>
    >,
    nullptr
} };

void WelcomePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WelcomePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->passwordStatusFlipped(); break;
        case 1: _t->sign_in(); break;
        case 2: _t->register_asked(); break;
        case 3: _t->warning_clear(); break;
        case 4: _t->warning_account_clear(); break;
        case 5: _t->warning_password_clear(); break;
        case 6: _t->account_duplicated_check((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WelcomePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWelcomePageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WelcomePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
