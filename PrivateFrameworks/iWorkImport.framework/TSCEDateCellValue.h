/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCEDateCellValue : TSCECellValue {
    struct TSCEDateValue { int (**x1)(); id x2; struct TSUFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_3_1_4; struct TSUCustomFormat {} *x_3_1_5; } x3; } *mDateValue;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSCEDateValue { int (**x1)(); id x2; struct TSUFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_3_1_4; struct TSUCustomFormat {} *x_3_1_5; } x3; }*)dateValue;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct DateCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; struct FormatStructArchive {} *x4; bool x5; int x6; unsigned int x7[1]; }*)arg1;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })formatStruct;
- (id)initWithArchive:(const struct DateCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; struct FormatStructArchive {} *x4; bool x5; int x6; unsigned int x7[1]; }*)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDateValue:(struct TSCEDateValue { int (**x1)(); id x2; struct TSUFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_3_1_4; struct TSUCustomFormat {} *x_3_1_5; } x3; }*)arg1;
- (BOOL)isEqualToCellValue:(id)arg1;

@end
