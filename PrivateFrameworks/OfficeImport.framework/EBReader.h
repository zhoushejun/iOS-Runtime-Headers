/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface EBReader : OCBReader {
    const void *mBuffer;
    BOOL mIsFileStructuredStorage;
    NSString *mTemporaryDirectory;
    BOOL mUseStringOptimization;
    struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; } *mXlObjectFactory;
}

@property BOOL isFileStructuredStorage;
@property(retain) NSString * temporaryDirectory;
@property BOOL useStringOptimization;
@property(readonly) struct XlBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; bool x39; bool x40; bool x41; struct ChVector<int> { int *x_42_1_1; int *x_42_1_2; unsigned int x_42_1_3; unsigned int x_42_1_4; unsigned int x_42_1_5; } x42; struct ChVector<int> { int *x_43_1_1; int *x_43_1_2; unsigned int x_43_1_3; unsigned int x_43_1_4; unsigned int x_43_1_5; } x43; struct ChVector<int> { int *x_44_1_1; int *x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; } x44; struct XlIndex {} *x45; struct XlRow {} *x46; struct XlRecord {} *x47; int x48; int x49; short x50; int x51; int x52; struct ChVector<XlCell *> { struct XlCell {} **x_53_1_1; struct XlCell {} **x_53_1_2; unsigned int x_53_1_3; unsigned int x_53_1_4; unsigned int x_53_1_5; } x53; int x54; unsigned char x55; int x56; struct XlWorksheetProperties { int (**x_57_1_1)(); unsigned short x_57_1_2; int x_57_1_3; unsigned short x_57_1_4; bool x_57_1_5; unsigned short x_57_1_6; unsigned short x_57_1_7; unsigned short x_57_1_8; unsigned short x_57_1_9; bool x_57_1_10; bool x_57_1_11; bool x_57_1_12; bool x_57_1_13; bool x_57_1_14; bool x_57_1_15; bool x_57_1_16; bool x_57_1_17; bool x_57_1_18; bool x_57_1_19; bool x_57_1_20; bool x_57_1_21; bool x_57_1_22; bool x_57_1_23; bool x_57_1_24; bool x_57_1_25; short x_57_1_26; struct ChVector<XlBrk *> { struct XlBrk {} **x_27_2_1; struct XlBrk {} **x_27_2_2; unsigned int x_27_2_3; unsigned int x_27_2_4; unsigned int x_27_2_5; } x_57_1_27; struct ChVector<XlBrk *> { struct XlBrk {} **x_28_2_1; struct XlBrk {} **x_28_2_2; unsigned int x_28_2_3; unsigned int x_28_2_4; unsigned int x_28_2_5; } x_57_1_28; struct OcText { int (**x_29_2_1)(); int x_29_2_2; unsigned int x_29_2_3; unsigned int x_29_2_4; unsigned int x_29_2_5; char *x_29_2_6; char *x_29_2_7; bool x_29_2_8; } x_57_1_29; } x57; struct XlWorksheetProtection { int (**x_58_1_1)(); bool x_58_1_2; bool x_58_1_3; bool x_58_1_4; bool x_58_1_5; bool x_58_1_6; bool x_58_1_7; bool x_58_1_8; bool x_58_1_9; bool x_58_1_10; bool x_58_1_11; bool x_58_1_12; bool x_58_1_13; bool x_58_1_14; bool x_58_1_15; bool x_58_1_16; bool x_58_1_17; bool x_58_1_18; bool x_58_1_19; short x_58_1_20; } x58; struct XlCalculationProperties { int (**x_59_1_1)(); double x_59_1_2; int x_59_1_3; short x_59_1_4; bool x_59_1_5; int x_59_1_6; bool x_59_1_7; } x59; struct XlSortInfo { int (**x_60_1_1)(); bool x_60_1_2; bool x_60_1_3; bool x_60_1_4; bool x_60_1_5; bool x_60_1_6; bool x_60_1_7; unsigned char x_60_1_8; struct OcText { int (**x_9_2_1)(); int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; unsigned int x_9_2_5; char *x_9_2_6; char *x_9_2_7; bool x_9_2_8; } x_60_1_9; struct OcText { int (**x_10_2_1)(); int x_10_2_2; unsigned int x_10_2_3; unsigned int x_10_2_4; unsigned int x_10_2_5; char *x_10_2_6; char *x_10_2_7; bool x_10_2_8; } x_60_1_10; struct OcText { int (**x_11_2_1)(); int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; unsigned int x_11_2_5; char *x_11_2_6; char *x_11_2_7; bool x_11_2_8; } x_60_1_11; } x60; struct XlDocumentInfo { int (**x_61_1_1)(); unsigned short x_61_1_2; unsigned short x_61_1_3; int x_61_1_4; bool x_61_1_5; bool x_61_1_6; bool x_61_1_7; bool x_61_1_8; bool x_61_1_9; bool x_61_1_10; bool x_61_1_11; bool x_61_1_12; } x61; struct XlDocumentProtection { int (**x_62_1_1)(); bool x_62_1_2; bool x_62_1_3; bool x_62_1_4; short x_62_1_5; short x_62_1_6; } x62; struct XlFileProtection { int (**x_63_1_1)(); bool x_63_1_2; bool x_63_1_3; short x_63_1_4; struct OcText { int (**x_5_2_1)(); int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; char *x_5_2_6; char *x_5_2_7; bool x_5_2_8; } x_63_1_5; struct OcText { int (**x_6_2_1)(); int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; char *x_6_2_6; char *x_6_2_7; bool x_6_2_8; } x_63_1_6; unsigned short x_63_1_7; char *x_63_1_8; unsigned int x_63_1_9; char *x_63_1_10; } x63; int x64; int x65; struct XlDocumentProperties { int (**x_66_1_1)(); unsigned short x_66_1_2; short x_66_1_3; int x_66_1_4; bool x_66_1_5; bool x_66_1_6; bool x_66_1_7; bool x_66_1_8; bool x_66_1_9; bool x_66_1_10; bool x_66_1_11; bool x_66_1_12; int x_66_1_13; short x_66_1_14; short *x_66_1_15; struct OcText { int (**x_16_2_1)(); int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; char *x_16_2_6; char *x_16_2_7; bool x_16_2_8; } x_66_1_16; int x_66_1_17; struct XlRef { unsigned short x_18_2_1; unsigned short x_18_2_2; short x_18_2_3; short x_18_2_4; bool x_18_2_5; } x_66_1_18; bool x_66_1_19; } x66; struct XlSubstreamProperties { int (**x_67_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_67_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; bool x_3_2_8; bool x_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; bool x_3_2_15; int x_3_2_16; bool x_3_2_17; bool x_3_2_18; bool x_3_2_19; bool x_3_2_20; bool x_3_2_21; bool x_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_67_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_67_1_4; int x_67_1_5; int x_67_1_6; } x67; struct XlRecord {} *x68; struct SsrwOOStream {} *x69; unsigned char x70; struct XlObjectFactory {} *x71; struct XlParserVisitor {} *x72; bool x73; int (**x74)(); struct EshObjectFactory {} *x75; }* xlReader;

- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (void)dealloc;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (BOOL)isFileStructuredStorage;
- (id)read;
- (void)setIsFileStructuredStorage:(BOOL)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setUseStringOptimization:(BOOL)arg1;
- (BOOL)start;
- (id)temporaryDirectory;
- (BOOL)useStringOptimization;
- (struct XlBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; bool x39; bool x40; bool x41; struct ChVector<int> { int *x_42_1_1; int *x_42_1_2; unsigned int x_42_1_3; unsigned int x_42_1_4; unsigned int x_42_1_5; } x42; struct ChVector<int> { int *x_43_1_1; int *x_43_1_2; unsigned int x_43_1_3; unsigned int x_43_1_4; unsigned int x_43_1_5; } x43; struct ChVector<int> { int *x_44_1_1; int *x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; } x44; struct XlIndex {} *x45; struct XlRow {} *x46; struct XlRecord {} *x47; int x48; int x49; short x50; int x51; int x52; struct ChVector<XlCell *> { struct XlCell {} **x_53_1_1; struct XlCell {} **x_53_1_2; unsigned int x_53_1_3; unsigned int x_53_1_4; unsigned int x_53_1_5; } x53; int x54; unsigned char x55; int x56; struct XlWorksheetProperties { int (**x_57_1_1)(); unsigned short x_57_1_2; int x_57_1_3; unsigned short x_57_1_4; bool x_57_1_5; unsigned short x_57_1_6; unsigned short x_57_1_7; unsigned short x_57_1_8; unsigned short x_57_1_9; bool x_57_1_10; bool x_57_1_11; bool x_57_1_12; bool x_57_1_13; bool x_57_1_14; bool x_57_1_15; bool x_57_1_16; bool x_57_1_17; bool x_57_1_18; bool x_57_1_19; bool x_57_1_20; bool x_57_1_21; bool x_57_1_22; bool x_57_1_23; bool x_57_1_24; bool x_57_1_25; short x_57_1_26; struct ChVector<XlBrk *> { struct XlBrk {} **x_27_2_1; struct XlBrk {} **x_27_2_2; unsigned int x_27_2_3; unsigned int x_27_2_4; unsigned int x_27_2_5; } x_57_1_27; struct ChVector<XlBrk *> { struct XlBrk {} **x_28_2_1; struct XlBrk {} **x_28_2_2; unsigned int x_28_2_3; unsigned int x_28_2_4; unsigned int x_28_2_5; } x_57_1_28; struct OcText { int (**x_29_2_1)(); int x_29_2_2; unsigned int x_29_2_3; unsigned int x_29_2_4; unsigned int x_29_2_5; char *x_29_2_6; char *x_29_2_7; bool x_29_2_8; } x_57_1_29; } x57; struct XlWorksheetProtection { int (**x_58_1_1)(); bool x_58_1_2; bool x_58_1_3; bool x_58_1_4; bool x_58_1_5; bool x_58_1_6; bool x_58_1_7; bool x_58_1_8; bool x_58_1_9; bool x_58_1_10; bool x_58_1_11; bool x_58_1_12; bool x_58_1_13; bool x_58_1_14; bool x_58_1_15; bool x_58_1_16; bool x_58_1_17; bool x_58_1_18; bool x_58_1_19; short x_58_1_20; } x58; struct XlCalculationProperties { int (**x_59_1_1)(); double x_59_1_2; int x_59_1_3; short x_59_1_4; bool x_59_1_5; int x_59_1_6; bool x_59_1_7; } x59; struct XlSortInfo { int (**x_60_1_1)(); bool x_60_1_2; bool x_60_1_3; bool x_60_1_4; bool x_60_1_5; bool x_60_1_6; bool x_60_1_7; unsigned char x_60_1_8; struct OcText { int (**x_9_2_1)(); int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; unsigned int x_9_2_5; char *x_9_2_6; char *x_9_2_7; bool x_9_2_8; } x_60_1_9; struct OcText { int (**x_10_2_1)(); int x_10_2_2; unsigned int x_10_2_3; unsigned int x_10_2_4; unsigned int x_10_2_5; char *x_10_2_6; char *x_10_2_7; bool x_10_2_8; } x_60_1_10; struct OcText { int (**x_11_2_1)(); int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; unsigned int x_11_2_5; char *x_11_2_6; char *x_11_2_7; bool x_11_2_8; } x_60_1_11; } x60; struct XlDocumentInfo { int (**x_61_1_1)(); unsigned short x_61_1_2; unsigned short x_61_1_3; int x_61_1_4; bool x_61_1_5; bool x_61_1_6; bool x_61_1_7; bool x_61_1_8; bool x_61_1_9; bool x_61_1_10; bool x_61_1_11; bool x_61_1_12; } x61; struct XlDocumentProtection { int (**x_62_1_1)(); bool x_62_1_2; bool x_62_1_3; bool x_62_1_4; short x_62_1_5; short x_62_1_6; } x62; struct XlFileProtection { int (**x_63_1_1)(); bool x_63_1_2; bool x_63_1_3; short x_63_1_4; struct OcText { int (**x_5_2_1)(); int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; char *x_5_2_6; char *x_5_2_7; bool x_5_2_8; } x_63_1_5; struct OcText { int (**x_6_2_1)(); int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; char *x_6_2_6; char *x_6_2_7; bool x_6_2_8; } x_63_1_6; unsigned short x_63_1_7; char *x_63_1_8; unsigned int x_63_1_9; char *x_63_1_10; } x63; int x64; int x65; struct XlDocumentProperties { int (**x_66_1_1)(); unsigned short x_66_1_2; short x_66_1_3; int x_66_1_4; bool x_66_1_5; bool x_66_1_6; bool x_66_1_7; bool x_66_1_8; bool x_66_1_9; bool x_66_1_10; bool x_66_1_11; bool x_66_1_12; int x_66_1_13; short x_66_1_14; short *x_66_1_15; struct OcText { int (**x_16_2_1)(); int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; char *x_16_2_6; char *x_16_2_7; bool x_16_2_8; } x_66_1_16; int x_66_1_17; struct XlRef { unsigned short x_18_2_1; unsigned short x_18_2_2; short x_18_2_3; short x_18_2_4; bool x_18_2_5; } x_66_1_18; bool x_66_1_19; } x66; struct XlSubstreamProperties { int (**x_67_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_67_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; bool x_3_2_8; bool x_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; bool x_3_2_15; int x_3_2_16; bool x_3_2_17; bool x_3_2_18; bool x_3_2_19; bool x_3_2_20; bool x_3_2_21; bool x_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_67_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_67_1_4; int x_67_1_5; int x_67_1_6; } x67; struct XlRecord {} *x68; struct SsrwOOStream {} *x69; unsigned char x70; struct XlObjectFactory {} *x71; struct XlParserVisitor {} *x72; bool x73; int (**x74)(); struct EshObjectFactory {} *x75; }*)xlReader;

@end
