/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _changeType;
    NSDate *_dateDeleted;
    NSString *_identifier;
    BOOL _inExpunged;
    BOOL _inTrash;
    BOOL _isSparseFullChange;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
    NSDate *_recordModificationDate;
    BOOL _shouldFilterDefaultValuesForNewProperties;
}

@property unsigned int changeType;
@property(copy) NSDate * dateDeleted;
@property(copy) NSString * identifier;
@property BOOL inExpunged;
@property BOOL inTrash;
@property(copy) NSString * realIdentifier;
@property(copy) NSData * recordChangeData;
@property(copy) NSDate * recordModificationDate;

+ (id)_descriptionForChangeType:(unsigned int)arg1 isSparseFullChange:(BOOL)arg2;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (id)deleteChangeWithIdentifier:(id)arg1;
+ (id)descriptionForChangeType:(unsigned int)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned int)arg2;
+ (id)newChangeWithType:(unsigned int)arg1;
+ (id)newRecord;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_addRealChangeToChangeBatch:(id)arg1 withStoredRecord:(id)arg2 andApplyToClientCache:(id)arg3 error:(id*)arg4;
- (BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3;
- (BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned int)arg3 updatedProperty:(id*)arg4;
- (void)awakeFromStorage;
- (unsigned int)changeType;
- (id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cplFullDescription;
- (id)dateDeleted;
- (BOOL)decodePropertiesFromObject:(id)arg1;
- (int)dequeueOrder;
- (id)description;
- (BOOL)encodePropertiesInObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasChangeType:(unsigned int)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)identifiersForMapping;
- (BOOL)inExpunged;
- (BOOL)inTrash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDelete;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFullRecord;
- (BOOL)isSparseFullChange;
- (void)markAsSparseFullChange;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)proposedCloudIdentifierWithError:(id*)arg1;
- (id)proposedLocalIdentifier;
- (id)realIdentifier;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2 updatedProperties:(id*)arg3;
- (unsigned long long)realResourceSize;
- (id)recordChangeData;
- (id)recordModificationDate;
- (id)relatedIdentifier;
- (id)resourceForType:(unsigned int)arg1;
- (id)resources;
- (id)resourcesDescription;
- (id)secondaryIdentifier;
- (void)setChangeType:(unsigned int)arg1;
- (void)setDateDeleted:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInExpunged:(BOOL)arg1;
- (void)setInTrash:(BOOL)arg1;
- (void)setRealIdentifier:(id)arg1;
- (void)setRecordChangeData:(id)arg1;
- (void)setRecordModificationDate:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1;
- (BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (BOOL)shouldFilterDefaultValuesForNewProperties;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (BOOL)supportsResources;
- (unsigned long long)totalResourceSize;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
