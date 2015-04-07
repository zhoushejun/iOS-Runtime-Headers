/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField {
    unsigned int _displayFlags;
}

@property unsigned int displayFlags;

- (BOOL)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (unsigned int)displayFlags;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; bool x5; int x6; unsigned int x7[1]; }*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setDisplayFlags:(unsigned int)arg1;
- (int)smartFieldKind;

@end
