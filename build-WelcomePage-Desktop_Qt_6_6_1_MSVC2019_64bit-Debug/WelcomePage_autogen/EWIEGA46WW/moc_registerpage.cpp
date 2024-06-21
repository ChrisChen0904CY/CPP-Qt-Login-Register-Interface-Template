/****************************************************************************
** Meta object code from reading C++ file 'registerpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WelcomePage/registerpage.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerpage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRegisterPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRegisterPageENDCLASS = QtMocHelpers::stringData(
    "RegisterPage",
    "account_verify",
    "",
    "user_info",
    "warning_clear_1",
    "warning_clear_2",
    "warning_clear_3",
    "warning_clear_4",
    "register_asked",
    "read_flip"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegisterPageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[16];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegisterPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegisterPageENDCLASS_t qt_meta_stringdata_CLASSRegisterPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "RegisterPage"
        QT_MOC_LITERAL(13, 14),  // "account_verify"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "user_info"
        QT_MOC_LITERAL(39, 15),  // "warning_clear_1"
        QT_MOC_LITERAL(55, 15),  // "warning_clear_2"
        QT_MOC_LITERAL(71, 15),  // "warning_clear_3"
        QT_MOC_LITERAL(87, 15),  // "warning_clear_4"
        QT_MOC_LITERAL(103, 14),  // "register_asked"
        QT_MOC_LITERAL(118, 9)   // "read_flip"
    },
    "RegisterPage",
    "account_verify",
    "",
    "user_info",
    "warning_clear_1",
    "warning_clear_2",
    "warning_clear_3",
    "warning_clear_4",
    "register_asked",
    "read_flip"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegisterPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   59,    2, 0x0a,    3 /* Public */,
       5,    0,   60,    2, 0x0a,    4 /* Public */,
       6,    0,   61,    2, 0x0a,    5 /* Public */,
       7,    0,   62,    2, 0x0a,    6 /* Public */,
       8,    0,   63,    2, 0x0a,    7 /* Public */,
       9,    0,   64,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RegisterPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegisterPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegisterPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegisterPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RegisterPage, std::true_type>,
        // method 'account_verify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'warning_clear_1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_clear_2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_clear_3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning_clear_4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'register_asked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'read_flip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RegisterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisterPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->account_verify((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 1: _t->warning_clear_1(); break;
        case 2: _t->warning_clear_2(); break;
        case 3: _t->warning_clear_3(); break;
        case 4: _t->warning_clear_4(); break;
        case 5: _t->register_asked(); break;
        case 6: _t->read_flip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegisterPage::*)(QVector<QString> );
            if (_t _q_method = &RegisterPage::account_verify; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *RegisterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegisterPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RegisterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RegisterPage::account_verify(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
