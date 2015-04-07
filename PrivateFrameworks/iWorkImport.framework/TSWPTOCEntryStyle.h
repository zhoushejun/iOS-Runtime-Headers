/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPTOCEntryStyle : TSWPParagraphStyle {
}

+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;

- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TOCEntryStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; bool x4; bool x5; int x6; unsigned int x7[1]; }*)arg2 unarchiver:(id)arg3;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; bool x4; bool x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (const struct ParagraphStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct CharacterStylePropertiesArchive {} *x4; struct ParagraphStylePropertiesArchive {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)paragraphStyleArchiveFromUnarchiver:(id)arg1;
- (id)presetKind;
- (void)saveToArchive:(struct TOCEntryStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ParagraphStyleArchive {} *x3; struct TOCEntryStylePropertiesArchive {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
