//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface PBBaseContact : NSObject <PBCoding>
{
    NSString *userName;
    NSString *aliasName;
    unsigned int conType;
    NSString *nickName;
    NSString *fullPy;
    NSString *remark;
    NSString *remarkPyshort;
    NSString *remarkPyfull;
    unsigned int sex;
    unsigned int type;
    unsigned int chatState;
    NSString *imgStatus;
    NSString *hdimgStatus;
    NSString *headImgUrl;
    NSString *headHdimgUrl;
    NSString *draft;
    unsigned int qquin;
    NSString *qqnickName;
    NSString *qqremark;
    NSString *mobileIdentify;
    unsigned int friendScene;
    unsigned int imgKey;
    unsigned int extKey;
    unsigned int imgKeyAtLastGet;
    unsigned int extKeyAtLastGet;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName;
@property(nonatomic) unsigned int chatState; // @synthesize chatState;
@property(nonatomic) unsigned int conType; // @synthesize conType;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(nonatomic) unsigned int extKey; // @synthesize extKey;
@property(nonatomic) unsigned int extKeyAtLastGet; // @synthesize extKeyAtLastGet;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene;
@property(retain, nonatomic) NSString *fullPy; // @synthesize fullPy;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *hdimgStatus; // @synthesize hdimgStatus;
@property(retain, nonatomic) NSString *headHdimgUrl; // @synthesize headHdimgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(nonatomic) unsigned int imgKey; // @synthesize imgKey;
@property(nonatomic) unsigned int imgKeyAtLastGet; // @synthesize imgKeyAtLastGet;
@property(retain, nonatomic) NSString *imgStatus; // @synthesize imgStatus;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *qqnickName; // @synthesize qqnickName;
@property(retain, nonatomic) NSString *qqremark; // @synthesize qqremark;
@property(nonatomic) unsigned int qquin; // @synthesize qquin;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *remarkPyfull; // @synthesize remarkPyfull;
@property(retain, nonatomic) NSString *remarkPyshort; // @synthesize remarkPyshort;
- (void)setFromCBaseContact:(id)arg1;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (id)toCBaseContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
