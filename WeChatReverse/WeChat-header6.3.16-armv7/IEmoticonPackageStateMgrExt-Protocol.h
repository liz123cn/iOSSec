//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class EmoticonStoreItem;

@protocol IEmoticonPackageStateMgrExt
- (void)OnUpdateEmoticonPackageState:(EmoticonStoreItem *)arg1 toState:(int)arg2;

@optional
- (void)OnBuyItemCancel:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemFailed:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemSuccess:(EmoticonStoreItem *)arg1;
- (void)OnDownloadProgressChanged:(EmoticonStoreItem *)arg1 CurrLength:(unsigned int)arg2 TotalLength:(unsigned int)arg3;
@end

