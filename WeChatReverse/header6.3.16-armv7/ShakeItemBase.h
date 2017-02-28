//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString, ShakePayItem, ShakeProductItem, ShakeTempSessionItem, ShakeTvHistoryItem, ShakeTvItem, ShakeUrlItem, ShakeUserItem;

@interface ShakeItemBase : NSObject <PBCoding, NSCoding, NSCopying>
{
    int itemType;
    unsigned int createTime;
    ShakeTvItem *shakeTvItem;
    ShakeUrlItem *shakeUrlItem;
    ShakeUserItem *shakeUsrItem;
    ShakePayItem *shakePayItem;
    ShakeProductItem *shakeProductItem;
    ShakeTempSessionItem *shakeTempSessionItem;
    ShakeTvHistoryItem *shakeTvHistoryItem;
}

+ (id)getShakeItemFromXml:(id)arg1 andType:(int)arg2;
+ (void)initialize;
+ (void)parseXml:(struct XmlReaderNode_t *)arg1 toShakeAction:(id)arg2;
+ (id)parseXmlToShakePay:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeProduct:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeTvHistory:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUrl:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUser:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToTempSession:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void)encodeWithCoder:(id)arg1;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int itemType; // @synthesize itemType;
@property(retain, nonatomic) ShakePayItem *shakePayItem; // @synthesize shakePayItem;
@property(retain, nonatomic) ShakeProductItem *shakeProductItem; // @synthesize shakeProductItem;
@property(retain, nonatomic) ShakeTempSessionItem *shakeTempSessionItem; // @synthesize shakeTempSessionItem;
@property(retain, nonatomic) ShakeTvHistoryItem *shakeTvHistoryItem; // @synthesize shakeTvHistoryItem;
@property(retain, nonatomic) ShakeTvItem *shakeTvItem; // @synthesize shakeTvItem;
@property(retain, nonatomic) ShakeUrlItem *shakeUrlItem; // @synthesize shakeUrlItem;
@property(retain, nonatomic) ShakeUserItem *shakeUsrItem; // @synthesize shakeUsrItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

