#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the yangcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xd2,0x7a,0x0a,0x2b}, 23001},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x79,0xa1,0xe5,0xf3}, 23001},
};

static SeedSpec6 pnSeed6_test[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc0,0xa8,0x00,0x0a}, 23011},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc0,0xa8,0x00,0x0c}, 23011},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xd2,0x7a,0x0a,0x2b}, 23011}
};
static char * pnSeedOnline_main[] = {
    "YRqZRto9qXTMy13wmgWUQY28ECcNwnednE",
    "YhPzqLKEFusePwmsesLNLqpvzo4zaW8iT6",
    "YgxxsQdEs7bY97tEzAT8BdyvZzG9fkuy7H" ,
    "YeMSX5Tdz9qW8VCL94sSaEo4JziytAGM2W" ,
    "YWkskYPQuutJGCdqcPGPF21UVBCfJ4pGKH" ,
    "Yc2Fc7zgTuh5gyfxUxNssDu1boFnCRrNrm" ,
    "YgEw7ueZinJgZj9QjbspiXRJGpRKWURJZt" 
};
static char * pnSeedOnline_test[] = {
    "ZMmtyCxii7CtHUWHikSi8rrJSzft4MsmVW", // priv key, cRESQFi5HKtG1PHPXZsM3skA7cmdazESfjEEapMUAXHMNRMhDA5G
    "ZWWzZTbNzBjDR2akyCBMpkVoQ2tucd5QkS",//cRdZuqUpdyBhcoXQmYzCbXRNmVKBssgdhzKSLNz3RquETUdSw5tD
    "ZPexNk2ffuDWExGWLQHS99JZj9rd5akxum"// cN3pmRB2F1NHAtKDKginxrZUJ375eLHKUdT4pQqYV4qBt8U85SNa
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
